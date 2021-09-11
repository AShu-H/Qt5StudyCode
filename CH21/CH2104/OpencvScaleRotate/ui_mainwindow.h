/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *viewLabel;
    QSlider *scaleVerticalSlider;
    QSlider *rotateHorizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(583, 464);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        viewLabel = new QLabel(centralWidget);
        viewLabel->setObjectName(QStringLiteral("viewLabel"));
        viewLabel->setGeometry(QRect(20, 10, 512, 384));
        viewLabel->setFrameShape(QFrame::Box);
        viewLabel->setFrameShadow(QFrame::Sunken);
        scaleVerticalSlider = new QSlider(centralWidget);
        scaleVerticalSlider->setObjectName(QStringLiteral("scaleVerticalSlider"));
        scaleVerticalSlider->setGeometry(QRect(530, 10, 19, 384));
        scaleVerticalSlider->setMaximum(200);
        scaleVerticalSlider->setValue(100);
        scaleVerticalSlider->setOrientation(Qt::Vertical);
        scaleVerticalSlider->setTickPosition(QSlider::TicksAbove);
        scaleVerticalSlider->setTickInterval(3);
        rotateHorizontalSlider = new QSlider(centralWidget);
        rotateHorizontalSlider->setObjectName(QStringLiteral("rotateHorizontalSlider"));
        rotateHorizontalSlider->setGeometry(QRect(20, 392, 512, 19));
        rotateHorizontalSlider->setMaximum(720);
        rotateHorizontalSlider->setValue(360);
        rotateHorizontalSlider->setOrientation(Qt::Horizontal);
        rotateHorizontalSlider->setTickPosition(QSlider::TicksAbove);
        rotateHorizontalSlider->setTickInterval(10);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 360, 31, 31));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setPixmap(QPixmap(QString::fromUtf8("zoom\357\274\215.jpg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 10, 31, 31));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setPixmap(QPixmap(QString::fromUtf8("zoom\357\274\213.jpg")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 400, 31, 31));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setPixmap(QPixmap(QString::fromUtf8("rotate\357\274\213.jpg")));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 400, 31, 31));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setPixmap(QPixmap(QString::fromUtf8("rotate\357\274\215.jpg")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 583, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\244\251 \346\261\240 \351\243\216 \346\231\257 \347\205\247 \344\273\273 \346\204\217 \345\217\230 \346\215\242", nullptr));
        viewLabel->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
