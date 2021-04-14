#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cam = new mycamera();
    cam->camera_init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ON_clicked()
{

}
