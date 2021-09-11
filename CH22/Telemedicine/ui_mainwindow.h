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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QTreeWidget *treeWidget;
    QLabel *CT_Img_Label;
    QLabel *label_3;
    QLCDNumber *yearLcdNumber;
    QLCDNumber *monthLcdNumber;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QTimeEdit *timeEdit;
    QPushButton *startPushButton;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame;
    QLabel *nameLabel;
    QRadioButton *maleRadioButton;
    QRadioButton *femaleRadioButton;
    QLabel *photoLabel;
    QLabel *label_6;
    QSpinBox *ageSpinBox;
    QLabel *label_7;
    QComboBox *ethniComboBox;
    QLabel *label_8;
    QLineEdit *ssnLineEdit;
    QWidget *tab_2;
    QTextEdit *caseTextEdit;
    QTableView *basicTableView;
    QLCDNumber *dayLcdNumber;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(843, 691);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(85, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 571, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\226\260\351\255\217"));
        font.setPointSize(26);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(20, 70, 261, 351));
        QPalette palette1;
        QBrush brush2(QColor(85, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        treeWidget->setPalette(palette1);
        CT_Img_Label = new QLabel(centralWidget);
        CT_Img_Label->setObjectName(QStringLiteral("CT_Img_Label"));
        CT_Img_Label->setGeometry(QRect(310, 100, 501, 311));
        CT_Img_Label->setFrameShape(QFrame::Box);
        CT_Img_Label->setFrameShadow(QFrame::Sunken);
        CT_Img_Label->setPixmap(QPixmap(QString::fromUtf8("CT.jpg")));
        CT_Img_Label->setScaledContents(true);
        CT_Img_Label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 70, 111, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        yearLcdNumber = new QLCDNumber(centralWidget);
        yearLcdNumber->setObjectName(QStringLiteral("yearLcdNumber"));
        yearLcdNumber->setGeometry(QRect(730, 70, 41, 23));
        yearLcdNumber->setDigitCount(4);
        yearLcdNumber->setSegmentStyle(QLCDNumber::Flat);
        yearLcdNumber->setProperty("value", QVariant(1900));
        monthLcdNumber = new QLCDNumber(centralWidget);
        monthLcdNumber->setObjectName(QStringLiteral("monthLcdNumber"));
        monthLcdNumber->setGeometry(QRect(770, 70, 21, 23));
        monthLcdNumber->setDigitCount(2);
        monthLcdNumber->setSegmentStyle(QLCDNumber::Flat);
        monthLcdNumber->setProperty("value", QVariant(1));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(810, 100, 19, 311));
        verticalSlider->setValue(30);
        verticalSlider->setOrientation(Qt::Vertical);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(310, 410, 501, 20));
        horizontalSlider->setValue(60);
        horizontalSlider->setOrientation(Qt::Horizontal);
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setEnabled(false);
        timeEdit->setGeometry(QRect(650, 70, 71, 22));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        timeEdit->setFont(font2);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setReadOnly(true);
        timeEdit->setTime(QTime(0, 0, 0));
        startPushButton = new QPushButton(centralWidget);
        startPushButton->setObjectName(QStringLiteral("startPushButton"));
        startPushButton->setGeometry(QRect(310, 430, 111, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        startPushButton->setFont(font3);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(430, 440, 401, 23));
        progressBar->setValue(0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 440, 271, 221));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        tabWidget->setPalette(palette2);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 251, 181));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        frame->setPalette(palette3);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        nameLabel = new QLabel(frame);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(20, 10, 71, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        nameLabel->setFont(font4);
        maleRadioButton = new QRadioButton(frame);
        maleRadioButton->setObjectName(QStringLiteral("maleRadioButton"));
        maleRadioButton->setGeometry(QRect(20, 50, 41, 16));
        maleRadioButton->setChecked(true);
        femaleRadioButton = new QRadioButton(frame);
        femaleRadioButton->setObjectName(QStringLiteral("femaleRadioButton"));
        femaleRadioButton->setGeometry(QRect(60, 50, 41, 16));
        femaleRadioButton->setChecked(false);
        photoLabel = new QLabel(frame);
        photoLabel->setObjectName(QStringLiteral("photoLabel"));
        photoLabel->setGeometry(QRect(140, 10, 101, 121));
        photoLabel->setFrameShape(QFrame::Panel);
        photoLabel->setFrameShadow(QFrame::Plain);
        photoLabel->setScaledContents(true);
        photoLabel->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 54, 21));
        ageSpinBox = new QSpinBox(frame);
        ageSpinBox->setObjectName(QStringLiteral("ageSpinBox"));
        ageSpinBox->setGeometry(QRect(50, 80, 42, 22));
        ageSpinBox->setValue(18);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 112, 61, 20));
        ethniComboBox = new QComboBox(frame);
        ethniComboBox->addItem(QString());
        ethniComboBox->addItem(QString());
        ethniComboBox->addItem(QString());
        ethniComboBox->addItem(QString());
        ethniComboBox->addItem(QString());
        ethniComboBox->addItem(QString());
        ethniComboBox->addItem(QString());
        ethniComboBox->setObjectName(QStringLiteral("ethniComboBox"));
        ethniComboBox->setGeometry(QRect(50, 110, 61, 22));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 150, 91, 21));
        ssnLineEdit = new QLineEdit(frame);
        ssnLineEdit->setObjectName(QStringLiteral("ssnLineEdit"));
        ssnLineEdit->setEnabled(false);
        ssnLineEdit->setGeometry(QRect(120, 150, 121, 21));
        ssnLineEdit->setReadOnly(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        caseTextEdit = new QTextEdit(tab_2);
        caseTextEdit->setObjectName(QStringLiteral("caseTextEdit"));
        caseTextEdit->setGeometry(QRect(10, 10, 251, 181));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        caseTextEdit->setPalette(palette4);
        tabWidget->addTab(tab_2, QString());
        basicTableView = new QTableView(centralWidget);
        basicTableView->setObjectName(QStringLiteral("basicTableView"));
        basicTableView->setGeometry(QRect(310, 480, 511, 181));
        dayLcdNumber = new QLCDNumber(centralWidget);
        dayLcdNumber->setObjectName(QStringLiteral("dayLcdNumber"));
        dayLcdNumber->setGeometry(QRect(790, 70, 21, 23));
        dayLcdNumber->setDigitCount(2);
        dayLcdNumber->setSegmentStyle(QLCDNumber::Flat);
        dayLcdNumber->setProperty("value", QVariant(1));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 843, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\261\237\350\213\217\347\234\2012018\357\274\210\345\256\201\357\274\211\350\277\234\347\250\213\345\214\273\347\226\227 \346\265\213\350\257\225\347\211\210v1.0", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\215\227\344\272\254\345\270\202\351\274\223\346\245\274\345\214\273\351\231\242\350\277\234\347\250\213\350\257\212\346\226\255\347\263\273\347\273\237", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\351\274\223\346\245\274\345\214\273\351\231\242", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\345\205\255\345\220\210\345\214\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\345\206\205\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\347\245\236\347\273\217\345\206\205\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "\350\202\276\345\206\205\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "\345\206\205\345\210\206\346\263\214\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "\345\221\274\345\220\270\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem2->child(4);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "\346\266\210\345\214\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem2->child(5);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "\345\246\207\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "\350\202\235\350\203\206\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "\350\241\200\347\256\241\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem9->child(2);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "\345\277\203\350\203\270\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem9->child(3);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "\350\200\263\351\274\273\345\222\275\345\226\211\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "\346\200\245\350\257\212\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "\346\265\246\345\217\243\345\214\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem15->child(0);
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "\345\246\207\344\272\247\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem15->child(1);
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "\350\200\201\345\271\264\345\214\273\345\255\246\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem15->child(2);
        ___qtreewidgetitem18->setText(0, QApplication::translate("MainWindow", "\345\204\277\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem19 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem19->setText(0, QApplication::translate("MainWindow", "\346\272\247\346\260\264\345\214\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem19->child(0);
        ___qtreewidgetitem20->setText(0, QApplication::translate("MainWindow", "\351\252\250\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem19->child(1);
        ___qtreewidgetitem21->setText(0, QApplication::translate("MainWindow", "\350\241\200\347\256\241\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem19->child(2);
        ___qtreewidgetitem22->setText(0, QApplication::translate("MainWindow", "\345\277\203\350\204\217\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem19->child(3);
        ___qtreewidgetitem23->setText(0, QApplication::translate("MainWindow", "\350\204\221\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem24 = ___qtreewidgetitem19->child(4);
        ___qtreewidgetitem24->setText(0, QApplication::translate("MainWindow", "\347\245\236\347\273\217\345\206\205\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem25 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem25->setText(0, QApplication::translate("MainWindow", "\351\253\230\346\267\263\345\214\272", nullptr));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem25->child(0);
        ___qtreewidgetitem26->setText(0, QApplication::translate("MainWindow", "\345\221\274\345\220\270\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem25->child(1);
        ___qtreewidgetitem27->setText(0, QApplication::translate("MainWindow", "\346\266\210\345\214\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem28 = ___qtreewidgetitem25->child(2);
        ___qtreewidgetitem28->setText(0, QApplication::translate("MainWindow", "\346\263\214\345\260\277\345\244\226\347\247\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem29 = ___qtreewidgetitem25->child(3);
        ___qtreewidgetitem29->setText(0, QApplication::translate("MainWindow", "\344\270\255\345\214\273\347\247\221", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        CT_Img_Label->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "CT \345\275\261 \345\203\217", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("MainWindow", "HH:mm:ss", nullptr));
        startPushButton->setText(QApplication::translate("MainWindow", "\345\274\200 \345\247\213 \350\257\212 \346\226\255", nullptr));
        nameLabel->setText(QApplication::translate("MainWindow", "\346\202\243\350\200\205\345\220\215", nullptr));
        maleRadioButton->setText(QApplication::translate("MainWindow", "\347\224\267", nullptr));
        femaleRadioButton->setText(QApplication::translate("MainWindow", "\345\245\263", nullptr));
        photoLabel->setText(QApplication::translate("MainWindow", "\346\232\202\346\227\240\347\205\247\347\211\207", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\345\271\264\351\276\204", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\260\221\346\227\217", nullptr));
        ethniComboBox->setItemText(0, QApplication::translate("MainWindow", "\346\261\211", nullptr));
        ethniComboBox->setItemText(1, QApplication::translate("MainWindow", "\346\273\241", nullptr));
        ethniComboBox->setItemText(2, QApplication::translate("MainWindow", "\345\233\236", nullptr));
        ethniComboBox->setItemText(3, QApplication::translate("MainWindow", "\350\222\231\345\217\244", nullptr));
        ethniComboBox->setItemText(4, QApplication::translate("MainWindow", "\345\243\256", nullptr));
        ethniComboBox->setItemText(5, QApplication::translate("MainWindow", "\350\227\217", nullptr));
        ethniComboBox->setItemText(6, QApplication::translate("MainWindow", "\347\273\264\345\220\276\345\260\224", nullptr));

        ethniComboBox->setCurrentText(QApplication::translate("MainWindow", "\346\261\211", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\214\273 \344\277\235 \345\215\241 \347\274\226 \345\217\267\357\274\232", nullptr));
        ssnLineEdit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\277\241\346\201\257", nullptr));
        caseTextEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\345\260\232\346\234\252\345\241\253\345\206\231</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\227\205\345\216\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
