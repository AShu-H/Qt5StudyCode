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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *writeExcelPushButton;
    QPushButton *readExcelPushButton;
    QLineEdit *InExcelLineEdit;
    QLabel *OutExcelLabel;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QPushButton *writeWordPushButton;
    QPushButton *readWordPushButton;
    QLineEdit *InWordLineEdit;
    QLabel *OutWordLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(426, 341);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 351, 101));
        writeExcelPushButton = new QPushButton(groupBox);
        writeExcelPushButton->setObjectName(QStringLiteral("writeExcelPushButton"));
        writeExcelPushButton->setGeometry(QRect(60, 60, 75, 23));
        readExcelPushButton = new QPushButton(groupBox);
        readExcelPushButton->setObjectName(QStringLiteral("readExcelPushButton"));
        readExcelPushButton->setEnabled(false);
        readExcelPushButton->setGeometry(QRect(200, 20, 75, 23));
        InExcelLineEdit = new QLineEdit(groupBox);
        InExcelLineEdit->setObjectName(QStringLiteral("InExcelLineEdit"));
        InExcelLineEdit->setGeometry(QRect(20, 20, 121, 31));
        OutExcelLabel = new QLabel(groupBox);
        OutExcelLabel->setObjectName(QStringLiteral("OutExcelLabel"));
        OutExcelLabel->setGeometry(QRect(200, 50, 121, 31));
        OutExcelLabel->setFrameShape(QFrame::Panel);
        OutExcelLabel->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 150, 91, 31));
        label_2->setFont(font);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 180, 351, 101));
        writeWordPushButton = new QPushButton(groupBox_2);
        writeWordPushButton->setObjectName(QStringLiteral("writeWordPushButton"));
        writeWordPushButton->setGeometry(QRect(60, 60, 75, 23));
        readWordPushButton = new QPushButton(groupBox_2);
        readWordPushButton->setObjectName(QStringLiteral("readWordPushButton"));
        readWordPushButton->setEnabled(false);
        readWordPushButton->setGeometry(QRect(200, 20, 75, 23));
        InWordLineEdit = new QLineEdit(groupBox_2);
        InWordLineEdit->setObjectName(QStringLiteral("InWordLineEdit"));
        InWordLineEdit->setGeometry(QRect(20, 20, 121, 31));
        OutWordLabel = new QLabel(groupBox_2);
        OutWordLabel->setObjectName(QStringLiteral("OutWordLabel"));
        OutWordLabel->setGeometry(QRect(200, 50, 121, 31));
        OutWordLabel->setFrameShape(QFrame::Panel);
        OutWordLabel->setFrameShadow(QFrame::Plain);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 426, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Office \346\223\215\344\275\234\347\244\272\344\276\213", nullptr));
        label->setText(QApplication::translate("MainWindow", "Excel \350\257\273\345\206\231", nullptr));
        groupBox->setTitle(QString());
        writeExcelPushButton->setText(QApplication::translate("MainWindow", "\345\206\231  \345\205\245", nullptr));
        readExcelPushButton->setText(QApplication::translate("MainWindow", "\350\257\273  \345\207\272", nullptr));
        InExcelLineEdit->setText(QApplication::translate("MainWindow", "\346\210\221\347\210\261\346\234\200\346\226\260\347\232\204 Qt 5.11", nullptr));
        OutExcelLabel->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Word \350\257\273\345\206\231", nullptr));
        groupBox_2->setTitle(QString());
        writeWordPushButton->setText(QApplication::translate("MainWindow", "\345\206\231  \345\205\245", nullptr));
        readWordPushButton->setText(QApplication::translate("MainWindow", "\350\257\273  \345\207\272", nullptr));
        InWordLineEdit->setText(QApplication::translate("MainWindow", "\346\210\221\347\210\261\346\234\200\346\226\260\347\232\204 Qt 5.11", nullptr));
        OutWordLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
