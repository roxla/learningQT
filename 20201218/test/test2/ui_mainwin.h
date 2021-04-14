/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainwin
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *back;
    QVBoxLayout *verticalLayout;
    QPushButton *kongtiao;
    QPushButton *deng;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mainwin)
    {
        if (Mainwin->objectName().isEmpty())
            Mainwin->setObjectName(QStringLiteral("Mainwin"));
        Mainwin->resize(800, 600);
        centralwidget = new QWidget(Mainwin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 80, 79, 85));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(widget);
        back->setObjectName(QStringLiteral("back"));

        verticalLayout_2->addWidget(back);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        kongtiao = new QPushButton(widget);
        kongtiao->setObjectName(QStringLiteral("kongtiao"));

        verticalLayout->addWidget(kongtiao);

        deng = new QPushButton(widget);
        deng->setObjectName(QStringLiteral("deng"));

        verticalLayout->addWidget(deng);


        verticalLayout_2->addLayout(verticalLayout);

        Mainwin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Mainwin);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        Mainwin->setMenuBar(menubar);
        statusbar = new QStatusBar(Mainwin);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Mainwin->setStatusBar(statusbar);

        retranslateUi(Mainwin);

        QMetaObject::connectSlotsByName(Mainwin);
    } // setupUi

    void retranslateUi(QMainWindow *Mainwin)
    {
        Mainwin->setWindowTitle(QApplication::translate("Mainwin", "MainWindow", 0));
        back->setText(QApplication::translate("Mainwin", "back", 0));
        kongtiao->setText(QApplication::translate("Mainwin", "\347\251\272\350\260\203", 0));
        deng->setText(QApplication::translate("Mainwin", "\346\216\247\347\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class Mainwin: public Ui_Mainwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
