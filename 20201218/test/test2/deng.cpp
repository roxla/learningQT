#include "deng.h"
#include "ui_deng.h"

deng::deng(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::deng)
{
    ui->setupUi(this);
}

deng::~deng()
{
    delete ui;
}

void deng::on_pushButton_clicked()
{
    this->parentWidget()->show();

    delete this;
}
