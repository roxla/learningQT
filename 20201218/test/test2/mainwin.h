#ifndef MAINWIN_H
#define MAINWIN_H

#include <QMainWindow>

namespace Ui {
class Mainwin;
}

class Mainwin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mainwin(QWidget *parent = 0);
    ~Mainwin();

private slots:
    void on_back_clicked();
    void on_slect_clicked();

private:
    Ui::Mainwin *ui;
};

#endif // MAINWIN_H
