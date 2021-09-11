#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "opencv2/opencv.hpp"//OpenCV文件包含
#include <QFileDialog>      //文件对话框
#include <QScreen>
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
    void initMainWindow();  //界面初始化
    void imgProc(int kernel);   //处理图片
    void imgShow();         //显示图片

private slots:
    void on_kernelVerticalSlider_sliderMoved(int position);

    void on_kernelVerticalSlider_valueChanged(int value);

    void on_saveAsPushButton_clicked();

private:
    Ui::MainWindow *ui;
    Mat myImg;              //缓存图片（供程序代码引用和处理）
    QImage myBlurQImg;          //保存均值滤波图片
    QImage myGaussianQImg;      //保存高斯滤波图片
    QImage myMedianQImg;        //保存中值滤波图片
    QImage myBilateralQImg;     //保存双边滤波图片
};

#endif // MAINWINDOW_H
