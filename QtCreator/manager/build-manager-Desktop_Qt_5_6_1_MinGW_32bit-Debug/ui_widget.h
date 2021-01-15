/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *sellBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *buyBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *queryBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *passwordBtn;
    QStackedWidget *stackedWidget;
    QWidget *sellPage;
    QLabel *label;
    QLabel *label_6;
    QComboBox *sellTypeComboBox;
    QLabel *label_5;
    QComboBox *sellBrandComboBox;
    QLineEdit *sellPriceLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_7;
    QSpinBox *sellNumSpinBox;
    QLabel *sellLastNumLabel;
    QLineEdit *sellSumLineEdit;
    QLabel *label_9;
    QPushButton *sellOkBtn;
    QPushButton *sellCancelBtn;
    QWidget *page_3;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *goodsTypeComboBox;
    QLineEdit *goodsSumLineEdit;
    QLabel *label_11;
    QComboBox *goodsBrandComboBox;
    QLineEdit *goodsPriceLineEdit;
    QPushButton *goodsCancelBtn;
    QLabel *label_12;
    QPushButton *goodsOkBtn;
    QLabel *label_13;
    QLabel *label_14;
    QSpinBox *goodsNumSpinBox;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *page;
    QPushButton *newOkBtn;
    QComboBox *newTypeComboBox;
    QLabel *label_17;
    QLabel *label_18;
    QPushButton *newCancelBtn;
    QLabel *label_19;
    QSpinBox *newNumSpinBox;
    QLabel *label_20;
    QLineEdit *newSumLineEdit;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QSpinBox *newPriceSpinBox;
    QLineEdit *newBrandLineEdit;
    QWidget *page_2;
    QLabel *label_26;
    QComboBox *queryBrandComboBox;
    QComboBox *queryTypeComboBox;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *queryPushButton;
    QTableView *tableView;
    QWidget *page_4;
    QLabel *label_29;
    QLineEdit *newPwdLineEdit;
    QLineEdit *oldPwdLineEdit;
    QLabel *label_25;
    QPushButton *changePwdBtn;
    QLabel *label_30;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(750, 500);
        Widget->setMinimumSize(QSize(750, 500));
        Widget->setMaximumSize(QSize(750, 500));
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(22, 0, 701, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        sellBtn = new QPushButton(horizontalLayoutWidget);
        sellBtn->setObjectName(QStringLiteral("sellBtn"));
        sellBtn->setMinimumSize(QSize(0, 45));
        sellBtn->setMaximumSize(QSize(16777215, 45));

        horizontalLayout->addWidget(sellBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buyBtn = new QPushButton(horizontalLayoutWidget);
        buyBtn->setObjectName(QStringLiteral("buyBtn"));
        buyBtn->setMinimumSize(QSize(0, 45));
        buyBtn->setMaximumSize(QSize(16777215, 45));

        horizontalLayout->addWidget(buyBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        addBtn = new QPushButton(horizontalLayoutWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setMinimumSize(QSize(0, 45));
        addBtn->setMaximumSize(QSize(16777215, 45));

        horizontalLayout->addWidget(addBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        queryBtn = new QPushButton(horizontalLayoutWidget);
        queryBtn->setObjectName(QStringLiteral("queryBtn"));
        queryBtn->setMinimumSize(QSize(0, 45));
        queryBtn->setMaximumSize(QSize(16777215, 45));

        horizontalLayout->addWidget(queryBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        passwordBtn = new QPushButton(horizontalLayoutWidget);
        passwordBtn->setObjectName(QStringLiteral("passwordBtn"));
        passwordBtn->setMinimumSize(QSize(0, 45));
        passwordBtn->setMaximumSize(QSize(16777215, 45));

        horizontalLayout->addWidget(passwordBtn);

        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 90, 700, 410));
        sellPage = new QWidget();
        sellPage->setObjectName(QStringLiteral("sellPage"));
        label = new QLabel(sellPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 15, 700, 22));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(sellPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 240, 45, 15));
        sellTypeComboBox = new QComboBox(sellPage);
        sellTypeComboBox->setObjectName(QStringLiteral("sellTypeComboBox"));
        sellTypeComboBox->setGeometry(QRect(272, 80, 100, 21));
        label_5 = new QLabel(sellPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 200, 45, 15));
        sellBrandComboBox = new QComboBox(sellPage);
        sellBrandComboBox->setObjectName(QStringLiteral("sellBrandComboBox"));
        sellBrandComboBox->setGeometry(QRect(272, 120, 177, 21));
        sellPriceLineEdit = new QLineEdit(sellPage);
        sellPriceLineEdit->setObjectName(QStringLiteral("sellPriceLineEdit"));
        sellPriceLineEdit->setGeometry(QRect(272, 160, 90, 21));
        label_3 = new QLabel(sellPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 120, 45, 21));
        label_4 = new QLabel(sellPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 160, 45, 21));
        label_2 = new QLabel(sellPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 80, 45, 21));
        label_7 = new QLabel(sellPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(370, 163, 72, 15));
        sellNumSpinBox = new QSpinBox(sellPage);
        sellNumSpinBox->setObjectName(QStringLiteral("sellNumSpinBox"));
        sellNumSpinBox->setGeometry(QRect(270, 195, 90, 22));
        sellNumSpinBox->setMaximum(10000);
        sellLastNumLabel = new QLabel(sellPage);
        sellLastNumLabel->setObjectName(QStringLiteral("sellLastNumLabel"));
        sellLastNumLabel->setGeometry(QRect(370, 200, 111, 16));
        sellSumLineEdit = new QLineEdit(sellPage);
        sellSumLineEdit->setObjectName(QStringLiteral("sellSumLineEdit"));
        sellSumLineEdit->setGeometry(QRect(272, 238, 90, 21));
        label_9 = new QLabel(sellPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(370, 240, 72, 15));
        sellOkBtn = new QPushButton(sellPage);
        sellOkBtn->setObjectName(QStringLiteral("sellOkBtn"));
        sellOkBtn->setGeometry(QRect(170, 310, 93, 45));
        sellOkBtn->setMinimumSize(QSize(0, 45));
        sellOkBtn->setMaximumSize(QSize(16777215, 45));
        sellCancelBtn = new QPushButton(sellPage);
        sellCancelBtn->setObjectName(QStringLiteral("sellCancelBtn"));
        sellCancelBtn->setGeometry(QRect(410, 310, 93, 45));
        sellCancelBtn->setMinimumSize(QSize(0, 45));
        sellCancelBtn->setMaximumSize(QSize(16777215, 45));
        stackedWidget->addWidget(sellPage);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 200, 45, 15));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 240, 72, 15));
        goodsTypeComboBox = new QComboBox(page_3);
        goodsTypeComboBox->setObjectName(QStringLiteral("goodsTypeComboBox"));
        goodsTypeComboBox->setGeometry(QRect(272, 80, 100, 21));
        goodsSumLineEdit = new QLineEdit(page_3);
        goodsSumLineEdit->setObjectName(QStringLiteral("goodsSumLineEdit"));
        goodsSumLineEdit->setGeometry(QRect(272, 238, 90, 21));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(220, 240, 45, 15));
        goodsBrandComboBox = new QComboBox(page_3);
        goodsBrandComboBox->setObjectName(QStringLiteral("goodsBrandComboBox"));
        goodsBrandComboBox->setGeometry(QRect(272, 120, 177, 21));
        goodsPriceLineEdit = new QLineEdit(page_3);
        goodsPriceLineEdit->setObjectName(QStringLiteral("goodsPriceLineEdit"));
        goodsPriceLineEdit->setGeometry(QRect(272, 160, 90, 21));
        goodsCancelBtn = new QPushButton(page_3);
        goodsCancelBtn->setObjectName(QStringLiteral("goodsCancelBtn"));
        goodsCancelBtn->setGeometry(QRect(410, 310, 93, 45));
        goodsCancelBtn->setMinimumSize(QSize(0, 45));
        goodsCancelBtn->setMaximumSize(QSize(16777215, 45));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(370, 163, 72, 15));
        goodsOkBtn = new QPushButton(page_3);
        goodsOkBtn->setObjectName(QStringLiteral("goodsOkBtn"));
        goodsOkBtn->setGeometry(QRect(170, 310, 93, 45));
        goodsOkBtn->setMinimumSize(QSize(0, 45));
        goodsOkBtn->setMaximumSize(QSize(16777215, 45));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(220, 120, 45, 21));
        label_14 = new QLabel(page_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(220, 160, 45, 21));
        goodsNumSpinBox = new QSpinBox(page_3);
        goodsNumSpinBox->setObjectName(QStringLiteral("goodsNumSpinBox"));
        goodsNumSpinBox->setGeometry(QRect(270, 195, 90, 22));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 15, 700, 22));
        label_15->setFont(font);
        label_15->setFrameShape(QFrame::StyledPanel);
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(page_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(220, 80, 45, 21));
        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        newOkBtn = new QPushButton(page);
        newOkBtn->setObjectName(QStringLiteral("newOkBtn"));
        newOkBtn->setGeometry(QRect(170, 310, 93, 45));
        newOkBtn->setMinimumSize(QSize(0, 45));
        newOkBtn->setMaximumSize(QSize(16777215, 45));
        newTypeComboBox = new QComboBox(page);
        newTypeComboBox->setObjectName(QStringLiteral("newTypeComboBox"));
        newTypeComboBox->setGeometry(QRect(272, 80, 100, 21));
        label_17 = new QLabel(page);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(220, 80, 45, 21));
        label_18 = new QLabel(page);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(220, 240, 45, 15));
        newCancelBtn = new QPushButton(page);
        newCancelBtn->setObjectName(QStringLiteral("newCancelBtn"));
        newCancelBtn->setGeometry(QRect(410, 310, 93, 45));
        newCancelBtn->setMinimumSize(QSize(0, 45));
        newCancelBtn->setMaximumSize(QSize(16777215, 45));
        label_19 = new QLabel(page);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(370, 240, 72, 15));
        newNumSpinBox = new QSpinBox(page);
        newNumSpinBox->setObjectName(QStringLiteral("newNumSpinBox"));
        newNumSpinBox->setGeometry(QRect(270, 195, 90, 22));
        newNumSpinBox->setMaximum(10000);
        label_20 = new QLabel(page);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(370, 163, 72, 15));
        newSumLineEdit = new QLineEdit(page);
        newSumLineEdit->setObjectName(QStringLiteral("newSumLineEdit"));
        newSumLineEdit->setGeometry(QRect(272, 238, 90, 21));
        label_21 = new QLabel(page);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 15, 700, 22));
        label_21->setFont(font);
        label_21->setFrameShape(QFrame::StyledPanel);
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(page);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(220, 120, 45, 21));
        label_23 = new QLabel(page);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(220, 200, 45, 15));
        label_24 = new QLabel(page);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(220, 160, 45, 21));
        newPriceSpinBox = new QSpinBox(page);
        newPriceSpinBox->setObjectName(QStringLiteral("newPriceSpinBox"));
        newPriceSpinBox->setGeometry(QRect(270, 160, 90, 22));
        newPriceSpinBox->setMaximum(10000);
        newBrandLineEdit = new QLineEdit(page);
        newBrandLineEdit->setObjectName(QStringLiteral("newBrandLineEdit"));
        newBrandLineEdit->setGeometry(QRect(270, 120, 161, 21));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_26 = new QLabel(page_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(248, 70, 45, 21));
        queryBrandComboBox = new QComboBox(page_2);
        queryBrandComboBox->setObjectName(QStringLiteral("queryBrandComboBox"));
        queryBrandComboBox->setGeometry(QRect(300, 70, 221, 21));
        queryTypeComboBox = new QComboBox(page_2);
        queryTypeComboBox->setObjectName(QStringLiteral("queryTypeComboBox"));
        queryTypeComboBox->setGeometry(QRect(60, 70, 111, 21));
        label_27 = new QLabel(page_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(8, 70, 45, 21));
        label_28 = new QLabel(page_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(0, 15, 700, 22));
        label_28->setFont(font);
        label_28->setFrameShape(QFrame::StyledPanel);
        label_28->setAlignment(Qt::AlignCenter);
        queryPushButton = new QPushButton(page_2);
        queryPushButton->setObjectName(QStringLiteral("queryPushButton"));
        queryPushButton->setGeometry(QRect(590, 60, 93, 45));
        queryPushButton->setMinimumSize(QSize(0, 45));
        queryPushButton->setMaximumSize(QSize(16777215, 45));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(5, 131, 691, 261));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_29 = new QLabel(page_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(0, 15, 700, 22));
        label_29->setFont(font);
        label_29->setFrameShape(QFrame::StyledPanel);
        label_29->setAlignment(Qt::AlignCenter);
        newPwdLineEdit = new QLineEdit(page_4);
        newPwdLineEdit->setObjectName(QStringLiteral("newPwdLineEdit"));
        newPwdLineEdit->setGeometry(QRect(301, 160, 151, 21));
        oldPwdLineEdit = new QLineEdit(page_4);
        oldPwdLineEdit->setObjectName(QStringLiteral("oldPwdLineEdit"));
        oldPwdLineEdit->setGeometry(QRect(301, 100, 151, 21));
        label_25 = new QLabel(page_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(234, 162, 61, 20));
        changePwdBtn = new QPushButton(page_4);
        changePwdBtn->setObjectName(QStringLiteral("changePwdBtn"));
        changePwdBtn->setGeometry(QRect(300, 240, 93, 45));
        changePwdBtn->setMinimumSize(QSize(0, 45));
        changePwdBtn->setMaximumSize(QSize(16777215, 45));
        label_30 = new QLabel(page_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(234, 100, 61, 21));
        stackedWidget->addWidget(page_4);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        sellBtn->setText(QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", 0));
        buyBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", 0));
        addBtn->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", 0));
        queryBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", 0));
        passwordBtn->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", 0));
        label_6->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0));
        label_5->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0));
        label_3->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label_4->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0));
        label_2->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        label_7->setText(QApplication::translate("Widget", "\345\205\203", 0));
        sellLastNumLabel->setText(QApplication::translate("Widget", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232000", 0));
        label_9->setText(QApplication::translate("Widget", "\345\205\203", 0));
        sellOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        sellCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
        label_8->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0));
        label_10->setText(QApplication::translate("Widget", "\345\205\203", 0));
        label_11->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0));
        goodsCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
        label_12->setText(QApplication::translate("Widget", "\345\205\203", 0));
        goodsOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label_13->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label_14->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0));
        label_15->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", 0));
        label_16->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        newOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label_17->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        label_18->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0));
        newCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
        label_19->setText(QApplication::translate("Widget", "\345\205\203", 0));
        label_20->setText(QApplication::translate("Widget", "\345\205\203", 0));
        label_21->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", 0));
        label_22->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label_23->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0));
        label_24->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0));
        label_26->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0));
        label_27->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0));
        label_28->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", 0));
        queryPushButton->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0));
        label_29->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0));
        label_25->setText(QApplication::translate("Widget", "\346\226\260\345\257\206\347\240\201\357\274\232", 0));
        changePwdBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0));
        label_30->setText(QApplication::translate("Widget", "\345\216\237\345\257\206\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
