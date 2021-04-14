#ifndef AIRWINDOW_H
#define AIRWINDOW_H

#include <QMainWindow>

namespace Ui {
class AirWindow;
}

class AirWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AirWindow(QWidget *parent = 0);
    ~AirWindow();

private slots:
    void on_back_clicked();

    void on_switch_2_clicked();

    void on_temperature_valueChanged(int arg1);

private:
    Ui::AirWindow *ui;
    bool flag;
    QString on_color;
    QString off_color;
};

#endif // AIRWINDOW_H
