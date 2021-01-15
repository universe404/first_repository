/********************************************************************************
** Form generated from reading UI file 'counter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTER_H
#define UI_COUNTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *result;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_3;
    QPushButton *btn_6;
    QPushButton *btn_0;
    QPushButton *btn_5;
    QPushButton *btn_9;
    QPushButton *btn_1;
    QPushButton *btn_8;
    QPushButton *btn_3;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_4;
    QPushButton *btn_sub;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *btn_del;
    QPushButton *btn_div;
    QPushButton *btn_result;
    QPushButton *pushButton_7;
    QPushButton *btn_clear;
    QPushButton *btn_mul;
    QPushButton *btn_add;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QStringLiteral("Counter"));
        Counter->resize(359, 582);
        verticalLayout = new QVBoxLayout(Counter);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        result = new QLabel(Counter);
        result->setObjectName(QStringLiteral("result"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        result->setFont(font);
        result->setStyleSheet(QStringLiteral("QLabel{border:5px solid #242424;}"));
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(result);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_14 = new QPushButton(Counter);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setEnabled(false);
        pushButton_14->setMaximumSize(QSize(50, 16777215));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(pushButton_14);

        pushButton_13 = new QPushButton(Counter);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setEnabled(false);
        pushButton_13->setMaximumSize(QSize(50, 16777215));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(Counter);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMaximumSize(QSize(50, 16777215));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(Counter);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMaximumSize(QSize(50, 16777215));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(Counter);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMaximumSize(QSize(50, 16777215));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(Counter);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(false);
        pushButton_9->setMaximumSize(QSize(50, 16777215));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"}"));

        horizontalLayout->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_3 = new QPushButton(Counter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(70, 70));
        pushButton_3->setMaximumSize(QSize(70, 70));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_3->setFont(font1);

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);

        btn_6 = new QPushButton(Counter);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        btn_6->setMinimumSize(QSize(70, 70));
        btn_6->setMaximumSize(QSize(70, 70));
        btn_6->setFont(font1);
        btn_6->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_6, 3, 2, 1, 1);

        btn_0 = new QPushButton(Counter);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        btn_0->setMinimumSize(QSize(70, 70));
        btn_0->setMaximumSize(QSize(70, 70));
        btn_0->setFont(font1);
        btn_0->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_0, 5, 1, 1, 1);

        btn_5 = new QPushButton(Counter);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        btn_5->setMinimumSize(QSize(70, 70));
        btn_5->setMaximumSize(QSize(70, 70));
        btn_5->setFont(font1);
        btn_5->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_5, 3, 1, 1, 1);

        btn_9 = new QPushButton(Counter);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        btn_9->setMinimumSize(QSize(70, 70));
        btn_9->setMaximumSize(QSize(70, 70));
        btn_9->setFont(font1);
        btn_9->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_9, 2, 2, 1, 1);

        btn_1 = new QPushButton(Counter);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        btn_1->setMinimumSize(QSize(70, 70));
        btn_1->setMaximumSize(QSize(70, 70));
        btn_1->setFont(font1);
        btn_1->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_1, 4, 0, 1, 1);

        btn_8 = new QPushButton(Counter);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        btn_8->setMinimumSize(QSize(70, 70));
        btn_8->setMaximumSize(QSize(70, 70));
        btn_8->setFont(font1);
        btn_8->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_8, 2, 1, 1, 1);

        btn_3 = new QPushButton(Counter);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        btn_3->setMinimumSize(QSize(70, 70));
        btn_3->setMaximumSize(QSize(70, 70));
        btn_3->setFont(font1);
        btn_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_3, 4, 2, 1, 1);

        btn_2 = new QPushButton(Counter);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        btn_2->setMinimumSize(QSize(70, 70));
        btn_2->setMaximumSize(QSize(70, 70));
        btn_2->setFont(font1);
        btn_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_2, 4, 1, 1, 1);

        btn_7 = new QPushButton(Counter);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        btn_7->setEnabled(true);
        btn_7->setMinimumSize(QSize(70, 70));
        btn_7->setMaximumSize(QSize(70, 70));
        btn_7->setFont(font1);
        btn_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_7, 2, 0, 1, 1);

        btn_4 = new QPushButton(Counter);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        btn_4->setMinimumSize(QSize(70, 70));
        btn_4->setMaximumSize(QSize(70, 70));
        btn_4->setFont(font1);
        btn_4->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(btn_4, 3, 0, 1, 1);

        btn_sub = new QPushButton(Counter);
        btn_sub->setObjectName(QStringLiteral("btn_sub"));
        btn_sub->setMinimumSize(QSize(70, 70));
        btn_sub->setMaximumSize(QSize(70, 70));
        btn_sub->setFont(font1);

        gridLayout_2->addWidget(btn_sub, 3, 3, 1, 1);

        pushButton = new QPushButton(Counter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(70, 70));
        pushButton->setMaximumSize(QSize(70, 70));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(Counter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(70, 70));
        pushButton_2->setMaximumSize(QSize(70, 70));
        pushButton_2->setFont(font2);

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(Counter);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(70, 70));
        pushButton_5->setMaximumSize(QSize(70, 70));
        pushButton_5->setFont(font1);

        gridLayout_2->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(Counter);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(70, 70));
        pushButton_6->setMaximumSize(QSize(70, 70));
        pushButton_6->setFont(font1);

        gridLayout_2->addWidget(pushButton_6, 0, 1, 1, 1);

        btn_del = new QPushButton(Counter);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setMinimumSize(QSize(70, 70));
        btn_del->setMaximumSize(QSize(70, 70));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        btn_del->setFont(font3);

        gridLayout_2->addWidget(btn_del, 0, 3, 1, 1);

        btn_div = new QPushButton(Counter);
        btn_div->setObjectName(QStringLiteral("btn_div"));
        btn_div->setMinimumSize(QSize(70, 70));
        btn_div->setMaximumSize(QSize(70, 70));
        btn_div->setSizeIncrement(QSize(70, 70));
        btn_div->setFont(font1);

        gridLayout_2->addWidget(btn_div, 1, 3, 1, 1);

        btn_result = new QPushButton(Counter);
        btn_result->setObjectName(QStringLiteral("btn_result"));
        btn_result->setMinimumSize(QSize(70, 70));
        btn_result->setMaximumSize(QSize(70, 70));
        btn_result->setFont(font1);
        btn_result->setAutoFillBackground(false);
        btn_result->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(138, 186, 224)\n"
"}"));

        gridLayout_2->addWidget(btn_result, 5, 3, 1, 1);

        pushButton_7 = new QPushButton(Counter);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(70, 70));
        pushButton_7->setMaximumSize(QSize(70, 70));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(pushButton_7, 5, 2, 1, 1);

        btn_clear = new QPushButton(Counter);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setMinimumSize(QSize(70, 70));
        btn_clear->setMaximumSize(QSize(70, 70));
        btn_clear->setFont(font1);

        gridLayout_2->addWidget(btn_clear, 0, 2, 1, 1);

        btn_mul = new QPushButton(Counter);
        btn_mul->setObjectName(QStringLiteral("btn_mul"));
        btn_mul->setMinimumSize(QSize(70, 70));
        btn_mul->setMaximumSize(QSize(70, 70));
        btn_mul->setFont(font1);

        gridLayout_2->addWidget(btn_mul, 2, 3, 1, 1);

        btn_add = new QPushButton(Counter);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setMaximumSize(QSize(70, 70));
        btn_add->setBaseSize(QSize(0, 0));
        btn_add->setFont(font1);

        gridLayout_2->addWidget(btn_add, 4, 3, 1, 1);

        pushButton_4 = new QPushButton(Counter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(70, 70));
        pushButton_4->setMaximumSize(QSize(70, 70));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color:rgb(255, 255, 255)\n"
"}"));

        gridLayout_2->addWidget(pushButton_4, 5, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QDialog *Counter)
    {
        Counter->setWindowTitle(QApplication::translate("Counter", "Counter", 0));
        result->setText(QString());
        pushButton_14->setText(QApplication::translate("Counter", "MC", 0));
        pushButton_13->setText(QApplication::translate("Counter", "MR", 0));
        pushButton_12->setText(QApplication::translate("Counter", "M+", 0));
        pushButton_11->setText(QApplication::translate("Counter", "M-", 0));
        pushButton_10->setText(QApplication::translate("Counter", "MS", 0));
        pushButton_9->setText(QApplication::translate("Counter", "M", 0));
        pushButton_3->setText(QApplication::translate("Counter", "\342\210\232x", 0));
        btn_6->setText(QApplication::translate("Counter", "6", 0));
        btn_0->setText(QApplication::translate("Counter", "0", 0));
        btn_5->setText(QApplication::translate("Counter", "5", 0));
        btn_9->setText(QApplication::translate("Counter", "9", 0));
        btn_1->setText(QApplication::translate("Counter", "1", 0));
        btn_8->setText(QApplication::translate("Counter", "8", 0));
        btn_3->setText(QApplication::translate("Counter", "3", 0));
        btn_2->setText(QApplication::translate("Counter", "2", 0));
        btn_7->setText(QApplication::translate("Counter", "7", 0));
        btn_4->setText(QApplication::translate("Counter", "4", 0));
        btn_sub->setText(QApplication::translate("Counter", "-", 0));
        pushButton->setText(QApplication::translate("Counter", "1/x", 0));
        pushButton_2->setText(QApplication::translate("Counter", "x^2", 0));
        pushButton_5->setText(QApplication::translate("Counter", "%", 0));
        pushButton_6->setText(QApplication::translate("Counter", "CE", 0));
        btn_del->setText(QApplication::translate("Counter", "\345\210\240\351\231\244", 0));
        btn_div->setText(QApplication::translate("Counter", "\303\267", 0));
        btn_result->setText(QApplication::translate("Counter", "=", 0));
        pushButton_7->setText(QApplication::translate("Counter", ".", 0));
        btn_clear->setText(QApplication::translate("Counter", "C", 0));
        btn_mul->setText(QApplication::translate("Counter", "\303\227", 0));
        btn_add->setText(QApplication::translate("Counter", "+", 0));
        pushButton_4->setText(QApplication::translate("Counter", "+/-", 0));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTER_H
