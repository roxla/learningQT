#include "lightwindow.h"
#include "ui_lightwindow.h"
#include <qdebug.h>
#include <QColorDialog>

LightWindow::LightWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LightWindow)
{
    ui->setupUi(this);
    flag = false;
    on_color = "border-radius: 40px;"
               "border: 1px solid black;"
               "background-color:rgb(255,0,0);";
    off_color = "border-radius: 40px;"
                "border: 1px solid black;"
                "background-color:rgb(127,127,127);";
}

LightWindow::~LightWindow()
{
    delete ui;
}

void LightWindow::on_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

void LightWindow::on_switch_2_clicked()
{
    flag = !flag;
    if(flag)
    {
        ui->switch_2->setText("电灯关");
        ui->light->setStyleSheet(on_color);
    }
    else
    {
        ui->switch_2->setText("电灯开");
        ui->light->setStyleSheet(off_color);
    }
}

void LightWindow::on_light_clicked()
{
    QString rgb;
    QColor color();
    QColor ret = QColorDialog::getColor(Qt::white,this);
    if(ret.isValid())
    {
        rgb = QString("rgb(%1,%2,%3);").arg(ret.red()).arg(ret.green()).arg(ret.blue());
        on_color.replace(on_color.indexOf("rgb"),on_color.size(),rgb);
    }
}
