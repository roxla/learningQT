#include "loginwin.h"
#include "ui_loginwin.h"
#include "mainwin.h"

Loginwin::Loginwin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Loginwin)
{
    ui->setupUi(this);
}

Loginwin::~Loginwin()
{
    delete ui;
}

void Loginwin::on_log_clicked()
{
    QString name = ui->lename->text();
    QString pwd = ui->lepwd->text();

    if(name == "gec" && pwd == "123")
    {
        Mainwin *newwin = new Mainwin(this);
        newwin->show();
        this->hide();
    }
}
