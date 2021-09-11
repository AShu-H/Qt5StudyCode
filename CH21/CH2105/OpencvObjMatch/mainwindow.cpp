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
    QString imgPath = "mermaid.jpg";            //本地路径（图片直接存放在项目目录下）
    Mat imgData = imread(imgPath.toLatin1().data());          //读取图像数据
    cvtColor(imgData, imgData, COLOR_BGR2RGB);                  //图像格式转换
    myImg = imgData;
    myQImg = QImage((const unsigned char*)(imgData.data), imgData.cols, imgData.rows, QImage::Format_RGB888);
    imgShow();
}

void MainWindow::imgProc()
{
    int METHOD = CV_TM_CCOEFF;
    Mat imgSrc = myImg;                     //将被显示的原图像
    QString imgPath = "fish.jpg";            //待匹配的子图（为原图上截取下的一部分）
    Mat imgTmp = imread(imgPath.toLatin1().data());          //读取图像数据
    cvtColor(imgTmp, imgTmp, COLOR_BGR2RGB);                  //图像格式转换
    Mat imgRes;
    Mat imgDisplay;
    imgSrc.copyTo(imgDisplay);
    int rescols = imgSrc.cols - imgTmp.cols + 1;
    int resrows = imgSrc.rows - imgTmp.rows + 1;
    imgRes.create(rescols, resrows, CV_32FC1);          //创建输出结果的矩阵
    matchTemplate(imgSrc, imgTmp, imgRes, METHOD);      //进行匹配
    normalize(imgRes, imgRes, 0, 1, NORM_MINMAX, -1, Mat());//进行标准化
    double minVal;
    double maxVal;
    Point minLoc;
    Point maxLoc;
    Point matchLoc;
    minMaxLoc(imgRes, & minVal, & maxVal, & minLoc, & maxLoc, Mat());//通过函数 minMaxLoc 定位最匹配的位置
    //对于方法 SQDIFF 和 SQDIFF_NORMED, 越小的数值代表更高的匹配结果. 而对于其他方法, 数值越大匹配越好
    if (METHOD == CV_TM_SQDIFF || METHOD == CV_TM_SQDIFF_NORMED) matchLoc = minLoc;
    else matchLoc = maxLoc;
    rectangle(imgDisplay, matchLoc, Point(matchLoc.x + imgTmp.cols, matchLoc.y + imgTmp.rows), Scalar::all(0), 2, 8, 0);
    rectangle(imgRes, matchLoc, Point(matchLoc.x + imgTmp.cols, matchLoc.y + imgTmp.rows), Scalar::all(0), 2, 8, 0);
    myQImg = QImage((const unsigned char*)(imgDisplay.data), imgDisplay.cols, imgDisplay.rows, QImage::Format_RGB888);
    imgShow();
}

void MainWindow::imgShow()
{
    ui->viewLabel->setPixmap(QPixmap::fromImage(myQImg.scaled(ui->viewLabel->size(), Qt::KeepAspectRatio)));//在Qt界面上显示图像
}


void MainWindow::on_matchPushButton_clicked()
{
    imgProc();
}
