#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::valueFun()
{

}

void Dialog::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button->text() == "OK")
    {

    }
    else if (button->text() == "Cancel")
    {

    }
}
