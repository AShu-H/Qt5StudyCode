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
#include <QtWidgets/QComboBox>
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
    QComboBox *yearComboBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *totalLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *admitLineEdit;
    QLabel *label_5;
    QPushButton *queryPushButton;
    QLabel *label_6;
    QLineEdit *rateLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(457, 236);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        yearComboBox = new QComboBox(centralWidget);
        yearComboBox->setObjectName(QStringLiteral("yearComboBox"));
        yearComboBox->setGeometry(QRect(140, 30, 69, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        yearComboBox->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 41, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 91, 31));
        label_2->setFont(font1);
        totalLineEdit = new QLineEdit(centralWidget);
        totalLineEdit->setObjectName(QStringLiteral("totalLineEdit"));
        totalLineEdit->setGeometry(QRect(140, 80, 71, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        totalLineEdit->setFont(font2);
        totalLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 80, 31, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 120, 91, 31));
        label_4->setFont(font1);
        admitLineEdit = new QLineEdit(centralWidget);
        admitLineEdit->setObjectName(QStringLiteral("admitLineEdit"));
        admitLineEdit->setGeometry(QRect(140, 120, 71, 31));
        admitLineEdit->setFont(font2);
        admitLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 120, 31, 31));
        label_5->setFont(font1);
        queryPushButton = new QPushButton(centralWidget);
        queryPushButton->setObjectName(QStringLiteral("queryPushButton"));
        queryPushButton->setGeometry(QRect(320, 30, 75, 23));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 120, 61, 31));
        label_6->setFont(font1);
        rateLineEdit = new QLineEdit(centralWidget);
        rateLineEdit->setObjectName(QStringLiteral("rateLineEdit"));
        rateLineEdit->setGeometry(QRect(330, 120, 61, 31));
        rateLineEdit->setFont(font2);
        rateLineEdit->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 457, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\255 \345\233\275 \345\216\206 \345\271\264 \351\253\230 \350\200\203 \346\225\260 \346\215\256 \346\243\200 \347\264\242", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\271\264 \344\273\275", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\351\253\230 \350\200\203 \344\272\272 \346\225\260", nullptr));
        totalLineEdit->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\344\270\207", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\275\225 \345\217\226 \344\272\272 \346\225\260", nullptr));
        admitLineEdit->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\344\270\207", nullptr));
        queryPushButton->setText(QApplication::translate("MainWindow", "\346\237\245  \350\257\242", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\275\225 \345\217\226 \347\216\207", nullptr));
        rateLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
