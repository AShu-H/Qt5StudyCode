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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *commodityPage;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *newPutinStorePushButton;
    QLabel *newPictureLabel;
    QComboBox *newCategoryComboBox;
    QLineEdit *newInputPriceLineEdit;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *newOutputPriceLineEdit;
    QLineEdit *newNameLineEdit;
    QLabel *label_20;
    QSpinBox *newCountSpinBox;
    QPushButton *newUploadPushButton;
    QLabel *label_21;
    QTableView *commodityTableView;
    QPushButton *newClearancePushButton;
    QWidget *page_3;
    QLabel *label_23;
    QComboBox *preCategoryComboBox;
    QLabel *label_24;
    QComboBox *preNameComboBox;
    QLabel *label_25;
    QLabel *preOutputPriceLabel;
    QLabel *label_27;
    QLabel *label_28;
    QSpinBox *preCountSpinBox;
    QLabel *label_29;
    QLabel *preTotalLabel;
    QLabel *label_31;
    QLabel *prePictureLabel;
    QPushButton *prePlaceOrderPushButton;
    QLabel *label_32;
    QLabel *preAmountLabel;
    QLabel *label_34;
    QPushButton *preSellPushButton;
    QListWidget *sellListWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(822, 492);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 20, 781, 410));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        commodityPage = new QWidget();
        commodityPage->setObjectName(QStringLiteral("commodityPage"));
        label = new QLabel(commodityPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 781, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(18);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);
        toolBox = new QToolBox(commodityPage);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(0, 30, 781, 381));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setBold(true);
        font1.setWeight(75);
        toolBox->setFont(font1);
        toolBox->setFrameShape(QFrame::WinPanel);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 777, 325));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 41, 21));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 41, 21));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 100, 41, 21));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 100, 41, 21));
        newPutinStorePushButton = new QPushButton(page_2);
        newPutinStorePushButton->setObjectName(QStringLiteral("newPutinStorePushButton"));
        newPutinStorePushButton->setGeometry(QRect(40, 270, 75, 23));
        newPictureLabel = new QLabel(page_2);
        newPictureLabel->setObjectName(QStringLiteral("newPictureLabel"));
        newPictureLabel->setGeometry(QRect(130, 170, 151, 151));
        newPictureLabel->setFrameShape(QFrame::Box);
        newPictureLabel->setFrameShadow(QFrame::Sunken);
        newPictureLabel->setScaledContents(true);
        newCategoryComboBox = new QComboBox(page_2);
        newCategoryComboBox->setObjectName(QStringLiteral("newCategoryComboBox"));
        newCategoryComboBox->setGeometry(QRect(70, 20, 91, 22));
        newInputPriceLineEdit = new QLineEdit(page_2);
        newInputPriceLineEdit->setObjectName(QStringLiteral("newInputPriceLineEdit"));
        newInputPriceLineEdit->setGeometry(QRect(70, 100, 61, 20));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(130, 100, 16, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(260, 100, 16, 21));
        label_13->setFont(font2);
        label_13->setAlignment(Qt::AlignCenter);
        newOutputPriceLineEdit = new QLineEdit(page_2);
        newOutputPriceLineEdit->setObjectName(QStringLiteral("newOutputPriceLineEdit"));
        newOutputPriceLineEdit->setGeometry(QRect(200, 100, 61, 20));
        newNameLineEdit = new QLineEdit(page_2);
        newNameLineEdit->setObjectName(QStringLiteral("newNameLineEdit"));
        newNameLineEdit->setGeometry(QRect(70, 60, 211, 20));
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(20, 140, 41, 21));
        newCountSpinBox = new QSpinBox(page_2);
        newCountSpinBox->setObjectName(QStringLiteral("newCountSpinBox"));
        newCountSpinBox->setGeometry(QRect(70, 140, 61, 22));
        newCountSpinBox->setAlignment(Qt::AlignCenter);
        newCountSpinBox->setValue(1);
        newUploadPushButton = new QPushButton(page_2);
        newUploadPushButton->setObjectName(QStringLiteral("newUploadPushButton"));
        newUploadPushButton->setGeometry(QRect(210, 150, 71, 23));
        label_21 = new QLabel(page_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 180, 81, 31));
        commodityTableView = new QTableView(page_2);
        commodityTableView->setObjectName(QStringLiteral("commodityTableView"));
        commodityTableView->setGeometry(QRect(300, 0, 471, 321));
        commodityTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        commodityTableView->horizontalHeader()->setVisible(true);
        commodityTableView->horizontalHeader()->setDefaultSectionSize(120);
        commodityTableView->horizontalHeader()->setMinimumSectionSize(25);
        commodityTableView->horizontalHeader()->setStretchLastSection(true);
        commodityTableView->verticalHeader()->setVisible(false);
        newClearancePushButton = new QPushButton(page_2);
        newClearancePushButton->setObjectName(QStringLiteral("newClearancePushButton"));
        newClearancePushButton->setGeometry(QRect(40, 300, 75, 23));
        toolBox->addItem(page_2, QString::fromUtf8("\346\226\260 \345\223\201 \345\205\245 \345\272\223"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 777, 325));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 10, 41, 21));
        preCategoryComboBox = new QComboBox(page_3);
        preCategoryComboBox->setObjectName(QStringLiteral("preCategoryComboBox"));
        preCategoryComboBox->setGeometry(QRect(70, 10, 91, 22));
        label_24 = new QLabel(page_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 50, 41, 21));
        preNameComboBox = new QComboBox(page_3);
        preNameComboBox->setObjectName(QStringLiteral("preNameComboBox"));
        preNameComboBox->setGeometry(QRect(70, 50, 231, 22));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 90, 41, 21));
        preOutputPriceLabel = new QLabel(page_3);
        preOutputPriceLabel->setObjectName(QStringLiteral("preOutputPriceLabel"));
        preOutputPriceLabel->setGeometry(QRect(70, 90, 61, 21));
        preOutputPriceLabel->setFrameShape(QFrame::Box);
        preOutputPriceLabel->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(page_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(130, 90, 16, 21));
        label_27->setFont(font2);
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(page_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 130, 41, 21));
        preCountSpinBox = new QSpinBox(page_3);
        preCountSpinBox->setObjectName(QStringLiteral("preCountSpinBox"));
        preCountSpinBox->setGeometry(QRect(70, 130, 61, 22));
        preCountSpinBox->setAlignment(Qt::AlignCenter);
        preCountSpinBox->setValue(1);
        label_29 = new QLabel(page_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(170, 130, 41, 21));
        preTotalLabel = new QLabel(page_3);
        preTotalLabel->setObjectName(QStringLiteral("preTotalLabel"));
        preTotalLabel->setGeometry(QRect(220, 130, 61, 21));
        preTotalLabel->setFrameShape(QFrame::Box);
        preTotalLabel->setFrameShadow(QFrame::Sunken);
        label_31 = new QLabel(page_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(280, 130, 16, 21));
        label_31->setFont(font2);
        label_31->setAlignment(Qt::AlignCenter);
        prePictureLabel = new QLabel(page_3);
        prePictureLabel->setObjectName(QStringLiteral("prePictureLabel"));
        prePictureLabel->setGeometry(QRect(20, 160, 151, 151));
        prePictureLabel->setFrameShape(QFrame::Box);
        prePictureLabel->setFrameShadow(QFrame::Sunken);
        prePictureLabel->setScaledContents(true);
        prePlaceOrderPushButton = new QPushButton(page_3);
        prePlaceOrderPushButton->setObjectName(QStringLiteral("prePlaceOrderPushButton"));
        prePlaceOrderPushButton->setEnabled(false);
        prePlaceOrderPushButton->setGeometry(QRect(220, 290, 75, 23));
        label_32 = new QLabel(page_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(170, 90, 41, 21));
        preAmountLabel = new QLabel(page_3);
        preAmountLabel->setObjectName(QStringLiteral("preAmountLabel"));
        preAmountLabel->setGeometry(QRect(220, 90, 61, 21));
        preAmountLabel->setFrameShape(QFrame::Box);
        preAmountLabel->setFrameShadow(QFrame::Sunken);
        label_34 = new QLabel(page_3);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(280, 90, 16, 21));
        preSellPushButton = new QPushButton(page_3);
        preSellPushButton->setObjectName(QStringLiteral("preSellPushButton"));
        preSellPushButton->setGeometry(QRect(220, 260, 75, 23));
        sellListWidget = new QListWidget(page_3);
        sellListWidget->setObjectName(QStringLiteral("sellListWidget"));
        sellListWidget->setGeometry(QRect(330, 0, 441, 311));
        toolBox->addItem(page_3, QString::fromUtf8("\351\242\204 \345\224\256 \350\256\242 \345\215\225"));
        stackedWidget->addWidget(commodityPage);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 822, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\224\265 \345\255\220 \345\225\206 \345\237\216", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\225\206  \345\223\201  \347\256\241  \347\220\206", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\347\261\273 \345\210\253\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\220\215 \347\247\260\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\350\277\233 \344\273\267\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\224\256 \344\273\267\357\274\232", nullptr));
        newPutinStorePushButton->setText(QApplication::translate("MainWindow", "\345\205\245 \345\272\223", nullptr));
        newPictureLabel->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\302\245", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\302\245", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\346\225\260 \351\207\217\357\274\232", nullptr));
        newUploadPushButton->setText(QApplication::translate("MainWindow", "\344\270\212 \344\274\240...", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\345\225\206 \345\223\201 \346\240\267 \347\205\247\357\274\232", nullptr));
        newClearancePushButton->setText(QApplication::translate("MainWindow", "\346\270\205 \344\273\223", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\346\226\260 \345\223\201 \345\205\245 \345\272\223", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\347\261\273 \345\210\253\357\274\232", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\345\220\215 \347\247\260\357\274\232", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\345\215\225 \344\273\267\357\274\232", nullptr));
        preOutputPriceLabel->setText(QString());
        label_27->setText(QApplication::translate("MainWindow", "\302\245", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "\346\225\260 \351\207\217\357\274\232", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\346\200\273 \344\273\267\357\274\232", nullptr));
        preTotalLabel->setText(QString());
        label_31->setText(QApplication::translate("MainWindow", "\302\245", nullptr));
        prePictureLabel->setText(QString());
        prePlaceOrderPushButton->setText(QApplication::translate("MainWindow", "\344\270\213 \345\215\225", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "\345\272\223 \345\255\230\357\274\232", nullptr));
        preAmountLabel->setText(QString());
        label_34->setText(QApplication::translate("MainWindow", "\344\273\266", nullptr));
        preSellPushButton->setText(QApplication::translate("MainWindow", "\345\207\272 \345\224\256", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\351\242\204 \345\224\256 \350\256\242 \345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
