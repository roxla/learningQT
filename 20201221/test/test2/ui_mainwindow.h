/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *hour_1;
    QLCDNumber *hour_2;
    QLabel *label;
    QLCDNumber *minute_1;
    QLCDNumber *minute_2;
    QLabel *label_2;
    QLCDNumber *second_1;
    QLCDNumber *second_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *year;
    QLabel *label_3;
    QLCDNumber *month_1;
    QLCDNumber *month_2;
    QLabel *label_4;
    QLCDNumber *day_1;
    QLCDNumber *day_2;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1016, 632);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(210, 110, 521, 121));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        hour_1 = new QLCDNumber(widget);
        hour_1->setObjectName(QStringLiteral("hour_1"));
        hour_1->setDigitCount(1);
        hour_1->setProperty("value", QVariant(0));
        hour_1->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(hour_1);

        hour_2 = new QLCDNumber(widget);
        hour_2->setObjectName(QStringLiteral("hour_2"));
        hour_2->setDigitCount(1);
        hour_2->setProperty("value", QVariant(0));
        hour_2->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(hour_2);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(30, 0));
        label->setMaximumSize(QSize(30, 16777215));
        QFont font;
        font.setPointSize(50);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        minute_1 = new QLCDNumber(widget);
        minute_1->setObjectName(QStringLiteral("minute_1"));
        minute_1->setDigitCount(1);
        minute_1->setProperty("value", QVariant(0));
        minute_1->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(minute_1);

        minute_2 = new QLCDNumber(widget);
        minute_2->setObjectName(QStringLiteral("minute_2"));
        minute_2->setDigitCount(1);
        minute_2->setProperty("value", QVariant(0));
        minute_2->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(minute_2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(30, 0));
        label_2->setMaximumSize(QSize(30, 16777215));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        second_1 = new QLCDNumber(widget);
        second_1->setObjectName(QStringLiteral("second_1"));
        second_1->setDigitCount(1);
        second_1->setProperty("value", QVariant(0));
        second_1->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(second_1);

        second_2 = new QLCDNumber(widget);
        second_2->setObjectName(QStringLiteral("second_2"));
        second_2->setDigitCount(1);
        second_2->setProperty("value", QVariant(0));
        second_2->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(second_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(362, 237, 371, 51));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        year = new QLCDNumber(widget1);
        year->setObjectName(QStringLiteral("year"));
        year->setMaximumSize(QSize(16777215, 16777215));
        year->setDigitCount(4);

        horizontalLayout_2->addWidget(year);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(30, 16777215));
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);
        label_3->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label_3);

        month_1 = new QLCDNumber(widget1);
        month_1->setObjectName(QStringLiteral("month_1"));
        month_1->setMaximumSize(QSize(30, 16777215));
        month_1->setDigitCount(1);

        horizontalLayout_2->addWidget(month_1);

        month_2 = new QLCDNumber(widget1);
        month_2->setObjectName(QStringLiteral("month_2"));
        month_2->setMaximumSize(QSize(30, 16777215));
        month_2->setDigitCount(1);

        horizontalLayout_2->addWidget(month_2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(30, 16777215));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label_4);

        day_1 = new QLCDNumber(widget1);
        day_1->setObjectName(QStringLiteral("day_1"));
        day_1->setMaximumSize(QSize(30, 16777215));
        day_1->setDigitCount(1);

        horizontalLayout_2->addWidget(day_1);

        day_2 = new QLCDNumber(widget1);
        day_2->setObjectName(QStringLiteral("day_2"));
        day_2->setMaximumSize(QSize(30, 16777215));
        day_2->setDigitCount(1);

        horizontalLayout_2->addWidget(day_2);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(30, 16777215));
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1016, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", ":", 0));
        label_2->setText(QApplication::translate("MainWindow", ":", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\271\264", 0));
        label_4->setText(QApplication::translate("MainWindow", "\346\234\210", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\227\245", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
