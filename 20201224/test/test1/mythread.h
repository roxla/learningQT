#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QLabel>
#include <QList>

class mythread : public QThread
{
public:
    mythread();
    //重写父类的run方法
    void run();
    //定义公有方法获取主界面中的那个标签指针
    void getLabel(QLabel *lb);
private:
    QLabel *mylb; //保存传递过来的标签指针
    QList<QString> filelist; //存放jpg图片的路径名
};

#endif // MYTHREAD_H
