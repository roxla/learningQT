#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread=new mythread();
    //把主窗口的标签作为参数传递给线程对象
    thread->getLabel(ui->label);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//开启相册
void MainWindow::on_pushButton_clicked()
{
    thread->start();
}
//关闭相册
void MainWindow::on_pushButton_2_clicked()
{
    thread->terminate();
}
