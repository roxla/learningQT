#include "mythread.h"
#include <QDir>
mythread::mythread()
{
   //遍历目录存放图片到容器中
   QDir mydir("C:/Users/gec/Desktop/share");
   QStringList mylist=mydir.entryList();
   for(int i=0; i<mylist.size(); i++)
   {
       QString allpath=QString("C:/Users/gec/Desktop/share/%2").arg(mylist.at(i));
       QFileInfo info(allpath);
       //判断是否是jpg文件
       if(info.suffix()=="jpg")
       {
           //存放到容器中
           filelist.append(allpath);
       }
   }
}
//线程的任务函数
void mythread::run()
{
    while(1)
    {
        //在标签上显示不同图片
        for(int i=0; i<filelist.size(); i++)
        {
            QPixmap pix(filelist.at(i));
            //调整绘图设备的大小，让它去适应你的标签
            pix.scaled(mylb->width(),mylb->height());
            mylb->setPixmap(pix);
            QThread::sleep(1);
        }
    }
}

void mythread::getLabel(QLabel *lb)
{
    mylb=lb;
}
