#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "test: " << event->modifiers();
    qDebug() << "keyName: " << event->text() << " keyValue: " << event->key();
    // ctrl+字母A（先ctrl后A触发，先A后ctrl不可触发）
    if ((event->modifiers() == Qt::ControlModifier) && (event->key() == Qt::Key_A))
    {
        qDebug() << "ctrl+A";
    }
}


