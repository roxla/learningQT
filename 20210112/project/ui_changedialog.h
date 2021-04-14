/********************************************************************************
** Form generated from reading UI file 'changedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDIALOG_H
#define UI_CHANGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_ChangeDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    solfkey *widget;

    void setupUi(QDialog *ChangeDialog)
    {
        if (ChangeDialog->objectName().isEmpty())
            ChangeDialog->setObjectName(QStringLiteral("ChangeDialog"));
        ChangeDialog->resize(800, 480);
        ChangeDialog->setMinimumSize(QSize(800, 480));
        ChangeDialog->setMaximumSize(QSize(800, 480));
        gridLayout = new QGridLayout(ChangeDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(ChangeDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(120, 30));
        label_8->setMaximumSize(QSize(120, 25));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_8);

        label_9 = new QLabel(ChangeDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 30));
        label_9->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(label_9);

        label_7 = new QLabel(ChangeDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(160, 0));
        label_7->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_4->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(ChangeDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(120, 30));
        label_4->setMaximumSize(QSize(120, 30));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_4);

        lineEdit = new QLineEdit(ChangeDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(lineEdit);

        label = new QLabel(ChangeDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(160, 0));
        label->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_3->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(ChangeDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(120, 30));
        label_5->setMaximumSize(QSize(120, 30));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(ChangeDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(lineEdit_2);

        label_3 = new QLabel(ChangeDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(160, 0));
        label_3->setMaximumSize(QSize(160, 16777215));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(ChangeDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(120, 30));
        label_6->setMaximumSize(QSize(120, 30));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_6);

        comboBox = new QComboBox(ChangeDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(70, 30));
        comboBox->setMaximumSize(QSize(70, 30));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(ChangeDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(160, 0));
        label_2->setMaximumSize(QSize(160, 16777215));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(ChangeDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(80, 25));
        pushButton->setMaximumSize(QSize(80, 25));

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(ChangeDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 25));
        pushButton_2->setMaximumSize(QSize(80, 25));

        horizontalLayout_5->addWidget(pushButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        widget = new solfkey(ChangeDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(614, 254));

        verticalLayout_2->addWidget(widget);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(ChangeDialog);

        QMetaObject::connectSlotsByName(ChangeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeDialog)
    {
        ChangeDialog->setWindowTitle(QApplication::translate("ChangeDialog", "Dialog", 0));
        label_8->setText(QApplication::translate("ChangeDialog", "\345\215\241\345\217\267", 0));
        label_9->setText(QString());
        label_7->setText(QString());
        label_4->setText(QApplication::translate("ChangeDialog", "\350\275\246\347\211\214\345\217\267", 0));
        label->setText(QString());
        label_5->setText(QApplication::translate("ChangeDialog", "\346\211\213\346\234\272\345\217\267", 0));
        label_3->setText(QString());
        label_6->setText(QApplication::translate("ChangeDialog", "\346\230\257\345\220\246\344\270\272\344\275\217\346\210\267", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ChangeDialog", "\345\220\246", 0)
         << QApplication::translate("ChangeDialog", "\346\230\257", 0)
        );
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("ChangeDialog", "\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("ChangeDialog", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangeDialog: public Ui_ChangeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDIALOG_H
