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
    QString imgPath = "shape01.jpg";                  //本地路径（图片直接存放在项目目录下）
    Mat imgData = imread(imgPath.toLatin1().data());    //读取图像数据
    cvtColor(imgData, imgData, COLOR_BGR2RGB);          //图像格式转换
    myImg = imgData;
    myQImg = QImage((const unsigned char*)(imgData.data), imgData.cols, imgData.rows, QImage::Format_RGB888);
    imgShow();
}

void MainWindow::imgProc(float alp)
{
    Mat imgSrc1 = myImg;
    QString imgPath = "shape02.jpg";            //路径中不能含中文字符
    Mat imgSrc2 = imread(imgPath.toLatin1().data());          //读取图像数据
    cvtColor(imgSrc2, imgSrc2, COLOR_BGR2RGB);                  //图像格式转换
    Mat imgDst;
    addWeighted(imgSrc2, alp, imgSrc1, 1 - alp, 0, imgDst);
    myQImg = QImage((const unsigned char*)(imgDst.data), imgDst.cols, imgDst.rows, QImage::Format_RGB888);
    imgShow();
}

void MainWindow::imgShow()
{
    ui->viewLabel->setPixmap(QPixmap::fromImage(myQImg.scaled(ui->viewLabel->size(), Qt::KeepAspectRatio)));//在Qt界面上显示图像
}

void MainWindow::on_verticalSlider_sliderMoved(int position)
{
    imgProc(position / 100.0);
}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
    imgProc(value / 100.0);
}
