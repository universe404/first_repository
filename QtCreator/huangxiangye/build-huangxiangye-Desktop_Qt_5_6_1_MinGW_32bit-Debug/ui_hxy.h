/********************************************************************************
** Form generated from reading UI file 'hxy.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HXY_H
#define UI_HXY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hxy
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_S;
    QAction *action_A;
    QAction *action_L;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hxy)
    {
        if (hxy->objectName().isEmpty())
            hxy->setObjectName(QStringLiteral("hxy"));
        hxy->resize(568, 534);
        action_N = new QAction(hxy);
        action_N->setObjectName(QStringLiteral("action_N"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myImages/images/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon);
        action_O = new QAction(hxy);
        action_O->setObjectName(QStringLiteral("action_O"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myImages/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon1);
        action_S = new QAction(hxy);
        action_S->setObjectName(QStringLiteral("action_S"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myImages/images/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon2);
        action_A = new QAction(hxy);
        action_A->setObjectName(QStringLiteral("action_A"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myImages/images/filesaveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_A->setIcon(icon3);
        action_L = new QAction(hxy);
        action_L->setObjectName(QStringLiteral("action_L"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/myImages/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_L->setIcon(icon4);
        centralWidget = new QWidget(hxy);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 220, 93, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 220, 93, 28));
        hxy->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(hxy);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 568, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        hxy->setMenuBar(menuBar);
        mainToolBar = new QToolBar(hxy);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        hxy->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(hxy);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        hxy->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menu_F->addAction(action_N);
        menu_F->addAction(action_O);
        menu_F->addAction(action_S);
        menu_F->addAction(action_A);
        menu_F->addAction(action_L);

        retranslateUi(hxy);

        QMetaObject::connectSlotsByName(hxy);
    } // setupUi

    void retranslateUi(QMainWindow *hxy)
    {
        hxy->setWindowTitle(QApplication::translate("hxy", "hxy", 0));
        action_N->setText(QApplication::translate("hxy", "\346\226\260\345\273\272(&N)", 0));
        action_N->setShortcut(QApplication::translate("hxy", "Ctrl+N", 0));
        action_O->setText(QApplication::translate("hxy", "\346\211\223\345\274\200(&O)", 0));
        action_O->setShortcut(QApplication::translate("hxy", "Ctrl+O", 0));
        action_S->setText(QApplication::translate("hxy", "\344\277\235\345\255\230(&S)", 0));
        action_S->setShortcut(QApplication::translate("hxy", "Ctrl+S", 0));
        action_A->setText(QApplication::translate("hxy", "\344\277\235\345\255\230\345\205\250\351\203\250(&A)", 0));
        action_A->setShortcut(QApplication::translate("hxy", "Ctrl+Shift+S", 0));
        action_L->setText(QApplication::translate("hxy", "\346\237\245\346\211\276(&L)", 0));
        action_L->setShortcut(QApplication::translate("hxy", "Ctrl+L", 0));
        pushButton->setText(QApplication::translate("hxy", "\346\237\245\347\234\213\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("hxy", "\346\225\260\345\255\227\350\207\252\345\242\236", 0));
        menu_F->setTitle(QApplication::translate("hxy", "\346\226\207\344\273\266(&F)", 0));
    } // retranslateUi

};

namespace Ui {
    class hxy: public Ui_hxy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HXY_H
