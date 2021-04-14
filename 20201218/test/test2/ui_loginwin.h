/********************************************************************************
** Form generated from reading UI file 'loginwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIN_H
#define UI_LOGINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loginwin
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lename;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lepwd;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *log;
    QPushButton *reg;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Loginwin)
    {
        if (Loginwin->objectName().isEmpty())
            Loginwin->setObjectName(QStringLiteral("Loginwin"));
        Loginwin->resize(400, 300);
        centralWidget = new QWidget(Loginwin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 371, 231));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lename = new QLineEdit(widget);
        lename->setObjectName(QStringLiteral("lename"));

        horizontalLayout->addWidget(lename);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lepwd = new QLineEdit(widget);
        lepwd->setObjectName(QStringLiteral("lepwd"));

        horizontalLayout_2->addWidget(lepwd);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        log = new QPushButton(widget);
        log->setObjectName(QStringLiteral("log"));

        horizontalLayout_3->addWidget(log);

        reg = new QPushButton(widget);
        reg->setObjectName(QStringLiteral("reg"));

        horizontalLayout_3->addWidget(reg);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        Loginwin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Loginwin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        Loginwin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Loginwin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Loginwin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Loginwin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Loginwin->setStatusBar(statusBar);

        retranslateUi(Loginwin);

        QMetaObject::connectSlotsByName(Loginwin);
    } // setupUi

    void retranslateUi(QMainWindow *Loginwin)
    {
        Loginwin->setWindowTitle(QApplication::translate("Loginwin", "Loginwin", 0));
        label->setText(QApplication::translate("Loginwin", "\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("Loginwin", "\345\257\206\347\240\201", 0));
        log->setText(QApplication::translate("Loginwin", "\347\231\273\345\275\225", 0));
        reg->setText(QApplication::translate("Loginwin", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Loginwin: public Ui_Loginwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIN_H
