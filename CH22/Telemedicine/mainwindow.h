#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QBuffer>
#include <vector>            //包含向量类动态数组功能
#include "opencv2/opencv.hpp"//OpenCV文件包含
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QTimer>

using namespace cv;          //OpenCV命名空间
using namespace std;         //使用vector必须

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
    void ctImgRead();
    void ctImgProc();
    void ctImgSave();
    void ctImgShow();
    void ctImgHoughCircles();
    void onTableSelectChange(int row);
    void showUserPhoto();

private slots:
    void on_startPushButton_clicked();

    void on_basicTableView_clicked(const QModelIndex &index);

    void on_tabWidget_tabBarClicked(int index);

    void onTimeOut();

private:
    Ui::MainWindow *ui;
    Mat myCtImg;                    //缓存CT相片（供程序中的方法随时引用）
    Mat myCtGrayImg;                //缓存CT灰度图（供程序算法处理用）
    QImage myCtQImage;              //保存CT相片（转为文件存盘存档）
    QSqlTableModel *model;          //访问数据库基本信息视图的模型
    QSqlTableModel *model_d;        //访问数据库附加详细信息（病历、照片）视图的模型
    QTimer *myTimer;                //获取当前系统时间（精确到秒）
};

/**访问MySQL数据库的静态方法*/
static bool createMySqlConn()
{
    QSqlDatabase sqldb = QSqlDatabase::addDatabase("QMYSQL");
    sqldb.setHostName("localhost");
    sqldb.setDatabaseName("patient");//数据库名称
    sqldb.setUserName("root");      //数据库用户名
    sqldb.setPassword("123456");    //登录密码
    if (!sqldb.open()) {
        QMessageBox::critical(0, QObject::tr("后台数据库连接失败"), "无法创建连接！请检查排除故障后重启程序。", QMessageBox::Cancel);
        return false;
    }
    QMessageBox::information(0, QObject::tr("后台数据库已启动、正在运行……"), "数据库连接成功！即将启动应用程序。");
    //向数据库中插入照片
    /*
    QSqlQuery query(sqldb);
    QString photoPath = "D:\\Qt\\test\\赵国庆.jpg";
    QFile photoFile(photoPath);
    if (photoFile.exists())
    {
        //存入数据库
        QByteArray picdata;
        photoFile.open(QIODevice::ReadOnly);
        picdata = photoFile.readAll();
        photoFile.close();
        QVariant var(picdata);
        QString sqlstr = "update user_profile set picture=? where name='赵国庆'";
        query.prepare(sqlstr);
        query.addBindValue(var);
        if(!query.exec())
        {
            QMessageBox::information(0, QObject::tr("提示"), "照片写入失败");
        } else{
            QMessageBox::information(0, QObject::tr("提示"), "照片已写入数据库");
        }
    }
    */
    sqldb.close();
    return true;
}

#endif // MAINWINDOW_H
