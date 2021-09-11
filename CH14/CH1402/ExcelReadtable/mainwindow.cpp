#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;    
}

void MainWindow::on_openPushButton_clicked()
{
    QFileDialog fdialog;
    fdialog.setFileMode(QFileDialog::ExistingFile);
    fdialog.setViewMode(QFileDialog::Detail);
    fdialog.setOption(QFileDialog::ReadOnly, true);
    fdialog.setDirectory(QString("D:/Qt/office"));
    fdialog.setNameFilter(QString("所有文件(*.*);;Microsoft Excel 工作表(*.xlsx);;Microsoft Excel 97-2003 工作表(*.xls)"));
    if (fdialog.exec())
    {
        QStringList files = fdialog.selectedFiles();
        for (auto fname:files)
        {
            if (fname.endsWith(".xlsx")||fname.endsWith(".xls"))
            {
                this->view_Excel(fname);
            } else {
                QMessageBox::information(this, tr("提示"), tr("你选择的不是Excel文件！"));
            }
        }
    }
}

void MainWindow::view_Excel(QString& filename)
{
    mywidget = new QAxWidget("Excel.Application", ui->viewLabel);
    mywidget->dynamicCall("SetVisible(bool Visible)", "false");
    mywidget->setProperty("DisplayAlerts", false);
    mywidget->setGeometry(ui->viewLabel->geometry().x() - 130, ui->viewLabel->geometry().y() - 50, 450, 200);
    mywidget->setControl(filename);
    mywidget->show();
}

void MainWindow::closeExcel()
{
    if (this->mywidget)
    {
        mywidget->close();
        mywidget->clear();
        delete mywidget;
        mywidget = nullptr;
    }
}

void MainWindow::on_countPushButton_clicked()
{
    myexcel = new QAxObject("Excel.Application");
    myworks = myexcel->querySubObject("WorkBooks");
    myworks->dynamicCall("Open(const QString&)", "d:\\Qt\\office\\Gaokao.xlsx");
    workbook = myexcel->querySubObject("ActiveWorkBook");
    mysheets = workbook->querySubObject("Sheets");
    QAxObject *sheet = mysheets->querySubObject("Item(int)", 1);
    QAxObject *cell = sheet->querySubObject("Range(QVariant, QVariant)", "C7");
    cell->dynamicCall("SetValue(const QVariant&)", QVariant("=sum(C2:C6)"));
    cell = sheet->querySubObject("Range(QVariant, QVariant)", "D7");
    cell->dynamicCall("SetValue(const QVariant&)", QVariant("=average(D2:D6)"));
    workbook->dynamicCall("SaveAs(const QString&)", "d:\\Qt\\office\\Gaokao.xlsx");
    workbook->dynamicCall("Close()");
    myexcel->dynamicCall("Quit()");
    delete myexcel;
    myexcel = nullptr;
    QMessageBox::information(this, tr("完毕"), tr("统计完成！"));
    closeExcel();
    QString fname = "d:\\Qt\\office\\Gaokao.xlsx";
    view_Excel(fname);
}
