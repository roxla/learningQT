#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    le1 = new QLineEdit(this);
    le1->setGeometry(50,50,100,35);
    le1->setPlaceholderText("请输入用户名");

    le2 = new QLineEdit(this);
    le2->setGeometry(50,100,100,35);
    le2->setPlaceholderText("请输入密码");

    QPushButton *pb1 = new QPushButton(this);
    pb1->setGeometry(50,150,100,35);
    pb1->setText("Login");
    pb1->connect(pb1,SIGNAL(clicked(bool)),this,SLOT(on_pb1_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb1_clicked()
{
    QString test = this->le1->text();
    qDebug() << test;
}
