#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void getattr(QString str1);

private slots:
    void on_back_clicked();

    void on_select_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
