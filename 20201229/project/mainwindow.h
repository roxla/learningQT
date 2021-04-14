#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myhead.h"
#include "senddialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void getName(QString name);

private slots:
    void on_logout_clicked();

    void recvFun();

    void on_link_clicked();

    void on_pushButton_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void sendServer(QString data);

    void sendPicServer(QByteArray buf);

    void getTime();

    void getWeather(QNetworkReply*);

    void sendRequest();

private:
    Ui::MainWindow *ui;
    QString userName;
    QTcpSocket mysock;
    QString otherclientmsg;
    // 端口号
    int port;
    SendDialog *sendDialog;
    // 定时器
    QTimer *mytimer;
    // 天气
    QNetworkAccessManager manager;
};

#endif // MAINWINDOW_H
