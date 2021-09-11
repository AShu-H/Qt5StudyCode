/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLineEdit *adminLineEdit;
    QPushButton *loginPushButton;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QPushButton *exitPushButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 100, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);
        adminLineEdit = new QLineEdit(LoginDialog);
        adminLineEdit->setObjectName(QStringLiteral("adminLineEdit"));
        adminLineEdit->setGeometry(QRect(180, 100, 113, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        adminLineEdit->setFont(font1);
        loginPushButton = new QPushButton(LoginDialog);
        loginPushButton->setObjectName(QStringLiteral("loginPushButton"));
        loginPushButton->setGeometry(QRect(100, 210, 81, 31));
        loginPushButton->setFont(font);
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 30, 291, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(16);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 71, 31));
        label_2->setFont(font);
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QStringLiteral("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(180, 150, 113, 31));
        pwdLineEdit->setFont(font1);
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        exitPushButton = new QPushButton(LoginDialog);
        exitPushButton->setObjectName(QStringLiteral("exitPushButton"));
        exitPushButton->setGeometry(QRect(230, 210, 81, 31));
        exitPushButton->setFont(font);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273 \345\275\225", nullptr));
        label->setText(QApplication::translate("LoginDialog", "\347\256\241 \347\220\206 \345\221\230\357\274\232", nullptr));
        adminLineEdit->setText(QApplication::translate("LoginDialog", "b02020622", nullptr));
        loginPushButton->setText(QApplication::translate("LoginDialog", "\347\231\273  \345\275\225", nullptr));
        label_3->setText(QApplication::translate("LoginDialog", "\346\254\242  \350\277\216  \350\277\233  \345\205\245  \347\224\265  \345\255\220  \345\225\206  \345\237\216", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "\345\217\243     \344\273\244\357\274\232", nullptr));
        pwdLineEdit->setText(QString());
        exitPushButton->setText(QApplication::translate("LoginDialog", "\351\200\200  \345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
