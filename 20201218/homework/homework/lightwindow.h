#ifndef LIGHTWINDOW_H
#define LIGHTWINDOW_H

#include <QMainWindow>

namespace Ui {
class LightWindow;
}

class LightWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LightWindow(QWidget *parent = 0);
    ~LightWindow();

private slots:
    void on_back_clicked();

    void on_switch_2_clicked();

    void on_light_clicked();

private:
    Ui::LightWindow *ui;
    bool flag;
    QString on_color;
    QString off_color;
};

#endif // LIGHTWINDOW_H
