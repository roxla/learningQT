#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int myreaddir(QString dirname);
    void play_video(int index);

private slots:
    void on_openbt_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_prevbt_clicked();

    void on_nextbt_clicked();

private:
    Ui::MainWindow *ui;
    QStringList fileList;
    QProcess *myprocess;
    int _index;
};

#endif // MAINWINDOW_H
