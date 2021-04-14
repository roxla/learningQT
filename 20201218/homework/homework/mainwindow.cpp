#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lightwindow.h"
#include "airwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->light,SIGNAL(clicked(bool)),this,SLOT(on_select_clicked()));
    connect(ui->airConn,SIGNAL(clicked(bool)),this,SLOT(on_select_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getattr(QString str1)
{
    ui->userName->setText(str1);
}

void MainWindow::on_back_clicked()
{
    this->parentWidget()->show();
    delete this;
}

void MainWindow::on_select_clicked()
{
    QPushButton *p = qobject_cast<QPushButton *>(sender());
    QString n = p->text();

    if(n == "空调")
    {
        AirWindow *newwin = new AirWindow(this);
        newwin->show();
        this->hide();
    }
    else if(n == "控灯")
    {
        LightWindow *newwin = new LightWindow(this);
        newwin->show();
        this->hide();
    }
}
