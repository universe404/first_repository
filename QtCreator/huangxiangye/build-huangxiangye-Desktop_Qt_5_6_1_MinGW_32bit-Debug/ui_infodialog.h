/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QLabel *number;
    QLabel *name;
    QPushButton *exitBtn;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QStringLiteral("InfoDialog"));
        InfoDialog->resize(473, 347);
        number = new QLabel(InfoDialog);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(100, 140, 200, 25));
        QFont font;
        font.setPointSize(11);
        number->setFont(font);
        name = new QLabel(InfoDialog);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(100, 200, 200, 25));
        name->setFont(font);
        exitBtn = new QPushButton(InfoDialog);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(300, 250, 93, 28));

        retranslateUi(InfoDialog);
        QObject::connect(exitBtn, SIGNAL(clicked()), InfoDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "Dialog", 0));
        number->setText(QApplication::translate("InfoDialog", "\345\255\246\345\217\267\357\274\232189050602", 0));
        name->setText(QApplication::translate("InfoDialog", "\345\247\223\345\220\215\357\274\232\351\273\204\346\271\230\347\203\250", 0));
        exitBtn->setText(QApplication::translate("InfoDialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
