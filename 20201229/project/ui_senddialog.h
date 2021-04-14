/********************************************************************************
** Form generated from reading UI file 'senddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDDIALOG_H
#define UI_SENDDIALOG_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SendDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SendDialog)
    {
        if (SendDialog->objectName().isEmpty())
            SendDialog->setObjectName(QStringLiteral("SendDialog"));
        SendDialog->resize(580, 517);
        gridLayout = new QGridLayout(SendDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(SendDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(listWidget);

        lineEdit = new QLineEdit(SendDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setMaximumSize(QSize(16777215, 30));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(SendDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(SendDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(200, 0));
        label->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(SendDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 23));
        pushButton->setMaximumSize(QSize(16777215, 23));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(SendDialog);

        QMetaObject::connectSlotsByName(SendDialog);
    } // setupUi

    void retranslateUi(QDialog *SendDialog)
    {
        SendDialog->setWindowTitle(QApplication::translate("SendDialog", "Dialog", 0));
        pushButton_2->setText(QApplication::translate("SendDialog", "\350\241\250\346\203\205", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("SendDialog", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class SendDialog: public Ui_SendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDDIALOG_H
