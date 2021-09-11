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
    QString imgPath = "baby.jpg";            //本地路径（图片直接存放在项目目录下）
    Mat imgData = imread(imgPath.toLatin1().data());          //读取图像数据
    cvtColor(imgData, imgData, COLOR_BGR2RGB);                  //图像格式转换(避免图像颜色失真)
    myImg = imgData;
    myQImg = QImage((const unsigned char*)(imgData.data), imgData.cols, imgData.rows, QImage::Format_RGB888);
    imgShow();
}

void MainWindow::imgProc()
{
    CascadeClassifier face_detector;
    CascadeClassifier eyes_detector;
    string fDetectorPath = "haarcascade_frontalface_alt.xml";
    face_detector.load(fDetectorPath);
    string eDetectorPath = "haarcascade_eye_tree_eyeglasses.xml";
    eyes_detector.load(eDetectorPath);
    vector<Rect> faces;
    Mat imgSrc = myImg;
    Mat imgGray;
    cvtColor(imgSrc, imgGray, CV_RGB2GRAY);
    equalizeHist(imgGray, imgGray);
    face_detector.detectMultiScale(imgGray, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));//-- 多尺寸检测人脸
    for (int i = 0; i < faces.size(); i++)
    {
        Point center(faces[i].x + faces[i].width * 0.5, faces[i].y + faces[i].height * 0.5);
        ellipse(imgSrc, center, Size(faces[i].width * 0.5, faces[i].height * 0.5), 0, 0, 360, Scalar(255, 0, 255), 4, 8, 0);
        Mat faceROI = imgGray(faces[i]);
        vector<Rect> eyes;
        eyes_detector.detectMultiScale(faceROI, eyes, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, Size(30, 30));//-- 在每张人脸上检测双眼
        for (int j = 0; j < eyes.size(); j++)
        {
            Point center(faces[i].x + eyes[j].x + eyes[j].width * 0.5, faces[i].y + eyes[j].y + eyes[j].height * 0.5);
            int radius = cvRound((eyes[j].width + eyes[i].height) * 0.25);
            circle(imgSrc, center, radius, Scalar(255, 0, 0), 4, 8, 0);
        }
    }
    Mat imgDst = imgSrc;
    myQImg = QImage((const unsigned char*)(imgDst.data), imgDst.cols, imgDst.rows, QImage::Format_RGB888);
    imgShow();
}

void MainWindow::imgShow()
{
    ui->viewLabel->setPixmap(QPixmap::fromImage(myQImg.scaled(ui->viewLabel->size(), Qt::KeepAspectRatio)));//在Qt界面上显示图像
}

void MainWindow::on_detectPushButton_clicked()
{
    imgProc();
}
