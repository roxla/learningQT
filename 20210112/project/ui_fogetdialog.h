/********************************************************************************
** Form generated from reading UI file 'fogetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOGETDIALOG_H
#define UI_FOGETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "solfkey.h"

QT_BEGIN_NAMESPACE

class Ui_FogetDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QSpacerItem *horizontalSpacer_3;
    solfkey *widget;

    void setupUi(QDialog *FogetDialog)
    {
        if (FogetDialog->objectName().isEmpty())
            FogetDialog->setObjectName(QStringLiteral("FogetDialog"));
        FogetDialog->resize(800, 480);
        FogetDialog->setMinimumSize(QSize(800, 480));
        FogetDialog->setMaximumSize(QSize(800, 480));
        gridLayout = new QGridLayout(FogetDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(FogetDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(FogetDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(80, 30));
        label_4->setMaximumSize(QSize(80, 30));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        lineEdit_4 = new QLineEdit(FogetDialog);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 30));
        lineEdit_4->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(lineEdit_4);

        label_5 = new QLabel(FogetDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(160, 0));
        label_5->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(FogetDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(80, 30));
        label_2->setMaximumSize(QSize(80, 30));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(FogetDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(lineEdit_2);

        label_6 = new QLabel(FogetDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(160, 0));
        label_6->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(FogetDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(80, 30));
        label_3->setMaximumSize(QSize(80, 30));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(FogetDialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));
        lineEdit_3->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(lineEdit_3);

        label_7 = new QLabel(FogetDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(160, 0));
        label_7->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ok = new QPushButton(FogetDialog);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setMinimumSize(QSize(80, 25));
        ok->setMaximumSize(QSize(80, 25));

        horizontalLayout->addWidget(ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(FogetDialog);
        close->setObjectName(QStringLiteral("close"));
        close->setMinimumSize(QSize(80, 25));
        close->setMaximumSize(QSize(80, 25));

        horizontalLayout->addWidget(close);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        widget = new solfkey(FogetDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(614, 254));

        verticalLayout->addWidget(widget);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(FogetDialog);

        QMetaObject::connectSlotsByName(FogetDialog);
    } // setupUi

    void retranslateUi(QDialog *FogetDialog)
    {
        FogetDialog->setWindowTitle(QApplication::translate("FogetDialog", "Dialog", 0));
        label->setText(QApplication::translate("FogetDialog", "\346\211\276\345\233\236\345\257\206\347\240\201", 0));
        label_4->setText(QApplication::translate("FogetDialog", "\347\224\250\346\210\267\345\220\215", 0));
        label_5->setText(QString());
        label_2->setText(QApplication::translate("FogetDialog", "\346\211\213\346\234\272\345\217\267", 0));
        label_6->setText(QString());
        label_3->setText(QApplication::translate("FogetDialog", "\346\226\260\345\257\206\347\240\201", 0));
        label_7->setText(QString());
        ok->setText(QApplication::translate("FogetDialog", "ok", 0));
        close->setText(QApplication::translate("FogetDialog", "close", 0));
    } // retranslateUi

};

namespace Ui {
    class FogetDialog: public Ui_FogetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOGETDIALOG_H
