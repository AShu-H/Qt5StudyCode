#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QAxObject>
#include <QAxWidget>
namespace Ui {
class MainWindow;
}
typedef struct record
{
    QString year;
    QString total;
    QString admit;
    QString rate;
} Record;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_writeTablePushButton_clicked();

    void view_Word(QString& filename);

private:
    Ui::MainWindow *ui;
    QAxObject *myword;
    QAxObject *mydocs;
    QAxObject *document;
    QAxObject *mytable;
    QList<Record> myrecord;
    QAxWidget *mywidget;
};

#endif // MAINWINDOW_H
