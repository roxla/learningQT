#include "kongtiao.h"
#include "ui_kongtiao.h"

kongtiao::kongtiao(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kongtiao)
{
    ui->setupUi(this);
}

kongtiao::~kongtiao()
{
    delete ui;
}

void kongtiao::on_pushButton_clicked()
{
    this->parentWidget()->show();

    delete this;
}
