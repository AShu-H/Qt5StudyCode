#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <mychildwnd.h>
#include <QMdiSubWindow>
#include <QSignalMapper>
#include <QFileDialog>
#include <QCloseEvent>
#include <QColorDialog>
#include <QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>

class MyChildWnd;
class QMdiSubWindow;
class QSignalMapper;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initMainWindow();//初始化
    void docNew();//新建文档
    void docOpen();//打开文档
    void docSave();//保存文档
    void docSaveAs();//文档另存为
    void docUndo();//撤销
    void docRedo();//重做
    void docCut();//剪切
    void docCopy();//复制
    void docPaste();//粘贴
    void textBold();//加粗
    void textItalic();//倾斜
    void textUnderline();//加下划线
    void textFamily(const QString &fmly);//字体
    void textSize(const QString &ps);//字号
    void textAlign(QAction *act);//对齐
    void textColor();//颜色
    void paraStyle(int sidx);//段落标号编号
    void docPrint();
    void docPrintPreview();
    void printPreview(QPrinter *);

private slots:
    void on_aboutAction_triggered();

    void on_aboutQtAction_triggered();

    void on_newAction_triggered();

    void refreshMenus();//刷新菜单槽函数

    void addSubWndListMenu();//往【窗口】菜单下添加子窗口菜单项列表

    void setActiveSubWindow(QWidget *wnd);

    void on_openAction_triggered();

    void on_saveAction_triggered();

    void on_saveAsAction_triggered();

    void on_undoAction_triggered();

    void on_redoAction_triggered();

    void on_cutAction_triggered();

    void on_copyAction_triggered();

    void on_pasteAction_triggered();

    void on_boldAction_triggered();

    void on_italicAction_triggered();

    void on_underlineAction_triggered();

    void on_fontComboBox_activated(const QString &arg1);

    void on_sizeComboBox_activated(const QString &arg1);

    void on_leftAlignAction_triggered();

    void on_centerAction_triggered();

    void on_rightAlignAction_triggered();

    void on_justifyAction_triggered();

    void on_colorAction_triggered();

    void on_styleComboBox_activated(int index);

    void on_printAction_triggered();

    void on_printPreviewAction_triggered();

    void on_closeAction_triggered();

    void on_closeAllAction_triggered();

    void on_tileAction_triggered();

    void on_cascadeAction_triggered();

    void on_nextAction_triggered();

    void on_previousAction_triggered();

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    void formatEnabled();//使格式菜单及其工具按钮可用
    MyChildWnd *activateChildWnd();//活动文档子窗口
    QSignalMapper *myWndMapper;//子窗口信号映射器
    QMdiSubWindow *findChildWnd(const QString &docName);//查找特定的文档子窗口
};

#endif // MAINWINDOW_H
