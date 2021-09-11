#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myexcel = new QAxObject("Excel.Application");
    myworks = myexcel->querySubObject("WorkBooks");
    myworks->dynamicCall("Add");
    workbook = myexcel->querySubObject("ActiveWorkBook");
    mysheets = workbook->querySubObject("Sheets");
    //
    myword = new QAxObject("Word.Application");
    mydocs = myword->querySubObject("Documents");
    mydocs->dynamicCall("Add(void)");
    document = myword->querySubObject("ActiveDocument");
    paragraph = myword->querySubObject("Selection");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_writeExcelPushButton_clicked()
{
    mysheets->dynamicCall("Add");
    QAxObject *sheet = workbook->querySubObject("ActiveSheet");
    sheet->setProperty("Name", "我爱Qt");
    QAxObject *cell = sheet->querySubObject("Range(QVariant, QVariant)", "C3");
    QString inStr = ui->InExcelLineEdit->text();
    cell->dynamicCall("SetValue(const QVariant&)", QVariant(inStr));
    sheet = mysheets->querySubObject("Item(int)", 2);
    sheet->setProperty("Name", "Hello Qt");
    cell = sheet->querySubObject("Range(QVariant, QVariant)", "B5");
    cell->dynamicCall("SetValue(const QVariant&)", QVariant("Hello!I love Qt."));
    workbook->dynamicCall("SaveAs(const QString&)", "d:\\Qt\\office\\我爱 Qt5.xls");
    workbook->dynamicCall("Close()");
    myexcel->dynamicCall("Quit()");
    QMessageBox::information(this, tr("完毕"), tr("Excel工作表已保存。"));
    ui->writeExcelPushButton->setEnabled(false);
    ui->readExcelPushButton->setEnabled(true);
}

void MainWindow::on_readExcelPushButton_clicked()
{
    myexcel = new QAxObject("Excel.Application");
    myworks = myexcel->querySubObject("WorkBooks");
    myworks->dynamicCall("Open(const QString&)", "d:\\Qt\\office\\我爱 Qt5.xls");
    workbook = myexcel->querySubObject("ActiveWorkBook");
    mysheets = workbook->querySubObject("WorkSheets");
    QAxObject *sheet = workbook->querySubObject("Sheets(int)", 1);
    QAxObject *cell = sheet->querySubObject("Range(QVariant, QVariant)", "C3");
    QString outStr = cell->dynamicCall("Value2()").toString();
    ui->OutExcelLabel->setText(outStr);
    sheet = workbook->querySubObject("Sheets(int)", 2);
    cell = sheet->querySubObject("Range(QVariant, QVariant)", "B5");
    outStr = cell->dynamicCall("Value2()").toString();
    workbook->dynamicCall("Close()");
    myexcel->dynamicCall("Quit()");
    QMessageBox::information(this, tr("消息"), outStr);
    ui->writeExcelPushButton->setEnabled(true);
    ui->readExcelPushButton->setEnabled(false);
}

void MainWindow::on_writeWordPushButton_clicked()
{
    QString inStr = ui->InWordLineEdit->text();
    paragraph->dynamicCall("TypeText(const QString&)", inStr);
    paragraph->dynamicCall("TypeText(const QVariant&)", QVariant("\nHello!I love Qt."));
    document->dynamicCall("SaveAs(const QString&)", "d:\\Qt\\office\\我爱 Qt5.doc");
    delete paragraph;
    paragraph = nullptr;
    document->dynamicCall("Close()");
    myword->dynamicCall("Quit()");
    QMessageBox::information(this, tr("完毕"), tr("Word文档已保存。"));
    ui->writeWordPushButton->setEnabled(false);
    ui->readWordPushButton->setEnabled(true);
}

void MainWindow::on_readWordPushButton_clicked()
{
    myword = new QAxObject("Word.Application");
    mydocs = myword->querySubObject("Documents");
    mydocs->dynamicCall("Open(const QString&)", "d:\\Qt\\office\\我爱 Qt5.doc");
    document = myword->querySubObject("ActiveDocument");
    paragraph = document->querySubObject("Range()");
    QString outStr = paragraph->property("Text").toString();
    ui->OutWordLabel->setText(outStr.split("H").at(0));
    paragraph = document->querySubObject("Range(QVariant, QVariant)", 14, 30);
    outStr = paragraph->property("Text").toString();
    delete paragraph;
    paragraph = nullptr;
    document->dynamicCall("Close()");
    myword->dynamicCall("Quit()");
    QMessageBox::information(this, tr("消息"), outStr);
    ui->writeWordPushButton->setEnabled(true);
    ui->readWordPushButton->setEnabled(false);
}
