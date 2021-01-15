/********************************************************************************
** Form generated from reading UI file 'userinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINFO_H
#define UI_USERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserInfo
{
public:
    QHBoxLayout *horizontalLayout_4;
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
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *image;
    QPushButton *image_update;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *UserInfo)
    {
        if (UserInfo->objectName().isEmpty())
            UserInfo->setObjectName(QStringLiteral("UserInfo"));
        UserInfo->resize(632, 398);
        horizontalLayout_4 = new QHBoxLayout(UserInfo);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nLabel = new QLabel(UserInfo);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(UserInfo);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        nLabel_2 = new QLabel(UserInfo);
        nLabel_2->setObjectName(QStringLiteral("nLabel_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nLabel_2);

        nLineEdit_2 = new QLineEdit(UserInfo);
        nLineEdit_2->setObjectName(QStringLiteral("nLineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nLineEdit_2);

        sLabel = new QLabel(UserInfo);
        sLabel->setObjectName(QStringLiteral("sLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(UserInfo);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sComboBox);

        dLabel = new QLabel(UserInfo);
        dLabel->setObjectName(QStringLiteral("dLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, dLabel);

        textEdit = new QTextEdit(UserInfo);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, textEdit);

        aLabel = new QLabel(UserInfo);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, aLabel);

        aSpinBox = new QSpinBox(UserInfo);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, aSpinBox);

        lineEdit = new QLineEdit(UserInfo);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::SpanningRole, lineEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_2);


        horizontalLayout_4->addLayout(formLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(UserInfo);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        image = new QLabel(UserInfo);
        image->setObjectName(QStringLiteral("image"));
        image->setMaximumSize(QSize(60, 60));
        image->setPixmap(QPixmap(QString::fromUtf8(":/images/2.png")));

        horizontalLayout_3->addWidget(image);

        image_update = new QPushButton(UserInfo);
        image_update->setObjectName(QStringLiteral("image_update"));

        horizontalLayout_3->addWidget(image_update);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(UserInfo);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEdit_2 = new QTextEdit(UserInfo);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(UserInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(UserInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        nLabel_2->setBuddy(nLineEdit_2);
        sLabel->setBuddy(sComboBox);
        dLabel->setBuddy(textEdit);
        aLabel->setBuddy(aSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(UserInfo);

        QMetaObject::connectSlotsByName(UserInfo);
    } // setupUi

    void retranslateUi(QDialog *UserInfo)
    {
        UserInfo->setWindowTitle(QApplication::translate("UserInfo", "UserInfo", 0));
        nLabel->setText(QApplication::translate("UserInfo", "\347\224\250\346\210\267\345\220\215(&I):", 0));
        nLabel_2->setText(QApplication::translate("UserInfo", "\345\247\223\345\220\215(&N):", 0));
        sLabel->setText(QApplication::translate("UserInfo", "\346\200\247\345\210\253(&S):", 0));
        sComboBox->clear();
        sComboBox->insertItems(0, QStringList()
         << QApplication::translate("UserInfo", "\347\224\267", 0)
         << QApplication::translate("UserInfo", "\345\245\263", 0)
        );
        dLabel->setText(QApplication::translate("UserInfo", "\351\203\250\351\227\250(&D):", 0));
        aLabel->setText(QApplication::translate("UserInfo", "\345\271\264\351\276\204(&A):", 0));
        lineEdit->setText(QApplication::translate("UserInfo", "\345\244\207\346\263\250\357\274\232", 0));
        label_2->setText(QApplication::translate("UserInfo", "\345\244\264\345\203\217\357\274\232", 0));
        image->setText(QString());
        image_update->setText(QApplication::translate("UserInfo", "\346\233\264\346\226\260", 0));
        label->setText(QApplication::translate("UserInfo", "\344\270\252\344\272\272\350\257\264\346\230\216\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("UserInfo", "\347\241\256\345\256\232", 0));
        pushButton->setText(QApplication::translate("UserInfo", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class UserInfo: public Ui_UserInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINFO_H
