/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *printAction;
    QAction *printPreviewAction;
    QAction *exitAction;
    QAction *undoAction;
    QAction *redoAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *boldAction;
    QAction *italicAction;
    QAction *underlineAction;
    QAction *leftAlignAction;
    QAction *centerAction;
    QAction *rightAlignAction;
    QAction *justifyAction;
    QAction *colorAction;
    QAction *closeAction;
    QAction *closeAllAction;
    QAction *tileAction;
    QAction *cascadeAction;
    QAction *nextAction;
    QAction *previousAction;
    QAction *aboutAction;
    QAction *aboutQtAction;
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QComboBox *styleComboBox;
    QFontComboBox *fontComboBox;
    QComboBox *sizeComboBox;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *submenu_D_3;
    QMenu *submenu_P_4;
    QMenu *menu_W;
    QMenu *menu_H;
    QStatusBar *statusBar;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QToolBar *formatToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(820, 495);
        QIcon icon;
        icon.addFile(QStringLiteral("images/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QStringLiteral("newAction"));
        newAction->setCheckable(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        newAction->setIcon(icon1);
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QStringLiteral("openAction"));
        openAction->setCheckable(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon2);
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QStringLiteral("saveAction"));
        saveAction->setCheckable(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral("images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon3);
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName(QStringLiteral("saveAsAction"));
        saveAsAction->setCheckable(false);
        printAction = new QAction(MainWindow);
        printAction->setObjectName(QStringLiteral("printAction"));
        printAction->setCheckable(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral("images/fileprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        printAction->setIcon(icon4);
        printPreviewAction = new QAction(MainWindow);
        printPreviewAction->setObjectName(QStringLiteral("printPreviewAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        exitAction->setCheckable(false);
        undoAction = new QAction(MainWindow);
        undoAction->setObjectName(QStringLiteral("undoAction"));
        undoAction->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral("images/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undoAction->setIcon(icon5);
        redoAction = new QAction(MainWindow);
        redoAction->setObjectName(QStringLiteral("redoAction"));
        redoAction->setCheckable(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral("images/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redoAction->setIcon(icon6);
        cutAction = new QAction(MainWindow);
        cutAction->setObjectName(QStringLiteral("cutAction"));
        cutAction->setCheckable(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral("images/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        cutAction->setIcon(icon7);
        copyAction = new QAction(MainWindow);
        copyAction->setObjectName(QStringLiteral("copyAction"));
        copyAction->setCheckable(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral("images/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyAction->setIcon(icon8);
        pasteAction = new QAction(MainWindow);
        pasteAction->setObjectName(QStringLiteral("pasteAction"));
        pasteAction->setCheckable(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral("images/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        pasteAction->setIcon(icon9);
        boldAction = new QAction(MainWindow);
        boldAction->setObjectName(QStringLiteral("boldAction"));
        boldAction->setCheckable(true);
        boldAction->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral("images/textbold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldAction->setIcon(icon10);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        boldAction->setFont(font);
        italicAction = new QAction(MainWindow);
        italicAction->setObjectName(QStringLiteral("italicAction"));
        italicAction->setCheckable(true);
        italicAction->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral("images/textitalic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicAction->setIcon(icon11);
        QFont font1;
        font1.setItalic(true);
        italicAction->setFont(font1);
        underlineAction = new QAction(MainWindow);
        underlineAction->setObjectName(QStringLiteral("underlineAction"));
        underlineAction->setCheckable(true);
        underlineAction->setEnabled(false);
        QIcon icon12;
        icon12.addFile(QStringLiteral("images/textunder.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineAction->setIcon(icon12);
        QFont font2;
        font2.setUnderline(true);
        underlineAction->setFont(font2);
        leftAlignAction = new QAction(MainWindow);
        leftAlignAction->setObjectName(QStringLiteral("leftAlignAction"));
        leftAlignAction->setCheckable(true);
        leftAlignAction->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QStringLiteral("images/textleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftAlignAction->setIcon(icon13);
        centerAction = new QAction(MainWindow);
        centerAction->setObjectName(QStringLiteral("centerAction"));
        centerAction->setCheckable(true);
        centerAction->setChecked(false);
        centerAction->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QStringLiteral("images/textcenter.png"), QSize(), QIcon::Normal, QIcon::Off);
        centerAction->setIcon(icon14);
        rightAlignAction = new QAction(MainWindow);
        rightAlignAction->setObjectName(QStringLiteral("rightAlignAction"));
        rightAlignAction->setCheckable(true);
        rightAlignAction->setEnabled(false);
        QIcon icon15;
        icon15.addFile(QStringLiteral("images/textright.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightAlignAction->setIcon(icon15);
        justifyAction = new QAction(MainWindow);
        justifyAction->setObjectName(QStringLiteral("justifyAction"));
        justifyAction->setCheckable(true);
        justifyAction->setEnabled(false);
        QIcon icon16;
        icon16.addFile(QStringLiteral("images/textjustify.png"), QSize(), QIcon::Normal, QIcon::Off);
        justifyAction->setIcon(icon16);
        colorAction = new QAction(MainWindow);
        colorAction->setObjectName(QStringLiteral("colorAction"));
        colorAction->setEnabled(false);
        QIcon icon17;
        icon17.addFile(QStringLiteral("images/color.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        colorAction->setIcon(icon17);
        closeAction = new QAction(MainWindow);
        closeAction->setObjectName(QStringLiteral("closeAction"));
        closeAllAction = new QAction(MainWindow);
        closeAllAction->setObjectName(QStringLiteral("closeAllAction"));
        tileAction = new QAction(MainWindow);
        tileAction->setObjectName(QStringLiteral("tileAction"));
        cascadeAction = new QAction(MainWindow);
        cascadeAction->setObjectName(QStringLiteral("cascadeAction"));
        nextAction = new QAction(MainWindow);
        nextAction->setObjectName(QStringLiteral("nextAction"));
        previousAction = new QAction(MainWindow);
        previousAction->setObjectName(QStringLiteral("previousAction"));
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QStringLiteral("aboutAction"));
        aboutQtAction = new QAction(MainWindow);
        aboutQtAction->setObjectName(QStringLiteral("aboutQtAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 22, 820, 395));
        styleComboBox = new QComboBox(centralWidget);
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->setObjectName(QStringLiteral("styleComboBox"));
        styleComboBox->setGeometry(QRect(0, 0, 141, 22));
        fontComboBox = new QFontComboBox(centralWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(141, 0, 221, 22));
        sizeComboBox = new QComboBox(centralWidget);
        sizeComboBox->setObjectName(QStringLiteral("sizeComboBox"));
        sizeComboBox->setGeometry(QRect(361, 0, 51, 22));
        sizeComboBox->setEditable(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName(QStringLiteral("menu_O"));
        submenu_D_3 = new QMenu(menu_O);
        submenu_D_3->setObjectName(QStringLiteral("submenu_D_3"));
        submenu_P_4 = new QMenu(menu_O);
        submenu_P_4->setObjectName(QStringLiteral("submenu_P_4"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName(QStringLiteral("fileToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, fileToolBar);
        editToolBar = new QToolBar(MainWindow);
        editToolBar->setObjectName(QStringLiteral("editToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, editToolBar);
        formatToolBar = new QToolBar(MainWindow);
        formatToolBar->setObjectName(QStringLiteral("formatToolBar"));
        formatToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, formatToolBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_O->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addSeparator();
        menu_F->addAction(saveAction);
        menu_F->addAction(saveAsAction);
        menu_F->addSeparator();
        menu_F->addAction(printAction);
        menu_F->addAction(printPreviewAction);
        menu_F->addSeparator();
        menu_F->addAction(exitAction);
        menu_E->addAction(undoAction);
        menu_E->addAction(redoAction);
        menu_E->addSeparator();
        menu_E->addAction(cutAction);
        menu_E->addAction(copyAction);
        menu_E->addAction(pasteAction);
        menu_O->addAction(submenu_D_3->menuAction());
        menu_O->addAction(submenu_P_4->menuAction());
        menu_O->addSeparator();
        menu_O->addAction(colorAction);
        submenu_D_3->addAction(boldAction);
        submenu_D_3->addAction(italicAction);
        submenu_D_3->addAction(underlineAction);
        submenu_P_4->addAction(leftAlignAction);
        submenu_P_4->addAction(centerAction);
        submenu_P_4->addAction(rightAlignAction);
        submenu_P_4->addAction(justifyAction);
        menu_W->addAction(closeAction);
        menu_W->addAction(closeAllAction);
        menu_W->addSeparator();
        menu_W->addAction(tileAction);
        menu_W->addAction(cascadeAction);
        menu_W->addSeparator();
        menu_W->addAction(nextAction);
        menu_W->addAction(previousAction);
        menu_W->addSeparator();
        menu_H->addAction(aboutAction);
        menu_H->addSeparator();
        menu_H->addAction(aboutQtAction);
        fileToolBar->addAction(newAction);
        fileToolBar->addAction(openAction);
        fileToolBar->addAction(saveAction);
        fileToolBar->addSeparator();
        fileToolBar->addAction(printAction);
        editToolBar->addAction(undoAction);
        editToolBar->addAction(redoAction);
        editToolBar->addSeparator();
        editToolBar->addAction(cutAction);
        editToolBar->addAction(copyAction);
        editToolBar->addAction(pasteAction);
        formatToolBar->addAction(boldAction);
        formatToolBar->addAction(italicAction);
        formatToolBar->addAction(underlineAction);
        formatToolBar->addSeparator();
        formatToolBar->addAction(leftAlignAction);
        formatToolBar->addAction(centerAction);
        formatToolBar->addAction(rightAlignAction);
        formatToolBar->addAction(justifyAction);
        formatToolBar->addSeparator();
        formatToolBar->addAction(colorAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyWord \346\226\207 \345\255\227 \345\244\204 \347\220\206 \347\263\273 \347\273\237 V1.0", nullptr));
        newAction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
#ifndef QT_NO_TOOLTIP
        newAction->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        newAction->setStatusTip(QApplication::translate("MainWindow", "\345\210\233\345\273\272\344\270\200\344\270\252\346\226\260\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        newAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        openAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)...", nullptr));
#ifndef QT_NO_TOOLTIP
        openAction->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        openAction->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\267\262\345\255\230\345\234\250\347\232\204\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        openAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        saveAction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#ifndef QT_NO_TOOLTIP
        saveAction->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\345\275\223\345\211\215\346\226\207\346\241\243\345\255\230\347\233\230", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        saveAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        saveAsAction->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveAsAction->setToolTip(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(A)", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        saveAsAction->setStatusTip(QApplication::translate("MainWindow", "\344\273\245\344\270\200\344\270\252\346\226\260\345\220\215\345\255\227\344\277\235\345\255\230\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
        printAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)...", nullptr));
#ifndef QT_NO_TOOLTIP
        printAction->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        printAction->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\215\260\350\276\223\345\207\272\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        printAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        printPreviewAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210...", nullptr));
#ifndef QT_NO_TOOLTIP
        printPreviewAction->setToolTip(QApplication::translate("MainWindow", "\351\242\204\350\247\210", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        printPreviewAction->setStatusTip(QApplication::translate("MainWindow", "\351\242\204\350\247\210\346\211\223\345\215\260\346\225\210\346\236\234", nullptr));
#endif // QT_NO_STATUSTIP
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#ifndef QT_NO_TOOLTIP
        exitAction->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        exitAction->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
#endif // QT_NO_STATUSTIP
        undoAction->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
#ifndef QT_NO_TOOLTIP
        undoAction->setToolTip(QApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        undoAction->setStatusTip(QApplication::translate("MainWindow", "\346\222\244\351\224\200\345\275\223\345\211\215\346\223\215\344\275\234", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        undoAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        redoAction->setText(QApplication::translate("MainWindow", "\351\207\215\345\201\232(&R)", nullptr));
#ifndef QT_NO_TOOLTIP
        redoAction->setToolTip(QApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        redoAction->setStatusTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215\344\271\213\345\211\215\346\223\215\344\275\234", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        redoAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        cutAction->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
#ifndef QT_NO_TOOLTIP
        cutAction->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cutAction->setStatusTip(QApplication::translate("MainWindow", "\344\273\216\346\226\207\346\241\243\344\270\255\350\243\201\345\211\252\346\211\200\351\200\211\345\206\205\345\256\271\357\274\214\345\271\266\345\260\206\345\205\266\346\224\276\345\205\245\345\211\252\350\264\264\346\235\277", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        cutAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        copyAction->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
#ifndef QT_NO_TOOLTIP
        copyAction->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        copyAction->setStatusTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266\346\211\200\351\200\211\345\206\205\345\256\271\357\274\214\345\271\266\345\260\206\345\205\266\346\224\276\345\205\245\345\211\252\350\264\264\346\235\277", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        copyAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        pasteAction->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
#ifndef QT_NO_TOOLTIP
        pasteAction->setToolTip(QApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pasteAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\345\211\252\350\264\264\346\235\277\347\232\204\345\206\205\345\256\271\347\262\230\350\264\264\345\210\260\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        pasteAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        boldAction->setText(QApplication::translate("MainWindow", "\345\212\240\347\262\227(&B)", nullptr));
#ifndef QT_NO_TOOLTIP
        boldAction->setToolTip(QApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        boldAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\345\212\240\347\262\227", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        boldAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        italicAction->setText(QApplication::translate("MainWindow", "\345\200\276\346\226\234(&I)", nullptr));
#ifndef QT_NO_TOOLTIP
        italicAction->setToolTip(QApplication::translate("MainWindow", "\345\200\276\346\226\234", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        italicAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\211\200\351\200\211\346\226\207\345\255\227\347\224\250\346\226\234\344\275\223\346\230\276\347\244\272", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        italicAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        underlineAction->setText(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277(&U)", nullptr));
#ifndef QT_NO_TOOLTIP
        underlineAction->setToolTip(QApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        underlineAction->setStatusTip(QApplication::translate("MainWindow", "\344\270\272\346\211\200\351\200\211\346\226\207\345\255\227\345\212\240\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        underlineAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        leftAlignAction->setText(QApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220(&L)", nullptr));
#ifndef QT_NO_TOOLTIP
        leftAlignAction->setToolTip(QApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        leftAlignAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\345\255\227\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        leftAlignAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        centerAction->setText(QApplication::translate("MainWindow", "\345\261\205\344\270\255(&E)", nullptr));
#ifndef QT_NO_TOOLTIP
        centerAction->setToolTip(QApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        centerAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        centerAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        rightAlignAction->setText(QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220(&R)", nullptr));
#ifndef QT_NO_TOOLTIP
        rightAlignAction->setToolTip(QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        rightAlignAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\345\255\227\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        rightAlignAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        justifyAction->setText(QApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220(&J)", nullptr));
#ifndef QT_NO_TOOLTIP
        justifyAction->setToolTip(QApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        justifyAction->setStatusTip(QApplication::translate("MainWindow", "\345\260\206\346\226\207\345\255\227\345\267\246\345\217\263\344\270\244\347\253\257\345\220\214\346\227\266\345\257\271\351\275\220\357\274\214\345\271\266\346\240\271\346\215\256\351\234\200\350\246\201\350\260\203\346\225\264\345\255\227\351\227\264\350\267\235", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        justifyAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_NO_SHORTCUT
        colorAction->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262(&C)...", nullptr));
#ifndef QT_NO_TOOLTIP
        colorAction->setToolTip(QApplication::translate("MainWindow", "\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        colorAction->setStatusTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
#endif // QT_NO_STATUSTIP
        closeAction->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&O)", nullptr));
#ifndef QT_NO_TOOLTIP
        closeAction->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        closeAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\264\273\345\212\250\346\226\207\346\241\243\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_NO_STATUSTIP
        closeAllAction->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(&A)", nullptr));
#ifndef QT_NO_TOOLTIP
        closeAllAction->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        closeAllAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_NO_STATUSTIP
        tileAction->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272(&T)", nullptr));
#ifndef QT_NO_TOOLTIP
        tileAction->setToolTip(QApplication::translate("MainWindow", "\345\271\263\351\223\272", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tileAction->setStatusTip(QApplication::translate("MainWindow", "\345\271\263\351\223\272\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_NO_STATUSTIP
        cascadeAction->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240(&C)", nullptr));
#ifndef QT_NO_TOOLTIP
        cascadeAction->setToolTip(QApplication::translate("MainWindow", "\345\261\202\345\217\240", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cascadeAction->setStatusTip(QApplication::translate("MainWindow", "\345\261\202\345\217\240\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_NO_STATUSTIP
        nextAction->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(&X)", nullptr));
#ifndef QT_NO_TOOLTIP
        nextAction->setToolTip(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        nextAction->setStatusTip(QApplication::translate("MainWindow", "\347\247\273\345\212\250\347\204\246\347\202\271\345\210\260\344\270\213\344\270\200\344\270\252\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        nextAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_NO_SHORTCUT
        previousAction->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252(&V)", nullptr));
#ifndef QT_NO_TOOLTIP
        previousAction->setToolTip(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        previousAction->setStatusTip(QApplication::translate("MainWindow", "\347\247\273\345\212\250\347\204\246\347\202\271\345\210\260\345\211\215\344\270\200\344\270\252\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        previousAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Tab", nullptr));
#endif // QT_NO_SHORTCUT
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
#ifndef QT_NO_TOOLTIP
        aboutAction->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        aboutAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216 MyWord V1.0", nullptr));
#endif // QT_NO_STATUSTIP
        aboutQtAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216 Qt 5(&Q)", nullptr));
#ifndef QT_NO_TOOLTIP
        aboutQtAction->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216 Qt 5", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        aboutQtAction->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216 Qt 5 \347\261\273\345\272\223\347\232\204\346\234\200\346\226\260\344\277\241\346\201\257", nullptr));
#endif // QT_NO_STATUSTIP
        styleComboBox->setItemText(0, QApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
        styleComboBox->setItemText(1, QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267 (\342\227\217)", nullptr));
        styleComboBox->setItemText(2, QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267 (\342\227\213)", nullptr));
        styleComboBox->setItemText(3, QApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267 (\342\226\240)", nullptr));
        styleComboBox->setItemText(4, QApplication::translate("MainWindow", "\347\274\226\345\217\267 (\342\222\210\342\222\211\342\222\212)", nullptr));
        styleComboBox->setItemText(5, QApplication::translate("MainWindow", "\347\274\226\345\217\267 ( a.b.c.)", nullptr));
        styleComboBox->setItemText(6, QApplication::translate("MainWindow", "\347\274\226\345\217\267 ( A.B.C.)", nullptr));
        styleComboBox->setItemText(7, QApplication::translate("MainWindow", "\347\274\226\345\217\267 (\342\205\260.\342\205\261.\342\205\262.)", nullptr));
        styleComboBox->setItemText(8, QApplication::translate("MainWindow", "\347\274\226\345\217\267 (\342\205\240.\342\205\241.\342\205\242.)", nullptr));

#ifndef QT_NO_STATUSTIP
        styleComboBox->setStatusTip(QApplication::translate("MainWindow", "\346\256\265\350\220\275\345\212\240\346\240\207\345\217\267\346\210\226\347\274\226\345\217\267", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        fontComboBox->setStatusTip(QApplication::translate("MainWindow", "\346\233\264\346\224\271\345\255\227\344\275\223", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        sizeComboBox->setStatusTip(QApplication::translate("MainWindow", "\346\233\264\346\224\271\345\255\227\345\217\267", nullptr));
#endif // QT_NO_STATUSTIP
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_O->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        submenu_D_3->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223(&D)", nullptr));
        submenu_P_4->setTitle(QApplication::translate("MainWindow", "\346\256\265\350\220\275", nullptr));
        menu_W->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243(&W)", nullptr));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        fileToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        editToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        formatToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
