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
    for (int i = rows - 4; i < rows + 1; i++)
    {
        Record oneRec;
        QAxObject *infocol = mytable->querySubObject("Cell(int,int)", i, 1);
        QString year = infocol->querySubObject("Range")->property("Text").toString();
        oneRec.year = year;
        infocol = mytable->querySubObject("Cell(int,int)", i, 2);
        QString total = infocol->querySubObject("Range")->property("Text").toString();
        oneRec.total = total;
        infocol = mytable->querySubObject("Cell(int,int)", i, 3);
        QString admit = infocol->querySubObject("Range")->property("Text").toString();
        oneRec.admit = admit;
        infocol = mytable->querySubObject("Cell(int,int)", i, 4);
        QString rate = infocol->querySubObject("Range")->property("Text").toString();
        oneRec.rate = rate;
        myrecord.append(oneRec);
    }
    delete mytable;
    mytable = nullptr;
    document->dynamicCall("Close()");
    myword->dynamicCall("Quit()");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_writeTablePushButton_clicked()
{
    myword = new QAxObject("Word.Application");
    mydocs = myword->querySubObject("Documents");
    mydocs->dynamicCall("Add(void)");
    document = myword->querySubObject("ActiveDocument");
    QAxObject *tables = document->querySubObject("Tables");
    QAxObject *paragraph = myword->querySubObject("Selection");
    paragraph->dynamicCall("TypeText(const QString&)", "2013～2017年高考人数和录取率");
    QAxObject *range = paragraph->querySubObject("Range");
    QVariantList paras;
    paras.append(range->asVariant());
    paras.append(6);
    paras.append(4);
    tables->querySubObject("Add(QAxObject*, int, int, QVariant&, QVariant&)", paras);
    mytable = paragraph->querySubObject("Tables(int)", 1);
    mytable->setProperty("Style", "网格型");
    QAxObject *Borders = mytable->querySubObject("Borders");
    Borders->setProperty("InsideLineStyle", 1);
    Borders->setProperty("OutsideLineStyle", 1);
    QAxObject *cell;
    for (int i = 0; i < 6; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 4; j++)
            {
                cell = mytable->querySubObject("Cell(int,int)", (i + 1), (j + 1))->querySubObject("Range");
                switch (j) {
                    case 0: cell->setProperty("Text", "年份"); break;
                    case 1: cell->setProperty("Text", "高考人数（万）"); break;
                    case 2: cell->setProperty("Text", "录取人数（万）"); break;
                    case 3: cell->setProperty("Text", "录取率"); break;
                    default: break;
                }
            }
            continue;
        }
        for (int j = 0; j < 4; j++)
        {
            cell = mytable->querySubObject("Cell(int,int)", (i + 1), (j + 1))->querySubObject("Range");
            switch (j) {
                case 0: cell->setProperty("Text", myrecord[i-1].year); break;
                case 1: cell->setProperty("Text", myrecord[i-1].total); break;
                case 2: cell->setProperty("Text", myrecord[i-1].admit); break;
                case 3: cell->setProperty("Text", myrecord[i-1].rate); break;
                default: break;
            }
        }
    }
    document->dynamicCall("SaveAs(const QString&)", "d:\\Qt\\office\\近5年全国高考录取人数统计.doc");
    QMessageBox::information(this, tr("完毕"), tr("表格已输出至Word文档。"));
    delete mytable;
    mytable = nullptr;
    delete paragraph;
    paragraph = nullptr;
    document->dynamicCall("Close()");
    myword->dynamicCall("Quit()");
    QString fname = "d:\\Qt\\office\\近5年全国高考录取人数统计.doc";
    view_Word(fname);
}

void MainWindow::view_Word(QString& filename)
{
    mywidget = new QAxWidget("Word.Application", ui->viewLabel);
    mywidget->dynamicCall("SetVisible(bool Visible)", "false");
    mywidget->setProperty("DisplayAlerts", false);
    mywidget->setGeometry(ui->viewLabel->geometry().x() -10, ui->viewLabel->geometry().y() - 70, 550, 250);
    mywidget->setControl(filename);
    mywidget->show();
}
