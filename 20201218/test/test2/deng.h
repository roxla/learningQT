#ifndef DENG_H
#define DENG_H

#include <QMainWindow>

namespace Ui {
class deng;
}

class deng : public QMainWindow
{
    Q_OBJECT

public:
    explicit deng(QWidget *parent = 0);
    ~deng();

private slots:
    void on_pushButton_clicked();

private:
    Ui::deng *ui;
};

#endif // DENG_H
