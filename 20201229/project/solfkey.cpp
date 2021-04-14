#include "solfkey.h"
#include "ui_solfkey.h"

solfkey::solfkey(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::solfkey)
{
    ui->setupUi(this);
}

solfkey::~solfkey()
{
    delete ui;
}
