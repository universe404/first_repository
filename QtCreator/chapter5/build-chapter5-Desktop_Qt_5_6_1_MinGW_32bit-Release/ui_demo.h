/********************************************************************************
** Form generated from reading UI file 'demo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO_H
#define UI_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demo
{
public:
    QAction *action_Dock_D;
    QAction *action_L;
    QAction *actionEnglish;
    QAction *action;
    QAction *action_V;
    QAction *action_V_2;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QPushButton *show;
    QPushButton *clear;
    QPushButton *font;
    QLineEdit *ascNum;
    QPushButton *grayBtn;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QLabel *label_3;
    QPushButton *blurBtn;
    QPushButton *sobelBtn;
    QPushButton *prewittBtn;
    QPushButton *robertsBtn;
    QPushButton *addOrgBtn;
    QPushButton *mirrorHorBtn;
    QPushButton *mirrorVerBtn;
    QPushButton *blackwhiteBtn;
    QPushButton *rotateleftBtn;
    QPushButton *rotaterigBtn;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *restoreBtn;
    QPushButton *saveBtn;
    QPushButton *saveAsBtn;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_S;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demo)
    {
        if (demo->objectName().isEmpty())
            demo->setObjectName(QStringLiteral("demo"));
        demo->resize(1000, 710);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(demo->sizePolicy().hasHeightForWidth());
        demo->setSizePolicy(sizePolicy);
        demo->setMinimumSize(QSize(1000, 710));
        demo->setMaximumSize(QSize(1000, 710));
        action_Dock_D = new QAction(demo);
        action_Dock_D->setObjectName(QStringLiteral("action_Dock_D"));
        action_L = new QAction(demo);
        action_L->setObjectName(QStringLiteral("action_L"));
        actionEnglish = new QAction(demo);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        action = new QAction(demo);
        action->setObjectName(QStringLiteral("action"));
        action_V = new QAction(demo);
        action_V->setObjectName(QStringLiteral("action_V"));
        action_V_2 = new QAction(demo);
        action_V_2->setObjectName(QStringLiteral("action_V_2"));
        centralWidget = new QWidget(demo);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dockWidget_2 = new QDockWidget(centralWidget);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy1);
        dockWidget_2->setMinimumSize(QSize(150, 300));
        dockWidget_2->setMaximumSize(QSize(150, 524287));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        show = new QPushButton(dockWidgetContents_2);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(20, 120, 100, 28));
        show->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        clear = new QPushButton(dockWidgetContents_2);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(20, 200, 100, 28));
        clear->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        font = new QPushButton(dockWidgetContents_2);
        font->setObjectName(QStringLiteral("font"));
        font->setGeometry(QRect(20, 160, 100, 28));
        font->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}\n"
""));
        ascNum = new QLineEdit(dockWidgetContents_2);
        ascNum->setObjectName(QStringLiteral("ascNum"));
        ascNum->setGeometry(QRect(20, 80, 100, 28));
        ascNum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        grayBtn = new QPushButton(dockWidgetContents_2);
        grayBtn->setObjectName(QStringLiteral("grayBtn"));
        grayBtn->setGeometry(QRect(20, 240, 100, 28));
        grayBtn->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        horizontalSlider = new QSlider(dockWidgetContents_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(0, 480, 150, 22));
        horizontalSlider->setStyleSheet(QStringLiteral(""));
        horizontalSlider->setMinimum(-50);
        horizontalSlider->setMaximum(50);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(dockWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 510, 72, 15));
        horizontalSlider_2 = new QSlider(dockWidgetContents_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(0, 530, 150, 22));
        horizontalSlider_2->setStyleSheet(QStringLiteral(""));
        horizontalSlider_2->setMinimum(-50);
        horizontalSlider_2->setMaximum(50);
        horizontalSlider_2->setSingleStep(3);
        horizontalSlider_2->setValue(0);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(dockWidgetContents_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(37, 560, 90, 15));
        blurBtn = new QPushButton(dockWidgetContents_2);
        blurBtn->setObjectName(QStringLiteral("blurBtn"));
        blurBtn->setGeometry(QRect(20, 280, 100, 28));
        blurBtn->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        sobelBtn = new QPushButton(dockWidgetContents_2);
        sobelBtn->setObjectName(QStringLiteral("sobelBtn"));
        sobelBtn->setGeometry(QRect(10, 400, 125, 28));
        sobelBtn->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        prewittBtn = new QPushButton(dockWidgetContents_2);
        prewittBtn->setObjectName(QStringLiteral("prewittBtn"));
        prewittBtn->setGeometry(QRect(10, 360, 125, 28));
        prewittBtn->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        robertsBtn = new QPushButton(dockWidgetContents_2);
        robertsBtn->setObjectName(QStringLiteral("robertsBtn"));
        robertsBtn->setGeometry(QRect(10, 320, 125, 28));
        robertsBtn->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        addOrgBtn = new QPushButton(dockWidgetContents_2);
        addOrgBtn->setObjectName(QStringLiteral("addOrgBtn"));
        addOrgBtn->setGeometry(QRect(10, 440, 125, 28));
        addOrgBtn->setStyleSheet(QLatin1String("QPushButton:hover\n"
"{\n"
"    background:rgb(255, 255, 255)\n"
"}"));
        mirrorHorBtn = new QPushButton(dockWidgetContents_2);
        mirrorHorBtn->setObjectName(QStringLiteral("mirrorHorBtn"));
        mirrorHorBtn->setGeometry(QRect(20, 10, 31, 28));
        mirrorHorBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/mirror.svg)\n"
"}"));
        mirrorVerBtn = new QPushButton(dockWidgetContents_2);
        mirrorVerBtn->setObjectName(QStringLiteral("mirrorVerBtn"));
        mirrorVerBtn->setGeometry(QRect(60, 10, 31, 28));
        mirrorVerBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/mirror_2.svg)\n"
"}"));
        blackwhiteBtn = new QPushButton(dockWidgetContents_2);
        blackwhiteBtn->setObjectName(QStringLiteral("blackwhiteBtn"));
        blackwhiteBtn->setGeometry(QRect(100, 10, 31, 28));
        blackwhiteBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/blackwhite.svg)\n"
"}"));
        rotateleftBtn = new QPushButton(dockWidgetContents_2);
        rotateleftBtn->setObjectName(QStringLiteral("rotateleftBtn"));
        rotateleftBtn->setGeometry(QRect(20, 45, 31, 28));
        rotateleftBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/rotate_right.svg)\n"
"}"));
        rotaterigBtn = new QPushButton(dockWidgetContents_2);
        rotaterigBtn->setObjectName(QStringLiteral("rotaterigBtn"));
        rotaterigBtn->setGeometry(QRect(60, 45, 31, 28));
        rotaterigBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/rotate_left.svg)\n"
"}"));
        dockWidget_2->setWidget(dockWidgetContents_2);

        horizontalLayout_2->addWidget(dockWidget_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QStringLiteral("QLabel{border:5px solid rgb(255, 255, 255);}"));

        verticalLayout->addWidget(label);

        horizontalWidget = new QWidget(centralWidget);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setMinimumSize(QSize(0, 50));
        horizontalWidget->setMaximumSize(QSize(16777215, 50));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        restoreBtn = new QPushButton(horizontalWidget);
        restoreBtn->setObjectName(QStringLiteral("restoreBtn"));
        restoreBtn->setMinimumSize(QSize(30, 30));
        restoreBtn->setMaximumSize(QSize(30, 30));
        restoreBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/restore.svg)\n"
"}"));

        horizontalLayout->addWidget(restoreBtn);

        saveBtn = new QPushButton(horizontalWidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        saveBtn->setMinimumSize(QSize(30, 30));
        saveBtn->setMaximumSize(QSize(30, 30));
        saveBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/save.svg)\n"
"}"));

        horizontalLayout->addWidget(saveBtn);

        saveAsBtn = new QPushButton(horizontalWidget);
        saveAsBtn->setObjectName(QStringLiteral("saveAsBtn"));
        saveAsBtn->setMinimumSize(QSize(30, 26));
        saveAsBtn->setMaximumSize(QSize(30, 26));
        saveAsBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"border-image:url(:/img/images/saveas.svg)\n"
"}"));

        horizontalLayout->addWidget(saveAsBtn);


        verticalLayout->addWidget(horizontalWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        demo->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(demo);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_S = new QMenu(menuBar);
        menu_S->setObjectName(QStringLiteral("menu_S"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        demo->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demo);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        demo->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(demo);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        demo->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_S->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(action_Dock_D);
        menu_F->addAction(action_V);
        menu_F->addAction(action_V_2);
        menu_S->addAction(action_L);
        menu_S->addAction(actionEnglish);
        menu_H->addAction(action);

        retranslateUi(demo);

        QMetaObject::connectSlotsByName(demo);
    } // setupUi

    void retranslateUi(QMainWindow *demo)
    {
        demo->setWindowTitle(QApplication::translate("demo", "demo", 0));
        action_Dock_D->setText(QApplication::translate("demo", "\346\230\276\347\244\272Dock(&D)", 0));
        action_L->setText(QApplication::translate("demo", "\344\270\255\346\226\207", 0));
        actionEnglish->setText(QApplication::translate("demo", "English", 0));
        action->setText(QApplication::translate("demo", "\345\205\263\344\272\216\346\234\254\350\275\257\344\273\266", 0));
        action_V->setText(QApplication::translate("demo", "\346\211\223\345\274\200\345\233\276\347\211\207(&P)", 0));
        action_V_2->setText(QApplication::translate("demo", "\346\211\223\345\274\200\350\247\206\351\242\221(&V)", 0));
        dockWidget_2->setWindowTitle(QApplication::translate("demo", "\345\267\245\345\205\267\347\256\261", 0));
        show->setText(QApplication::translate("demo", "\346\230\276\347\244\272\345\255\227\347\254\246", 0));
        clear->setText(QApplication::translate("demo", "\346\270\205\351\231\244\345\206\205\345\256\271", 0));
        font->setText(QApplication::translate("demo", "\350\256\276\347\275\256\345\255\227\344\275\223", 0));
        ascNum->setPlaceholderText(QApplication::translate("demo", "\350\276\223\345\205\245ASCII\347\240\201", 0));
        grayBtn->setText(QApplication::translate("demo", "\347\201\260\345\272\246", 0));
        label_2->setText(QApplication::translate("demo", "\344\272\256\345\272\246\350\260\203\350\212\202", 0));
        label_3->setText(QApplication::translate("demo", "\351\245\261\345\222\214\345\272\246\350\260\203\350\212\202", 0));
        blurBtn->setText(QApplication::translate("demo", "\345\235\207\345\200\274\346\273\244\346\263\242", 0));
        sobelBtn->setText(QApplication::translate("demo", "Sobel\350\276\271\347\274\230\346\243\200\346\265\213", 0));
        prewittBtn->setText(QApplication::translate("demo", "Prewitt\350\276\271\347\274\230\346\243\200\346\265\213", 0));
        robertsBtn->setText(QApplication::translate("demo", "Roberts\350\276\271\347\274\230\346\243\200\346\265\213", 0));
        addOrgBtn->setText(QApplication::translate("demo", "\345\216\237\345\233\276\345\244\215\345\220\210", 0));
        mirrorHorBtn->setText(QString());
        mirrorVerBtn->setText(QString());
        blackwhiteBtn->setText(QString());
#ifndef QT_NO_WHATSTHIS
        rotateleftBtn->setWhatsThis(QApplication::translate("demo", "<html><head/><body><p>\346\227\213\350\275\254</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        rotateleftBtn->setText(QString());
#ifndef QT_NO_WHATSTHIS
        rotaterigBtn->setWhatsThis(QApplication::translate("demo", "<html><head/><body><p>\346\227\213\350\275\254</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        rotaterigBtn->setText(QString());
        label->setText(QString());
        restoreBtn->setText(QString());
        saveBtn->setText(QString());
        saveAsBtn->setText(QString());
        menu_F->setTitle(QApplication::translate("demo", "\346\226\207\344\273\266(&F)", 0));
        menu_E->setTitle(QApplication::translate("demo", "\347\274\226\350\276\221(&E)", 0));
        menu_S->setTitle(QApplication::translate("demo", "\350\257\255\350\250\200(&L)", 0));
        menu_H->setTitle(QApplication::translate("demo", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class demo: public Ui_demo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO_H
