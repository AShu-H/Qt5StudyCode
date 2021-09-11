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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *blurViewLabel;
    QLabel *gaussianViewLabel;
    QLabel *medianViewLabel;
    QLabel *bilateralViewLabel;
    QSlider *kernelVerticalSlider;
    QLabel *label_5;
    QGroupBox *groupBox;
    QRadioButton *blurRadioButton;
    QRadioButton *gaussianRadioButton;
    QRadioButton *medianRadioButton;
    QRadioButton *bilateralRadioButton;
    QPushButton *saveAsPushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(811, 499);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 210, 81, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(440, 210, 81, 21));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 430, 81, 21));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 430, 81, 21));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        blurViewLabel = new QLabel(centralWidget);
        blurViewLabel->setObjectName(QStringLiteral("blurViewLabel"));
        blurViewLabel->setGeometry(QRect(20, 20, 300, 186));
        blurViewLabel->setFrameShape(QFrame::Box);
        blurViewLabel->setFrameShadow(QFrame::Sunken);
        gaussianViewLabel = new QLabel(centralWidget);
        gaussianViewLabel->setObjectName(QStringLiteral("gaussianViewLabel"));
        gaussianViewLabel->setGeometry(QRect(330, 20, 300, 186));
        gaussianViewLabel->setFrameShape(QFrame::Box);
        gaussianViewLabel->setFrameShadow(QFrame::Sunken);
        medianViewLabel = new QLabel(centralWidget);
        medianViewLabel->setObjectName(QStringLiteral("medianViewLabel"));
        medianViewLabel->setGeometry(QRect(20, 240, 300, 186));
        medianViewLabel->setFrameShape(QFrame::Box);
        medianViewLabel->setFrameShadow(QFrame::Sunken);
        bilateralViewLabel = new QLabel(centralWidget);
        bilateralViewLabel->setObjectName(QStringLiteral("bilateralViewLabel"));
        bilateralViewLabel->setGeometry(QRect(330, 240, 300, 186));
        bilateralViewLabel->setFrameShape(QFrame::Box);
        bilateralViewLabel->setFrameShadow(QFrame::Sunken);
        kernelVerticalSlider = new QSlider(centralWidget);
        kernelVerticalSlider->setObjectName(QStringLiteral("kernelVerticalSlider"));
        kernelVerticalSlider->setGeometry(QRect(640, 19, 20, 401));
        kernelVerticalSlider->setMaximum(33);
        kernelVerticalSlider->setValue(1);
        kernelVerticalSlider->setOrientation(Qt::Vertical);
        kernelVerticalSlider->setTickPosition(QSlider::TicksBelow);
        kernelVerticalSlider->setTickInterval(1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(630, 420, 61, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(670, 10, 121, 201));
        groupBox->setFont(font);
        blurRadioButton = new QRadioButton(groupBox);
        blurRadioButton->setObjectName(QStringLiteral("blurRadioButton"));
        blurRadioButton->setGeometry(QRect(30, 30, 81, 31));
        blurRadioButton->setChecked(true);
        gaussianRadioButton = new QRadioButton(groupBox);
        gaussianRadioButton->setObjectName(QStringLiteral("gaussianRadioButton"));
        gaussianRadioButton->setGeometry(QRect(30, 60, 81, 31));
        medianRadioButton = new QRadioButton(groupBox);
        medianRadioButton->setObjectName(QStringLiteral("medianRadioButton"));
        medianRadioButton->setGeometry(QRect(30, 90, 71, 31));
        bilateralRadioButton = new QRadioButton(groupBox);
        bilateralRadioButton->setObjectName(QStringLiteral("bilateralRadioButton"));
        bilateralRadioButton->setGeometry(QRect(30, 120, 71, 31));
        saveAsPushButton = new QPushButton(groupBox);
        saveAsPushButton->setObjectName(QStringLiteral("saveAsPushButton"));
        saveAsPushButton->setGeometry(QRect(30, 170, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 23));
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
        label->setText(QApplication::translate("MainWindow", "\345\235\207 \345\200\274 \346\273\244 \346\263\242", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\351\253\230 \346\226\257 \346\273\244 \346\263\242", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\255 \345\200\274 \346\273\244 \346\263\242", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\217\214 \350\276\271 \346\273\244 \346\263\242", nullptr));
        blurViewLabel->setText(QString());
        gaussianViewLabel->setText(QString());
        medianViewLabel->setText(QString());
        bilateralViewLabel->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Kernel \345\200\274", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\256\227\346\263\225", nullptr));
        blurRadioButton->setText(QApplication::translate("MainWindow", "Average", nullptr));
        gaussianRadioButton->setText(QApplication::translate("MainWindow", "Gaussian", nullptr));
        medianRadioButton->setText(QApplication::translate("MainWindow", "Median", nullptr));
        bilateralRadioButton->setText(QApplication::translate("MainWindow", "Bilateral", nullptr));
        saveAsPushButton->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
