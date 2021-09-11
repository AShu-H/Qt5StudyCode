#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
    //基本信息视图
    model = new QSqlTableModel(this);
    model->setTable("basic_inf");
    model->select();
    //附加详细信息视图
    model_d = new QSqlTableModel(this);
    model_d->setTable("details_inf");
    model_d->select();
    //数据网格信息加载
    ui->basicTableView->setModel(model);
    //初始化表单患者信息
    onTableSelectChange(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainWindow()
{
    QString ctImgPath = "D:\\Qt\\test\\Tumor.jpg";            //路径中不能含中文字符,且图像大小1000*500
    //QString ctImgPath = "D:\\Qt\\test\\CT.jpg";
    Mat ctImg = imread(ctImgPath.toLatin1().data());          //读取CT图像数据
    cvtColor(ctImg, ctImg, COLOR_BGR2RGB);                  //图像格式转换
    myCtImg = ctImg;
    myCtQImage = QImage((const unsigned char*)(ctImg.data), ctImg.cols, ctImg.rows, QImage::Format_RGB888);
    ctImgShow();
    //时间日期更新
    QDate date = QDate::currentDate();
    int year = date.year();
    ui->yearLcdNumber->display(year);
    int month = date.month();
    ui->monthLcdNumber->display(month);
    int day = date.day();
    ui->dayLcdNumber->display(day);
    myTimer = new QTimer();                                         //创建一个QTimer对象
    myTimer->setInterval(1000);                                     //设置定时器每隔多少毫秒发送一个timeout()信号
    myTimer->start();                                               //启动定时器
    connect(myTimer, SIGNAL(timeout()), this, SLOT(onTimeOut()));   //绑定消息槽函数
}

void MainWindow::onTableSelectChange(int row)
{
    int r = 1;
    if(row != 0) r = ui->basicTableView->currentIndex().row();
    QModelIndex index;
    index = model->index(r, 1);                             //姓名
    ui->nameLabel->setText(model->data(index).toString());
    index = model->index(r, 2);                             //性别
    QString sex = model->data(index).toString();
    (sex.compare("男") == 0) ? ui->maleRadioButton->setChecked(true) : ui->femaleRadioButton->setChecked(true);
    index = model->index(r, 4);                             //出生日期
    QDate date;
    int now = date.currentDate().year();
    int bir = model->data(index).toDate().year();
    ui->ageSpinBox->setValue(now - bir);
    index = model->index(r, 3);                             //民族
    QString ethnic = model->data(index).toString();
    ui->ethniComboBox->setCurrentText(ethnic);
    index = model->index(r, 0);                             //医保卡编号
    QString ssn = model->data(index).toString();
    ui->ssnLineEdit->setText(ssn);
    showUserPhoto();                                        //照片
}

void MainWindow::showUserPhoto()
{
    QPixmap photo;
    QModelIndex index;
    for(int i = 0; i < model_d->rowCount(); i++)
    {
        index = model_d->index(i, 0);
        QString current_name = model_d->data(index).toString();
        if(current_name.compare(ui->nameLabel->text()) == 0)
        {
            index = model_d->index(i, 2);
            break;
        }
    }
    photo.loadFromData(model_d->data(index).toByteArray(), "JPG");
    ui->photoLabel->setPixmap(photo);
}

void MainWindow::onTimeOut()
{
    QTime time = QTime::currentTime();                      //获取当前系统时间
    ui->timeEdit->setTime(time);                            //设置时间框里显示的值
}

void MainWindow::ctImgRead()
{
    QString ctImgName = QFileDialog::getOpenFileName(this, "载入CT相片", ".", "Image File(*.png *.jpg *.jpeg *.bmp)");
    if (ctImgName.isEmpty()) return;
    Mat ctRgbImg, ctGrayImg;
    Mat ctImg = imread(ctImgName.toLatin1().data());          //读取CT图像数据
    cvtColor(ctImg, ctRgbImg, COLOR_BGR2RGB);                  //格式转换为RGB
    cvtColor(ctRgbImg, ctGrayImg, CV_RGB2GRAY);                  //格式转换为灰度图
    myCtImg = ctRgbImg;
    myCtGrayImg = ctGrayImg;
    myCtQImage = QImage((const unsigned char*)(ctRgbImg.data), ctRgbImg.cols, ctRgbImg.rows, QImage::Format_RGB888);
    ctImgShow();
}

void MainWindow::ctImgProc()
{
    QTime time;
    time.start();
    ui->progressBar->setValue(19);
    while (time.elapsed() < 2000) { QCoreApplication::processEvents(); }
    ctImgHoughCircles();
    while (time.elapsed() < 2000) { QCoreApplication::processEvents(); }
    ui->progressBar->setValue(ui->progressBar->value() + 20);
    ctImgShow();
    while (time.elapsed() < 2000) { QCoreApplication::processEvents(); }
    ui->progressBar->setValue(ui->progressBar->maximum());
    QMessageBox::information(this, tr("完毕"), tr("子宫内壁见椭球形阴影,疑似子宫肌瘤"));
}

void MainWindow::ctImgSave()
{
    QFile image("D:\\Qt\\imgproc\\Tumor_1.jpg");
    if (!image.open(QIODevice::ReadWrite)) return;
    QByteArray qba;
    QBuffer buf(&qba);
    buf.open(QIODevice::WriteOnly);
    myCtQImage.save(&buf, "JPG");
    image.write(qba);
}

void MainWindow::ctImgShow()
{
    ui->CT_Img_Label->setPixmap(QPixmap::fromImage(myCtQImage.scaled(ui->CT_Img_Label->size(), Qt::KeepAspectRatio)));//在QT界面上显示CT图像
}

void MainWindow::ctImgHoughCircles()
{
    Mat ctGrayImg = myCtGrayImg.clone();
    Mat ctColorImg;
    cvtColor(ctGrayImg, ctColorImg, CV_GRAY2BGR);
    GaussianBlur(ctGrayImg, ctGrayImg, Size(9, 9), 2, 2);//对图像作高斯平滑处理
    vector<Vec3f> h_circles;//用向量数组存储病灶区圆圈
    HoughCircles(ctGrayImg, h_circles, CV_HOUGH_GRADIENT, 2, ctGrayImg.rows/8, 200, 100);
    int processValue = 45;
    ui->progressBar->setValue(processValue);
    QTime time;
    time.start();
    while (time.elapsed() < 2000) { QCoreApplication::processEvents(); }
    for(size_t i = 0; i < h_circles.size(); i++)
    {
        Point center(cvRound(h_circles[i][0]), cvRound(h_circles[i][1]));
        int h_radius = cvRound(h_circles[i][2]);
        circle(ctColorImg, center, h_radius, Scalar(238, 0, 238), 3, 8, 0);//以粉色圆圈圈出CT相片上的病灶区
        circle(ctColorImg, center, 3, Scalar(238, 0, 0), -1, 8, 0);//以鲜红圆心点标出各个病灶区的中心所在
        processValue += 1;
        ui->progressBar->setValue(processValue);
    }
    myCtImg = ctColorImg;
    myCtQImage = QImage((const unsigned char*)(myCtImg.data), myCtImg.cols, myCtImg.rows, QImage::Format_RGB888);
}

void MainWindow::on_startPushButton_clicked()
{
    ctImgRead();
    QTime time;
    time.start();
    ui->progressBar->setMaximum(0);
    ui->progressBar->setMinimum(0);
    while (time.elapsed() < 5000)           //等待时间流逝5秒钟
    {
        QCoreApplication::processEvents();  //处理事件以保持界面刷新
    }
    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);
    ctImgProc();
    ui->progressBar->setValue(0);
    ctImgSave();
}

void MainWindow::on_basicTableView_clicked(const QModelIndex &index)
{
    onTableSelectChange(1);
}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    //填写病历
    if(index == 1)
    {
        QModelIndex index;
        for(int i = 0; i < model_d->rowCount(); i++)
        {
            index = model_d->index(i, 0);
            QString current_name = model_d->data(index).toString();
            if(current_name.compare(ui->nameLabel->text()) == 0)
            {
                index = model_d->index(i, 1);
                break;
            }
        }
        ui->caseTextEdit->setText(model_d->data(index).toString());
        ui->caseTextEdit->setFont(QFont("楷体", 12));
    }
}
