#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainWindow()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->toolBox->setCurrentIndex(0);
    QSqlQueryModel *categoryModel = new QSqlQueryModel(this);//商品类别模型数据
    categoryModel->setQuery("select Name from category");
    ui->newCategoryComboBox->setModel(categoryModel);//商品类别列表加载（新品入库页）
    commodity_model = new QSqlTableModel(this);//商品信息视图
    commodity_model->setTable("commodity_inf");
    commodity_model->select();
    ui->commodityTableView->setModel(commodity_model);//库存商品记录数据网格信息加载（新品入库页）
    ui->preCategoryComboBox->setModel(categoryModel);//商品类别列表加载（预售订单页）
    loadPreCommodity();//在预售订单页加载商品信息
    myMemberID = "b02020622";
    //myOrdered = false;
    myOrdered = true;
    //myOrderID = 0;
    myOrderID = 4;
    myPaySum = 0;
    QListWidgetItem *title = new QListWidgetItem;
    title->setText(QString("当 前 订 单 【 编号 %1 】").arg(myOrderID));
    title->setTextAlignment(Qt::AlignCenter);
    //ui->sellListWidget->addItem(title);
}

void MainWindow::onTableSelectChange(int row)
{
    int r = 1;
    if(row != 0) r = ui->commodityTableView->currentIndex().row();
    QModelIndex index;
    index = commodity_model->index(r, 0);                   //名称
    ui->newNameLineEdit->setText(commodity_model->data(index).toString());
    index = commodity_model->index(r, 1);                   //进价
    ui->newInputPriceLineEdit->setText(commodity_model->data(index).toString());
    index = commodity_model->index(r, 2);                   //售价
    ui->newOutputPriceLineEdit->setText(commodity_model->data(index).toString());
    showCommodityPhoto();                                   //商品样照
    QSqlQuery query;
    query.exec(QString("select Name from category where CategoryID=(select CategoryID from commodity where Name='%1')").arg(ui->newNameLineEdit->text()));
    query.next();
    ui->newCategoryComboBox->setCurrentText(query.value(0).toString());//类别联动
}

void MainWindow::showCommodityPhoto()
{
    QPixmap photo;
    QModelIndex index;
    QSqlQueryModel *pictureModel = new QSqlQueryModel(this);//商品样照模型数据
    QString name = ui->newNameLineEdit->text();
    pictureModel->setQuery("select Picture from commodity where Name='" + name + "'");
    index = pictureModel->index(0, 0);
    photo.loadFromData(pictureModel->data(index).toByteArray(), "JPG");
    ui->newPictureLabel->setPixmap(photo);
}

void MainWindow::loadPreCommodity()
{
    QSqlQueryModel *commodityNameModel = new QSqlQueryModel(this);//商品名称模型数据
    commodityNameModel->setQuery(QString("select Name from commodity where CategoryID=(select CategoryID from category where Name='%1')").arg(ui->preCategoryComboBox->currentText()));
    ui->preNameComboBox->setModel(commodityNameModel);//商品名称列表加载（预售订单页）
    onPreNameComboBoxChange();
}

void MainWindow::onPreNameComboBoxChange()
{
    QSqlQueryModel *preCommodityModel = new QSqlQueryModel(this);//商品表模型数据
    QString name = ui->preNameComboBox->currentText();
    preCommodityModel->setQuery("select OutputPrice, Amount, Picture from commodity where Name='" + name + "'");
    QModelIndex index;
    index = preCommodityModel->index(0, 0);                   //单价
    ui->preOutputPriceLabel->setText(preCommodityModel->data(index).toString());
    index = preCommodityModel->index(0, 1);                   //库存
    ui->preAmountLabel->setText(preCommodityModel->data(index).toString());
    ui->preCountSpinBox->setMaximum(ui->preAmountLabel->text().toInt());
    //下面开始获取和展示照片
    QPixmap photo;
    index = preCommodityModel->index(0, 2);
    photo.loadFromData(preCommodityModel->data(index).toByteArray(), "JPG");
    ui->prePictureLabel->setPixmap(photo);
    //计算总价
    ui->preTotalLabel->setText(QString::number(ui->preOutputPriceLabel->text().toFloat() * ui->preCountSpinBox->value()));
}

void MainWindow::on_commodityTableView_clicked(const QModelIndex &index)
{
    onTableSelectChange(1);
}

void MainWindow::on_preCategoryComboBox_currentIndexChanged(int index)
{
    loadPreCommodity();
}

void MainWindow::on_preNameComboBox_currentIndexChanged(int index)
{
    onPreNameComboBoxChange();
}

void MainWindow::on_preCountSpinBox_valueChanged(int arg1)
{
    ui->preTotalLabel->setText(QString::number(ui->preOutputPriceLabel->text().toFloat() * arg1));
}

void MainWindow::on_preSellPushButton_clicked()
{
    QSqlQuery query;
    if (!myOrdered)
    {
        query.exec(QString("insert into orders(MemberID, PaySum, PayWay, OTime) values('%1', NULL, NULL, NULL)").arg(myMemberID));
        myOrdered = true;
        query.exec(QString("select OrderID from orders where OTime IS NULL"));
        query.next();
        myOrderID = query.value(0).toInt();
    }
    //下面开始预售
    query.exec(QString("select CommodityID from commodity where Name='%1'").arg(ui->preNameComboBox->currentText()));
    query.next();
    int commodityid = query.value(0).toInt();//本次预售商品编号
    int count = ui->preCountSpinBox->value();//预售量
    int amount = ui->preCountSpinBox->maximum() - count;//剩余库存量
    QSqlDatabase::database().transaction();//开始一个事务
    bool insOk = query.exec(QString("insert into orderitems(OrderID, CommodityID, Count) values(%1, %2, %3)").arg(myOrderID).arg(commodityid).arg(count));//新增订单项
    bool uptOk = query.exec(QString("update commodity set Amount=%1 where CommodityID=%2").arg(amount).arg(commodityid));//更新库存
    if (insOk && uptOk)
    {
        QSqlDatabase::database().commit();
        onPreNameComboBoxChange();
        //显示预售清单
        QString curtime = QTime::currentTime().toString("hh:mm:ss");
        QString curname = ui->preNameComboBox->currentText();
        QString curcount = QString::number(count, 10);
        QString curoutprice = ui->preOutputPriceLabel->text();
        QString curtotal = ui->preTotalLabel->text();
        myPaySum += curtotal.toFloat();
        QString sell_record = curtime + " " + "售出：" + curname + "\r\n              数量：" + curcount + "；单价：" + curoutprice + "¥；总价：" + curtotal + "¥";
        QListWidgetItem *split = new QListWidgetItem;
        split->setText("——.——.——.——.——.——.——.——.——.——.——.——.——.——.——");
        split->setTextAlignment(Qt::AlignCenter);
        ui->sellListWidget->addItem(split);
        ui->sellListWidget->addItem(sell_record);
        ui->prePlaceOrderPushButton->setEnabled(true);
        QMessageBox::information(0, QObject::tr("提示"), "已加入订单！");
    } else {
        QSqlDatabase::database().rollback();
    }
}

void MainWindow::on_prePlaceOrderPushButton_clicked()
{
    QSqlQuery query;
    QString otime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    QSqlDatabase::database().transaction();//开始一个事务
    bool ordOk = query.exec(QString("update orders set PaySum=%1, OTime='%2' where OrderID=%3").arg(myPaySum).arg(otime).arg(myOrderID));//下订单
    bool uptOk = query.exec(QString("update orderitems set Affirm=1, SendGoods=1 where OrderID=%1").arg(myOrderID));//确认发货
    if (ordOk && uptOk)
    {
        QSqlDatabase::database().commit();
        ui->prePlaceOrderPushButton->setEnabled(false);
        //显示下单记录
        QString order_record = "日 期：" + otime + "\r\n订 单 号：" + QString(" %1 ").arg(myOrderID) + "\r\n应付款总额：" + QString(" %1¥").arg(myPaySum) + "\r\n下 单 成 功！";
        QListWidgetItem *split = new QListWidgetItem;
        split->setText("***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.***.***");
        split->setTextAlignment(Qt::AlignCenter);
        ui->sellListWidget->addItem(split);
        ui->sellListWidget->addItem(order_record);
        myPaySum = 0;
        QMessageBox::information(0, QObject::tr("提示"), "下单成功！");
        commodity_model->setTable("commodity_inf");
        commodity_model->select();
        ui->commodityTableView->setModel(commodity_model);//刷新数据网格（新品入库页）
    } else {
        QSqlDatabase::database().rollback();
    }
}

void MainWindow::on_newUploadPushButton_clicked()
{
    QString picturename = QFileDialog::getOpenFileName(this, "选择商品图片", ".", "Image File(*.png *.jpg *.jpeg *.bmp)");
    if (picturename.isEmpty()) return;
    myPicImg.load(picturename);
    ui->newPictureLabel->setPixmap(QPixmap::fromImage(myPicImg));
}

void MainWindow::on_newPutinStorePushButton_clicked()
{
    QSqlQuery query;
    query.exec(QString("select CategoryID from category where Name='%1'").arg(ui->newCategoryComboBox->currentText()));
    query.next();
    int categoryid = query.value(0).toInt();//将要入库的商品类别
    QString name = ui->newNameLineEdit->text();//商品名称
    float inputprice = ui->newInputPriceLineEdit->text().toFloat();//进价
    float outputprice = ui->newOutputPriceLineEdit->text().toFloat();//售价
    int count = ui->newCountSpinBox->value();//入库量
    query.exec(QString("insert into commodity(CategoryID, Name, Picture, InputPrice, OutputPrice, Amount) values(%1, '%2', NULL, %3, %4, %5)").arg(categoryid).arg(name).arg(inputprice).arg(outputprice).arg(count));//插入新入库的商品记录
    //插入照片
    QByteArray picdata;
    QBuffer buffer(&picdata);
    buffer.open(QIODevice::WriteOnly);
    myPicImg.save(&buffer, "JPG");
    QVariant var(picdata);
    QString sqlstr = "update commodity set Picture=? where Name='" + name + "'";
    query.prepare(sqlstr);
    query.addBindValue(var);
    if(!query.exec())
    {
        QMessageBox::information(0, QObject::tr("提示"), "照片写入失败");
    }
    //刷新网格信息
    commodity_model->setTable("commodity_inf");
    commodity_model->select();
    ui->commodityTableView->setModel(commodity_model);//刷新数据网格（新品入库页）
}

void MainWindow::on_newClearancePushButton_clicked()
{
    QSqlQuery query;
    query.exec(QString("delete from commodity where Name='%1'").arg(ui->newNameLineEdit->text()));//删除商品记录
    //刷新界面
    ui->newNameLineEdit->setText("");
    ui->newInputPriceLineEdit->setText("");
    ui->newOutputPriceLineEdit->setText("");
    ui->newCountSpinBox->setValue(1);
    ui->newPictureLabel->clear();
    commodity_model->setTable("commodity_inf");
    commodity_model->select();
    ui->commodityTableView->setModel(commodity_model);//刷新数据网格（新品入库页）
}
