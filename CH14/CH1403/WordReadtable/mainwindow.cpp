#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myword = new QAxObject("Word.Application");
    mydocs = myword->querySubObject("Documents");
    mydocs->dynamicCall("Open(const QString&)", "d:\\Qt\\office\\1977-2017历年全国高考人数和录取率统计.docx");
    document = myword->querySubObject("ActiveDocument");
    mytable = document->querySubObject("Tables(int)", 1);
    int rows = mytable->querySubObject("Rows")->dynamicCall("Count").toInt();
    for(int i = 2; i < rows + 1; i++)
    {
        QAxObject *headcol = mytable->querySubObject("Cell(int,int)", i, 0);
        if (headcol == NULL) continue;
        QString yearStr = headcol->querySubObject("Range")->property("Text").toString();
        ui->yearComboBox->addItem(yearStr);
        if (i == rows) ui->yearComboBox->setCurrentText(yearStr);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_queryPushButton_clicked()
{
    int rows = mytable->querySubObject("Rows")->dynamicCall("Count").toInt();
    for(int i = 2; i < rows + 1; i++)
    {
        QAxObject *headcol = mytable->querySubObject("Cell(int,int)", i, 0);
        if (headcol == NULL) continue;
        QString yearStr = headcol->querySubObject("Range")->property("Text").toString();
        if (ui->yearComboBox->currentText() == yearStr)
        {
            QAxObject *infocol = mytable->querySubObject("Cell(int,int)", i, 2);
            QString totalStr = infocol->querySubObject("Range")->property("Text").toString();
            ui->totalLineEdit->setText(totalStr);
            infocol = mytable->querySubObject("Cell(int,int)", i, 3);
            QString admitStr = infocol->querySubObject("Range")->property("Text").toString();
            ui->admitLineEdit->setText(admitStr);
            infocol = mytable->querySubObject("Cell(int,int)", i, 4);
            QString rateStr = infocol->querySubObject("Range")->property("Text").toString();
            ui->rateLineEdit->setText(rateStr);
            break;
        }
    }
}
