#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pb1_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit *le1;
    QLineEdit *le2;
};

#endif // MAINWINDOW_H
