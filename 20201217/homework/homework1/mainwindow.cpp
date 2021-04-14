#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    flag = false;
    f0 = false;
    temp = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
// 检查
void MainWindow::check_show()
{
    if(this->flag)
    {
        this->_show.clear();
        this->flag = false;
    }

    if(this->_show.length()>0)
    {
        if(this->_show.at(0)=='0')
        {
            if(!f0)
            {
                this->_show.clear();
            }
        }
    }
}

// 数字输入
// 0
void MainWindow::on_pushButton_13_clicked()
{
    if(this->flag)
    {
        this->_show.clear();
        this->flag = false;
    }

    QString temp = QString("%1%2").arg(this->num).arg(0);
    this->num = temp;

    this->_show += QString::number(0);
    ui->lineEdit->setText(this->_show);
}
// 1
void MainWindow::on_pushButton_4_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(1);
    this->num = temp;

    this->_show += QString::number(1);
    ui->lineEdit->setText(this->_show);
}
// 2
void MainWindow::on_pushButton_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(2);
    this->num = temp;

    this->_show += QString::number(2);
    ui->lineEdit->setText(this->_show);
}
// 3
void MainWindow::on_pushButton_9_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(3);
    this->num = temp;

    this->_show += QString::number(3);
    ui->lineEdit->setText(this->_show);
}
// 4
void MainWindow::on_pushButton_5_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(4);
    this->num = temp;

    this->_show += QString::number(4);
    ui->lineEdit->setText(this->_show);
}
// 5
void MainWindow::on_pushButton_10_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(5);
    this->num = temp;

    this->_show += QString::number(5);
    ui->lineEdit->setText(this->_show);
}
// 6
void MainWindow::on_pushButton_7_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(6);
    this->num = temp;

    this->_show += QString::number(6);
    ui->lineEdit->setText(this->_show);
}
// 7
void MainWindow::on_pushButton_12_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(7);
    this->num = temp;

    this->_show += QString::number(7);
    ui->lineEdit->setText(this->_show);
}
// 8
void MainWindow::on_pushButton_11_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(8);
    this->num = temp;

    this->_show += QString::number(8);
    ui->lineEdit->setText(this->_show);
}
// 9
void MainWindow::on_pushButton_8_clicked()
{
    this->check_show();

    QString temp = QString("%1%2").arg(this->num).arg(9);
    this->num = temp;
    this->temp = temp.toInt();

    this->_show += QString::number(9);
    ui->lineEdit->setText(this->_show);
}
// 运算符
// =
void MainWindow::on_pushButton_15_clicked()
{
    this->flag = true;
    this->f0 = false;

    this->_show += '=';
    this->_show += QString::number(temp);
    ui->lineEdit->setText(this->_show);
}
// +
void MainWindow::on_pushButton_6_clicked()
{
    if(!this->f0)
        this->f0 = true;

    int add;
    this->_show += '+';
    ui->lineEdit->setText(this->_show);

    add = this->num.toInt();
    this->temp += add;
    this->num.clear();
}
