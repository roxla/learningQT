#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //获取当前系统中所有可以使用的摄像头信息
    QList<QCameraInfo> myinfo = QCameraInfo::availableCameras();
    //遍历容器打印摄像头信息，顺便摄像头信息存放到下拉框中
    for(int i = 0; i < myinfo.size(); i++)
    {

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
