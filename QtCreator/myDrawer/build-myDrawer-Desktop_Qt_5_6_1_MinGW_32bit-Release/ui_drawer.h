/********************************************************************************
** Form generated from reading UI file 'drawer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWER_H
#define UI_DRAWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drawer
{
public:

    void setupUi(QWidget *drawer)
    {
        if (drawer->objectName().isEmpty())
            drawer->setObjectName(QStringLiteral("drawer"));
        drawer->resize(400, 300);

        retranslateUi(drawer);

        QMetaObject::connectSlotsByName(drawer);
    } // setupUi

    void retranslateUi(QWidget *drawer)
    {
        drawer->setWindowTitle(QApplication::translate("drawer", "drawer", 0));
    } // retranslateUi

};

namespace Ui {
    class drawer: public Ui_drawer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWER_H
