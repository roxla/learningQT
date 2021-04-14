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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "carbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QLabel *time;
    QLabel *weather;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *blank;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *user;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLabel *stopTime;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *stopPrice;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *arrowLeft;
    QLabel *label_5;
    QPushButton *arrowRight;
    QHBoxLayout *horizontalLayout;
    CarButton *car_1;
    CarButton *car_2;
    CarButton *car_3;
    CarButton *car_4;
    CarButton *car_5;
    CarButton *car_6;
    CarButton *car_7;
    CarButton *car_8;
    CarButton *car_9;
    CarButton *car_10;
    CarButton *car_11;
    QHBoxLayout *horizontalLayout_2;
    CarButton *car_14;
    CarButton *car_15;
    CarButton *car_16;
    CarButton *car_17;
    CarButton *car_18;
    CarButton *car_19;
    CarButton *car_20;
    CarButton *car_21;
    CarButton *car_22;
    CarButton *car_23;
    CarButton *car_24;
    QHBoxLayout *horizontalLayout_3;
    CarButton *car_13;
    CarButton *car_25;
    CarButton *car_26;
    CarButton *car_27;
    CarButton *car_28;
    CarButton *car_29;
    CarButton *car_30;
    CarButton *car_31;
    CarButton *car_32;
    CarButton *car_33;
    CarButton *car_34;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 782, 411));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        time = new QLabel(layoutWidget);
        time->setObjectName(QStringLiteral("time"));
        time->setMinimumSize(QSize(200, 25));
        time->setMaximumSize(QSize(200, 25));
        time->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(time);

        weather = new QLabel(layoutWidget);
        weather->setObjectName(QStringLiteral("weather"));
        weather->setMinimumSize(QSize(200, 25));
        weather->setMaximumSize(QSize(200, 25));
        QFont font;
        font.setPointSize(8);
        weather->setFont(font);
        weather->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(weather);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(90, 25));
        label_2->setMaximumSize(QSize(90, 25));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        blank = new QLabel(layoutWidget);
        blank->setObjectName(QStringLiteral("blank"));
        blank->setMinimumSize(QSize(0, 25));
        blank->setMaximumSize(QSize(16777215, 25));
        blank->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(blank);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        user = new QPushButton(layoutWidget);
        user->setObjectName(QStringLiteral("user"));
        user->setMinimumSize(QSize(45, 45));
        user->setMaximumSize(QSize(45, 45));
        user->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/user.png);"));

        horizontalLayout_7->addWidget(user);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_7->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_7);


        horizontalLayout_11->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        widget_2 = new QWidget(layoutWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(400, 0));
        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 10, 341, 121));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(90, 25));
        label->setMaximumSize(QSize(90, 60));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label);

        stopTime = new QLabel(layoutWidget1);
        stopTime->setObjectName(QStringLiteral("stopTime"));
        stopTime->setMinimumSize(QSize(160, 25));

        horizontalLayout_8->addWidget(stopTime);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(90, 25));
        label_4->setMaximumSize(QSize(90, 60));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_4);

        stopPrice = new QLabel(layoutWidget1);
        stopPrice->setObjectName(QStringLiteral("stopPrice"));
        stopPrice->setMinimumSize(QSize(160, 25));

        horizontalLayout_9->addWidget(stopPrice);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(90, 25));
        pushButton->setMaximumSize(QSize(90, 25));
        pushButton->setStyleSheet(QLatin1String("border: 0px;\n"
"text-align: right;"));

        horizontalLayout_10->addWidget(pushButton);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(160, 25));

        horizontalLayout_10->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_6->addWidget(widget_2);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(160, 120));
        widget->setMaximumSize(QSize(160, 120));

        horizontalLayout_6->addWidget(widget);


        horizontalLayout_11->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        arrowLeft = new QPushButton(layoutWidget);
        arrowLeft->setObjectName(QStringLiteral("arrowLeft"));
        arrowLeft->setMinimumSize(QSize(80, 50));
        arrowLeft->setMaximumSize(QSize(80, 50));
        arrowLeft->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Arrow_left.png);"));

        horizontalLayout_4->addWidget(arrowLeft);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(600, 0));
        label_5->setMaximumSize(QSize(600, 16777215));

        horizontalLayout_4->addWidget(label_5);

        arrowRight = new QPushButton(layoutWidget);
        arrowRight->setObjectName(QStringLiteral("arrowRight"));
        arrowRight->setMinimumSize(QSize(80, 50));
        arrowRight->setMaximumSize(QSize(80, 50));
        arrowRight->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/Arrow_right.png);"));

        horizontalLayout_4->addWidget(arrowRight);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        car_1 = new CarButton(layoutWidget);
        car_1->setObjectName(QStringLiteral("car_1"));
        car_1->setMinimumSize(QSize(60, 60));
        car_1->setMaximumSize(QSize(60, 60));
        car_1->setStyleSheet(QStringLiteral(""));
        car_1->setIconSize(QSize(50, 50));
        car_1->setFlat(false);

        horizontalLayout->addWidget(car_1);

        car_2 = new CarButton(layoutWidget);
        car_2->setObjectName(QStringLiteral("car_2"));
        car_2->setMinimumSize(QSize(60, 60));
        car_2->setMaximumSize(QSize(60, 60));
        car_2->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_2);

        car_3 = new CarButton(layoutWidget);
        car_3->setObjectName(QStringLiteral("car_3"));
        car_3->setMinimumSize(QSize(60, 60));
        car_3->setMaximumSize(QSize(60, 60));
        car_3->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_3);

        car_4 = new CarButton(layoutWidget);
        car_4->setObjectName(QStringLiteral("car_4"));
        car_4->setMinimumSize(QSize(60, 60));
        car_4->setMaximumSize(QSize(60, 60));
        car_4->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_4);

        car_5 = new CarButton(layoutWidget);
        car_5->setObjectName(QStringLiteral("car_5"));
        car_5->setMinimumSize(QSize(60, 60));
        car_5->setMaximumSize(QSize(60, 60));
        car_5->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_5);

        car_6 = new CarButton(layoutWidget);
        car_6->setObjectName(QStringLiteral("car_6"));
        car_6->setMinimumSize(QSize(60, 60));
        car_6->setMaximumSize(QSize(60, 60));
        car_6->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_6);

        car_7 = new CarButton(layoutWidget);
        car_7->setObjectName(QStringLiteral("car_7"));
        car_7->setMinimumSize(QSize(60, 60));
        car_7->setMaximumSize(QSize(60, 60));
        car_7->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_7);

        car_8 = new CarButton(layoutWidget);
        car_8->setObjectName(QStringLiteral("car_8"));
        car_8->setMinimumSize(QSize(60, 60));
        car_8->setMaximumSize(QSize(60, 60));
        car_8->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_8);

        car_9 = new CarButton(layoutWidget);
        car_9->setObjectName(QStringLiteral("car_9"));
        car_9->setMinimumSize(QSize(60, 60));
        car_9->setMaximumSize(QSize(60, 60));
        car_9->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_9);

        car_10 = new CarButton(layoutWidget);
        car_10->setObjectName(QStringLiteral("car_10"));
        car_10->setMinimumSize(QSize(60, 60));
        car_10->setMaximumSize(QSize(60, 60));
        car_10->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_10);

        car_11 = new CarButton(layoutWidget);
        car_11->setObjectName(QStringLiteral("car_11"));
        car_11->setMinimumSize(QSize(60, 60));
        car_11->setMaximumSize(QSize(60, 60));
        car_11->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(car_11);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        car_14 = new CarButton(layoutWidget);
        car_14->setObjectName(QStringLiteral("car_14"));
        car_14->setMinimumSize(QSize(60, 60));
        car_14->setMaximumSize(QSize(60, 60));
        car_14->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_14);

        car_15 = new CarButton(layoutWidget);
        car_15->setObjectName(QStringLiteral("car_15"));
        car_15->setMinimumSize(QSize(60, 60));
        car_15->setMaximumSize(QSize(60, 60));
        car_15->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_15);

        car_16 = new CarButton(layoutWidget);
        car_16->setObjectName(QStringLiteral("car_16"));
        car_16->setMinimumSize(QSize(60, 60));
        car_16->setMaximumSize(QSize(60, 60));
        car_16->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_16);

        car_17 = new CarButton(layoutWidget);
        car_17->setObjectName(QStringLiteral("car_17"));
        car_17->setMinimumSize(QSize(60, 60));
        car_17->setMaximumSize(QSize(60, 60));
        car_17->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_17);

        car_18 = new CarButton(layoutWidget);
        car_18->setObjectName(QStringLiteral("car_18"));
        car_18->setMinimumSize(QSize(60, 60));
        car_18->setMaximumSize(QSize(60, 60));
        car_18->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_18);

        car_19 = new CarButton(layoutWidget);
        car_19->setObjectName(QStringLiteral("car_19"));
        car_19->setMinimumSize(QSize(60, 60));
        car_19->setMaximumSize(QSize(60, 60));
        car_19->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_19);

        car_20 = new CarButton(layoutWidget);
        car_20->setObjectName(QStringLiteral("car_20"));
        car_20->setMinimumSize(QSize(60, 60));
        car_20->setMaximumSize(QSize(60, 60));
        car_20->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_20);

        car_21 = new CarButton(layoutWidget);
        car_21->setObjectName(QStringLiteral("car_21"));
        car_21->setMinimumSize(QSize(60, 60));
        car_21->setMaximumSize(QSize(60, 60));
        car_21->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_21);

        car_22 = new CarButton(layoutWidget);
        car_22->setObjectName(QStringLiteral("car_22"));
        car_22->setMinimumSize(QSize(60, 60));
        car_22->setMaximumSize(QSize(60, 60));
        car_22->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_22);

        car_23 = new CarButton(layoutWidget);
        car_23->setObjectName(QStringLiteral("car_23"));
        car_23->setMinimumSize(QSize(60, 60));
        car_23->setMaximumSize(QSize(60, 60));
        car_23->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_23);

        car_24 = new CarButton(layoutWidget);
        car_24->setObjectName(QStringLiteral("car_24"));
        car_24->setMinimumSize(QSize(60, 60));
        car_24->setMaximumSize(QSize(60, 60));
        car_24->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(car_24);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        car_13 = new CarButton(layoutWidget);
        car_13->setObjectName(QStringLiteral("car_13"));
        car_13->setMinimumSize(QSize(60, 60));
        car_13->setMaximumSize(QSize(60, 60));
        car_13->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_13);

        car_25 = new CarButton(layoutWidget);
        car_25->setObjectName(QStringLiteral("car_25"));
        car_25->setMinimumSize(QSize(60, 60));
        car_25->setMaximumSize(QSize(60, 60));
        car_25->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_25);

        car_26 = new CarButton(layoutWidget);
        car_26->setObjectName(QStringLiteral("car_26"));
        car_26->setMinimumSize(QSize(60, 60));
        car_26->setMaximumSize(QSize(60, 60));
        car_26->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_26);

        car_27 = new CarButton(layoutWidget);
        car_27->setObjectName(QStringLiteral("car_27"));
        car_27->setMinimumSize(QSize(60, 60));
        car_27->setMaximumSize(QSize(60, 60));
        car_27->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_27);

        car_28 = new CarButton(layoutWidget);
        car_28->setObjectName(QStringLiteral("car_28"));
        car_28->setMinimumSize(QSize(60, 60));
        car_28->setMaximumSize(QSize(60, 60));
        car_28->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_28);

        car_29 = new CarButton(layoutWidget);
        car_29->setObjectName(QStringLiteral("car_29"));
        car_29->setMinimumSize(QSize(60, 60));
        car_29->setMaximumSize(QSize(60, 60));
        car_29->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_29);

        car_30 = new CarButton(layoutWidget);
        car_30->setObjectName(QStringLiteral("car_30"));
        car_30->setMinimumSize(QSize(60, 60));
        car_30->setMaximumSize(QSize(60, 60));
        car_30->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_30);

        car_31 = new CarButton(layoutWidget);
        car_31->setObjectName(QStringLiteral("car_31"));
        car_31->setMinimumSize(QSize(60, 60));
        car_31->setMaximumSize(QSize(60, 60));
        car_31->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_31);

        car_32 = new CarButton(layoutWidget);
        car_32->setObjectName(QStringLiteral("car_32"));
        car_32->setMinimumSize(QSize(60, 60));
        car_32->setMaximumSize(QSize(60, 60));
        car_32->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_32);

        car_33 = new CarButton(layoutWidget);
        car_33->setObjectName(QStringLiteral("car_33"));
        car_33->setMinimumSize(QSize(60, 60));
        car_33->setMaximumSize(QSize(60, 60));
        car_33->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_33);

        car_34 = new CarButton(layoutWidget);
        car_34->setObjectName(QStringLiteral("car_34"));
        car_34->setMinimumSize(QSize(60, 60));
        car_34->setMaximumSize(QSize(60, 60));
        car_34->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(car_34);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 23));
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
        time->setText(QString());
        weather->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\350\275\246\344\275\215", 0));
        blank->setText(QString());
        user->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246\346\227\266\351\227\264", 0));
        stopTime->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\201\234\350\275\246\350\264\271\347\224\250", 0));
        stopPrice->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\350\256\241\350\264\271\350\247\204\345\210\231", 0));
        label_3->setText(QString());
        arrowLeft->setText(QString());
        label_5->setText(QString());
        arrowRight->setText(QString());
        car_1->setText(QString());
        car_2->setText(QString());
        car_3->setText(QString());
        car_4->setText(QString());
        car_5->setText(QString());
        car_6->setText(QString());
        car_7->setText(QString());
        car_8->setText(QString());
        car_9->setText(QString());
        car_10->setText(QString());
        car_11->setText(QString());
        car_14->setText(QString());
        car_15->setText(QString());
        car_16->setText(QString());
        car_17->setText(QString());
        car_18->setText(QString());
        car_19->setText(QString());
        car_20->setText(QString());
        car_21->setText(QString());
        car_22->setText(QString());
        car_23->setText(QString());
        car_24->setText(QString());
        car_13->setText(QString());
        car_25->setText(QString());
        car_26->setText(QString());
        car_27->setText(QString());
        car_28->setText(QString());
        car_29->setText(QString());
        car_30->setText(QString());
        car_31->setText(QString());
        car_32->setText(QString());
        car_33->setText(QString());
        car_34->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
