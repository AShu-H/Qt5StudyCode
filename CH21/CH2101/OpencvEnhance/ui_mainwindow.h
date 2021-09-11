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
    QSlider *contrastVerticalSlider;
    QSlider *brightnessVerticalSlider;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(739, 454);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        viewLabel = new QLabel(centralWidget);
        viewLabel->setObjectName(QStringLiteral("viewLabel"));
        viewLabel->setGeometry(QRect(10, 10, 600, 386));
        viewLabel->setFrameShape(QFrame::Box);
        viewLabel->setFrameShadow(QFrame::Sunken);
        contrastVerticalSlider = new QSlider(centralWidget);
        contrastVerticalSlider->setObjectName(QStringLiteral("contrastVerticalSlider"));
        contrastVerticalSlider->setGeometry(QRect(630, 10, 20, 361));
        contrastVerticalSlider->setMaximum(100);
        contrastVerticalSlider->setSingleStep(1);
        contrastVerticalSlider->setValue(33);
        contrastVerticalSlider->setOrientation(Qt::Vertical);
        contrastVerticalSlider->setTickPosition(QSlider::TicksBelow);
        contrastVerticalSlider->setTickInterval(5);
        brightnessVerticalSlider = new QSlider(centralWidget);
        brightnessVerticalSlider->setObjectName(QStringLiteral("brightnessVerticalSlider"));
        brightnessVerticalSlider->setGeometry(QRect(690, 10, 20, 361));
        brightnessVerticalSlider->setMaximum(100);
        brightnessVerticalSlider->setOrientation(Qt::Vertical);
        brightnessVerticalSlider->setTickPosition(QSlider::TicksBelow);
        brightnessVerticalSlider->setTickInterval(5);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(610, 370, 61, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(680, 370, 41, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 739, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\265\267 \345\272\225 \346\221\204 \345\275\261 \347\205\247 \347\211\207 \347\276\216 \345\214\226", nullptr));
        viewLabel->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\257\271 \346\257\224 \345\272\246", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256 \345\272\246", nullptr));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "\346\265\267\345\272\225\346\221\204\345\275\261\347\205\247\347\211\207\347\276\216\345\214\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
