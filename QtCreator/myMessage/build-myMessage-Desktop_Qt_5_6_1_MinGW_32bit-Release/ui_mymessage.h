/********************************************************************************
** Form generated from reading UI file 'mymessage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMESSAGE_H
#define UI_MYMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myMessage
{
public:
    QLabel *label;
    QPushButton *QuestionBtn;
    QPushButton *CriticalBtn;
    QPushButton *AboutQTBtn;
    QPushButton *WarningBtn;
    QPushButton *AboutBtn;
    QPushButton *CustomBtn;
    QPushButton *InformationBtn;

    void setupUi(QDialog *myMessage)
    {
        if (myMessage->objectName().isEmpty())
            myMessage->setObjectName(QStringLiteral("myMessage"));
        myMessage->resize(447, 412);
        label = new QLabel(myMessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 351, 30));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        QuestionBtn = new QPushButton(myMessage);
        QuestionBtn->setObjectName(QStringLiteral("QuestionBtn"));
        QuestionBtn->setGeometry(QRect(90, 90, 93, 28));
        CriticalBtn = new QPushButton(myMessage);
        CriticalBtn->setObjectName(QStringLiteral("CriticalBtn"));
        CriticalBtn->setGeometry(QRect(230, 90, 93, 28));
        AboutQTBtn = new QPushButton(myMessage);
        AboutQTBtn->setObjectName(QStringLiteral("AboutQTBtn"));
        AboutQTBtn->setGeometry(QRect(230, 140, 93, 28));
        WarningBtn = new QPushButton(myMessage);
        WarningBtn->setObjectName(QStringLiteral("WarningBtn"));
        WarningBtn->setGeometry(QRect(90, 140, 93, 28));
        AboutBtn = new QPushButton(myMessage);
        AboutBtn->setObjectName(QStringLiteral("AboutBtn"));
        AboutBtn->setGeometry(QRect(90, 190, 93, 28));
        CustomBtn = new QPushButton(myMessage);
        CustomBtn->setObjectName(QStringLiteral("CustomBtn"));
        CustomBtn->setGeometry(QRect(90, 240, 93, 28));
        InformationBtn = new QPushButton(myMessage);
        InformationBtn->setObjectName(QStringLiteral("InformationBtn"));
        InformationBtn->setGeometry(QRect(90, 300, 93, 28));

        retranslateUi(myMessage);

        QMetaObject::connectSlotsByName(myMessage);
    } // setupUi

    void retranslateUi(QDialog *myMessage)
    {
        myMessage->setWindowTitle(QApplication::translate("myMessage", "myMessage", 0));
        label->setText(QApplication::translate("myMessage", "MessageBox", 0));
        QuestionBtn->setText(QApplication::translate("myMessage", "Question", 0));
        CriticalBtn->setText(QApplication::translate("myMessage", "Critical", 0));
        AboutQTBtn->setText(QApplication::translate("myMessage", "About QT", 0));
        WarningBtn->setText(QApplication::translate("myMessage", "Warning", 0));
        AboutBtn->setText(QApplication::translate("myMessage", "About", 0));
        CustomBtn->setText(QApplication::translate("myMessage", "Custom", 0));
        InformationBtn->setText(QApplication::translate("myMessage", "Information", 0));
    } // retranslateUi

};

namespace Ui {
    class myMessage: public Ui_myMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMESSAGE_H
