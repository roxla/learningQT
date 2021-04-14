#ifndef SENDDIALOG_H
#define SENDDIALOG_H

#include "myhead.h"

namespace Ui {
class SendDialog;
}

class SendDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SendDialog(QWidget *parent = 0);
    ~SendDialog();
    void getSend(QByteArray send);
    void getPic(QString path);

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    //自定义信号--》传递参数给主界面
    void sendData(QString);

    void sendPic(QByteArray);

private:
    Ui::SendDialog *ui;
};

#endif // SENDDIALOG_H
