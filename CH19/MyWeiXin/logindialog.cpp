#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->pwdLineEdit->setFocus();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginPushButton_clicked()
{
    showWeiChatWindow();
}

void LoginDialog::showWeiChatWindow()
{
    QFile file("userlog.xml");
    mydoc.setContent(&file);
    QDomElement root = mydoc.documentElement();
    if (root.hasChildNodes())
    {
        QDomNodeList userList = root.childNodes();
        bool exist = false;
        for (int i = 0; i < userList.count(); i++)
        {
            QDomNode user = userList.at(i);
            QDomNodeList record = user.childNodes();
            QString uname = record.at(0).toElement().text();
            QString pword = record.at(1).toElement().text();
            if (uname == ui->usrLineEdit->text())
            {
                exist = true;
                if (!(pword == ui->pwdLineEdit->text()))
                {
                    QMessageBox::warning(0, QObject::tr("提示"), "口令错！请重新输入。");
                    ui->pwdLineEdit->clear();
                    ui->pwdLineEdit->setFocus();
                    return;
                }
            }
        }
        if (!exist)
        {
            QMessageBox::warning(0, QObject::tr("提示"), "此用户不存在！请重新输入。");
            ui->usrLineEdit->clear();
            ui->pwdLineEdit->clear();
            ui->usrLineEdit->setFocus();
            return;
        }
        weiChatWindow = new MainWindow(0);
        weiChatWindow->setWindowTitle(ui->usrLineEdit->text());
        weiChatWindow->show();
    }
}
