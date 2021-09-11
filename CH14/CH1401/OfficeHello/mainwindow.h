#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QAxObject>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_writeExcelPushButton_clicked();

    void on_readExcelPushButton_clicked();

    void on_writeWordPushButton_clicked();

    void on_readWordPushButton_clicked();

private:
    Ui::MainWindow *ui;
    QAxObject *myexcel;
    QAxObject *myworks;
    QAxObject *workbook;
    QAxObject *mysheets;
    //
    QAxObject *myword;
    QAxObject *mydocs;
    QAxObject *document;
    QAxObject *paragraph;
};

#endif // MAINWINDOW_H
