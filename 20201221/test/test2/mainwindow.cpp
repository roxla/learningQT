#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QDate>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mytimer = new QTimer(this);
    mytimer->setInterval(1000);
    connect(mytimer,SIGNAL(timeout()),this,SLOT(fun()));
    mytimer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fun()
{
    QDate mydate = QDate::currentDate();

    QTime mytime = QTime::currentTime();

}
