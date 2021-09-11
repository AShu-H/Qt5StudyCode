#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QBuffer>
//#include <vector>            //包含向量类动态数组功能
#include "opencv2/opencv.hpp"//OpenCV文件包含
//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QTime>
#include <QPixmap>

using namespace cv;          //OpenCV命名空间
//using namespace std;         //使用vector必须

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initMainWindow();
    void onTableSelectChange(int row);
    void showCommodityPhoto();
    void loadPreCommodity();
    void onPreNameComboBoxChange();

private slots:
    void on_commodityTableView_clicked(const QModelIndex &index);

    void on_preCategoryComboBox_currentIndexChanged(int index);

    void on_preNameComboBox_currentIndexChanged(int index);

    void on_preCountSpinBox_valueChanged(int arg1);

    void on_preSellPushButton_clicked();

    void on_prePlaceOrderPushButton_clicked();

    void on_newUploadPushButton_clicked();

    void on_newPutinStorePushButton_clicked();

    void on_newClearancePushButton_clicked();

private:
    Ui::MainWindow *ui;
    QImage myPicImg;                          //保存商品样照（界面显示）
    QSqlTableModel *commodity_model;          //访问数据库商品信息视图的模型
    QString myMemberID;                       //会员帐号
    bool myOrdered;                           //是否正在购买(订单已写入数据库)
    int myOrderID;                            //订单编号
    float myPaySum;                           //当前订单累计需要付款的总金额
};

/**访问MySQL数据库的静态方法*/
static bool createMySqlConn()
{
    QSqlDatabase sqldb = QSqlDatabase::addDatabase("QMYSQL");
    sqldb.setHostName("localhost");
    sqldb.setDatabaseName("emarket");//数据库名称
    sqldb.setUserName("root");      //数据库用户名
    sqldb.setPassword("123456");    //登录密码
    if (!sqldb.open()) {
        QMessageBox::critical(0, QObject::tr("后台数据库连接失败"), "无法创建连接！请检查排除故障后重启程序。", QMessageBox::Cancel);
        return false;
    }
    //QMessageBox::information(0, QObject::tr("后台数据库已启动、正在运行……"), "数据库连接成功！即将启动应用程序。");
    //向数据库中插入照片
    /*
    QSqlQuery query(sqldb);
    QString photoPath = "D:\\Qt\\imgproc\\21.jpg";//照片不能大于60K
    QFile photoFile(photoPath);
    if (photoFile.exists())
    {
        //存入数据库
        QByteArray picdata;
        photoFile.open(QIODevice::ReadOnly);
        picdata = photoFile.readAll();
        photoFile.close();
        QVariant var(picdata);
        QString sqlstr = "update commodity set Picture=? where CommodityID=6";
        query.prepare(sqlstr);
        query.addBindValue(var);
        if(!query.exec())
        {
            QMessageBox::information(0, QObject::tr("提示"), "照片写入失败");
        } else{
            QMessageBox::information(0, QObject::tr("提示"), "照片已写入数据库");
        }
    }
    sqldb.close();
    */
    return true;
}

#endif // MAINWINDOW_H
