#include "mainwin.h"
#include "ui_mainwin.h"
#include <QDebug>
#include "kongtiao.h"
#include "deng.h"


Mainwin::Mainwin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainwin)
{
    ui->setupUi(this);

    connect(ui->kongtiao,SIGNAL(clicked(bool)),this,SLOT(on_slect_clicked()));
    connect(ui->deng,SIGNAL(clicked(bool)),this,SLOT(on_slect_clicked()));
}

Mainwin::~Mainwin()
{
    delete ui;
}

void Mainwin::on_back_clicked()
{
    this->parentWidget()->show();

    delete this;
}

void Mainwin::on_slect_clicked()
{
    QPushButton *p = qobject_cast<QPushButton *>(sender());
    QString n = p->text();

    if(n == "空调")
    {
        kongtiao *newwin = new kongtiao(this);
        newwin->show();
        this->hide();
    }
    else if(n == "控灯")
    {
        deng *newwin = new deng(this);
        newwin->show();
        this->hide();
    }
}
