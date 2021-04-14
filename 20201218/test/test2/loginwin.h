#ifndef LOGINWIN_H
#define LOGINWIN_H

#include <QMainWindow>

namespace Ui {
class Loginwin;
}

class Loginwin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginwin(QWidget *parent = 0);
    ~Loginwin();

private slots:
    void on_log_clicked();

private:
    Ui::Loginwin *ui;
};

#endif // LOGINWIN_H
