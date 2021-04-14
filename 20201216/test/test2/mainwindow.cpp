#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //input
    QLineEdit *le1 = new QLineEdit(this);
    le1->setGeometry(50,50,150,20);
    le1->setEchoMode(QLineEdit::Password);
    le1->setMaxLength(10);
    le1->setPlaceholderText("test");
    le1->setStyleSheet("QLineEdit{font-size:12px}");
    //button
    QPushButton *pb1 = new QPushButton(this);
    pb1->setGeometry(50,100,150,30);
    pb1->setText("1234");
    pb1->setStyleSheet("QPushButton{background:rgba(255,0,0,0.5)}""QPushButton:hover{background-color:#00FF00}""QPushButton:pressed{background-color:#00FFFF}");

}

MainWindow::~MainWindow()
{
    delete ui;
}
