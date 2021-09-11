#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "opencv2/opencv.hpp"//OpenCV文件包含

using namespace cv;          //OpenCV命名空间
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initMainWindow();                          //界面初始化
    void imgProc();                                 //处理图片
    void imgShow();                                 //显示图片

private slots:
    void on_matchPushButton_clicked();

private:
    Ui::MainWindow *ui;
    Mat myImg;              //缓存图片（供程序代码引用和处理）
    QImage myQImg;          //保存图片（可转为文件存盘或显示）
};

#endif // MAINWINDOW_H
