#ifndef KONGTIAO_H
#define KONGTIAO_H

#include <QMainWindow>

namespace Ui {
class kongtiao;
}

class kongtiao : public QMainWindow
{
    Q_OBJECT

public:
    explicit kongtiao(QWidget *parent = 0);
    ~kongtiao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::kongtiao *ui;
};

#endif // KONGTIAO_H
