/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QStringLiteral("HelloDialog"));
        HelloDialog->resize(628, 530);
        QFont font;
        font.setItalic(false);
        HelloDialog->setFont(font);
        label = new QLabel(HelloDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 160, 271, 121));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        lineEdit = new QLineEdit(HelloDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 270, 113, 21));
        lineEdit_2 = new QLineEdit(HelloDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 320, 113, 21));
        label_2 = new QLabel(HelloDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 260, 72, 31));
        QFont font2;
        font2.setPointSize(11);
        label_2->setFont(font2);
        label_3 = new QLabel(HelloDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 310, 72, 31));
        label_3->setFont(font2);
        pushButton = new QPushButton(HelloDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 380, 93, 28));
        pushButton->setFont(font2);

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog)
    {
        HelloDialog->setWindowTitle(QApplication::translate("HelloDialog", "HelloDialog", 0));
        label->setText(QApplication::translate("HelloDialog", "hello world!\344\275\240\345\245\275 QT\357\274\201", 0));
        label_2->setText(QApplication::translate("HelloDialog", "\350\276\223\345\205\245x", 0));
        label_3->setText(QApplication::translate("HelloDialog", "\350\276\223\345\205\245y", 0));
        pushButton->setText(QApplication::translate("HelloDialog", "click me!", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
