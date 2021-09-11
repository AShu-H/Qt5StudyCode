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
    void on_queryPushButton_clicked();

private:
    Ui::MainWindow *ui;
    QAxObject *myword;
    QAxObject *mydocs;
    QAxObject *document;
    QAxObject *mytable;
};

#endif // MAINWINDOW_H
