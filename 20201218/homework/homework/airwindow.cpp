#include "airwindow.h"
#include "ui_airwindow.h"
#include <qdebug.h>

AirWindow::AirWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AirWindow)
{
    ui->setupUi(this);
    flag = false;
    on_color = "AirWindow{border-image: url(:/new/prefix1/pic/1.jpg);}";
    off_color = "AirWindow{background-color: rgb(127, 127, 127);}";
    ui->temperature->setValue(22);
}

AirWindow::~AirWindow()
{
    delete ui;
}

void AirWindow::on_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

void AirWindow::on_switch_2_clicked()
{
    flag = !flag;
    if(flag)
    {
        ui->switch_2->setText("空调关");
        ui->lcdNumber->display(ui->temperature->value());
        this->setStyleSheet(on_color);
    }
    else
    {
        ui->switch_2->setText("空调开");
        ui->lcdNumber->display(0);
        this->setStyleSheet(off_color);
    }
}

void AirWindow::on_temperature_valueChanged(int arg1)
{
    if(flag)
        ui->lcdNumber->display(arg1);
}
