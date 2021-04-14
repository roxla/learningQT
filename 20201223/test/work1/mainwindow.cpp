#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QListWidgetItem>
#include <QFile>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _index = -1;
    //初始化进程对象
    myprocess = new QProcess();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//封装一个递归函数，递归读取目录
int MainWindow::myreaddir(QString dirname)
{
    //定义QDir对象
    QDir mydir(dirname);

    //遍历顶层目录
    QStringList mylist = mydir.entryList();
    for(int i=0; i<mylist.size(); i++)
    {
        if(mylist.at(i) == "." || mylist.at(i) == "..")
            continue;
        //拼接得到绝对路径--》方便判断文件类型
        QString allpath = QString("%1/%2").arg(dirname).arg(mylist.at(i));
        QFileInfo info(allpath);
        //判断文件类型
        if(info.isDir()) //目录
        {
            //自己调用自己
            myreaddir(allpath);
        }
        else //普通文件
        {
            // 判断后缀名
            if(info.suffix() == "mp4" || info.suffix() == "avi" || info.suffix() == "flac" || info.suffix() == "mp3")
            {
                //在listWidget中显示
                QListWidgetItem *item1 = new QListWidgetItem(allpath);
                ui->listWidget->addItem(item1);
                fileList.append(allpath);
            }
        }

    }

}
//打开目录
void MainWindow::on_openbt_clicked()
{
    ui->listWidget->clear();
    fileList.clear();

    QString dirname = QFileDialog::getExistingDirectory(this);

    //调用你刚才封装的递归函数
    myreaddir(dirname);
}

void MainWindow::play_video(int index)
{
    if(myprocess->state() == QProcess::Running)
    {
        myprocess->kill();
        myprocess->waitForFinished();
    }
    QString cmd = QString("D:/mplayer/windows-mplayer/mplayer.exe  -slave -quiet -wid %1 %2").arg(ui->label->winId()).arg(fileList[index]);
    myprocess->start(cmd);
}

void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    _index = index.row();
    play_video(_index);
}
// 上一个
void MainWindow::on_prevbt_clicked()
{
    if(fileList.size() <= 0)
        return;

    int max = fileList.size();
    _index -= 1;
    if(_index < 0)
        _index = max - 1;

    ui->listWidget->setCurrentRow(_index,QItemSelectionModel::ClearAndSelect);

    play_video(_index);
}
// 下一个
void MainWindow::on_nextbt_clicked()
{
    if(fileList.size() <= 0)
        return;

    int max = fileList.size();
    _index += 1;
    if(_index >= max)
        _index = 0;

    ui->listWidget->setCurrentRow(_index,QItemSelectionModel::ClearAndSelect);

    play_video(_index);
}
