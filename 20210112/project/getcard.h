#ifndef GETCARD_H
#define GETCARD_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/select.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <strings.h>
#include <linux/input.h>
#include <QThread>

class GetCard : public QThread
{
    Q_OBJECT
public:
    GetCard();
    // 打开串口
    int open_serial();
    // 配置串口
    void init_tty();
    // 发送A命令
    int picc_request();
    // 发送B命令
    int picc_anticoll();
    //
    void run();

private:
    int fd;
    struct timeval timeout;

signals:
    //自定义信号--》传递参数给主界面
    void sendCard(unsigned int);

};

#endif // GETCARD_H
