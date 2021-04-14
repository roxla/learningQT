#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mydialog = new Dialog();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNewWindow_triggered()
{
    mydialog->exec();
}
