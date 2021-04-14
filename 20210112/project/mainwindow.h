#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "camera.h"
#include "myhead.h"
#include "userwindow.h"
#include "pricedialog.h"
#include "getcard.h"
#include "carbutton.h"
#include "ortherwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // 定时器
    QTimer *weatherTimer;
    // 天气
    QNetworkAccessManager manager;

private slots:
    // 转到管理员登录界面
    void on_user_clicked();
    // 获取天气预报
    void get_weather();

    void send_request();

    void get_city_weather(QNetworkReply *reply);
    // 获取日期时间
    void get_date_time();
    // 获取摄像头图像
    void get_camera();
    // 计费规则弹窗
    void on_pushButton_clicked();

    void on_arrowRight_clicked();

    void on_arrowLeft_clicked();
    // 出车
    void check_out_car(unsigned int num);

private:
    Ui::MainWindow *ui;
    // 定义摄像头的对象
    Camera *camera;
    // 定义读卡对象
    GetCard *card;
    // 定时器
    QTimer *readTimer;
    QTimer *dateTimer;
    QTimer *camTimer;
    // 管理员登录界面
    UserWindow *usrWin;
    // 弹窗
    priceDialog *cashDia;
    //
    CarButton *carButton;
    //
    OrtherWindow *ortherwindow;
    // 停车位编号
    QString park;
    // 初始化数据库
    void car_database_init();
    // 数据库出车操作
    void car_out(QString park, unsigned int num);
};

#endif // MAINWINDOW_H
