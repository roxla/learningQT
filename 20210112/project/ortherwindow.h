#ifndef ORTHERWINDOW_H
#define ORTHERWINDOW_H

#include <QMainWindow>
#include "myhead.h"
#include "carbutton.h"

namespace Ui {
class OrtherWindow;
}

class OrtherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrtherWindow(QWidget *parent = 0);
    ~OrtherWindow();

private slots:
    void on_arrowRight_clicked();

    void on_arrowLeft_clicked();

private:
    Ui::OrtherWindow *ui;
    void SearchControl(QString objName);
    void car_database_init();
};
#endif // ORTHERWINDOW_H
