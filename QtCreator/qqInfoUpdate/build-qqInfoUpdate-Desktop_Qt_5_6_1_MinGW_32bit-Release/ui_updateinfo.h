/********************************************************************************
** Form generated from reading UI file 'updateinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEINFO_H
#define UI_UPDATEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateInfo
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *nLabel_2;
    QLineEdit *nLineEdit_2;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QLabel *dLabel;
    QTextEdit *textEdit;
    QLabel *aLabel;
    QSpinBox *aSpinBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *UpdateInfo)
    {
        if (UpdateInfo->objectName().isEmpty())
            UpdateInfo->setObjectName(QStringLiteral("UpdateInfo"));
        UpdateInfo->resize(693, 558);
        formLayoutWidget = new QWidget(UpdateInfo);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(79, 70, 281, 411));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nLabel = new QLabel(formLayoutWidget);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(formLayoutWidget);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        nLabel_2 = new QLabel(formLayoutWidget);
        nLabel_2->setObjectName(QStringLiteral("nLabel_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nLabel_2);

        nLineEdit_2 = new QLineEdit(formLayoutWidget);
        nLineEdit_2->setObjectName(QStringLiteral("nLineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nLineEdit_2);

        sLabel = new QLabel(formLayoutWidget);
        sLabel->setObjectName(QStringLiteral("sLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(formLayoutWidget);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sComboBox);

        dLabel = new QLabel(formLayoutWidget);
        dLabel->setObjectName(QStringLiteral("dLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, dLabel);

        textEdit = new QTextEdit(formLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, textEdit);

        aLabel = new QLabel(formLayoutWidget);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(formLayoutWidget);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, aSpinBox);

        verticalLayoutWidget = new QWidget(UpdateInfo);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(430, 70, 221, 401));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        nLabel_2->setBuddy(nLineEdit_2);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(UpdateInfo);

        QMetaObject::connectSlotsByName(UpdateInfo);
    } // setupUi

    void retranslateUi(QDialog *UpdateInfo)
    {
        UpdateInfo->setWindowTitle(QApplication::translate("UpdateInfo", "UpdateInfo", 0));
        nLabel->setText(QApplication::translate("UpdateInfo", "\347\224\250\346\210\267\345\220\215(&N):", 0));
        nLabel_2->setText(QApplication::translate("UpdateInfo", "\345\247\223\345\220\215(&N):", 0));
        sLabel->setText(QApplication::translate("UpdateInfo", "\346\200\247\345\210\253(&S):", 0));
        dLabel->setText(QApplication::translate("UpdateInfo", "\351\203\250\351\227\250(&D):", 0));
        aLabel->setText(QApplication::translate("UpdateInfo", "\345\271\264\351\276\204(&A)", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateInfo: public Ui_UpdateInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEINFO_H
