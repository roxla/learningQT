#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void linkFun();

    void recvclient(); //接收客户端信息的槽函数

    void rmclient();  //删除断开连接的客户端

private:
    Ui::MainWindow *ui;
    QString allclientmsg; //用来保存目前连接成功的所有客户端信息的
    QTcpServer myserver;
    QTcpSocket *p;
    QList<QTcpSocket *> mylist; //存放所有连接成功的客户端套接字指针
    int i;
};

#endif // MAINWINDOW_H
