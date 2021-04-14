#include "regdialog.h"
#include "ui_regdialog.h"

RegDialog::RegDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegDialog)
{
    ui->setupUi(this);
}

RegDialog::~RegDialog()
{
    delete ui;
}

void RegDialog::on_pushButton_clicked()
{
    if(checkReg())
    {
        // 获取用户注册信息
        // 构建 JSON 对象
        QJsonObject json;
        json.insert("name",ui->name->text());
        json.insert("pwd",ui->pwd->text());
        // JSON 数组对象
        QJsonArray qArray;
        QJsonObject q1,q2,q3;
        q1.insert(ui->comboBox_3->currentText(),ui->q1->text());
        qArray.append(q1);
        q2.insert(ui->comboBox_4->currentText(),ui->q2->text());
        qArray.append(q2);
        q3.insert(ui->comboBox_5->currentText(),ui->q3->text());
        qArray.append(q3);
        json.insert("question",qArray);
        // JSON 格式转换
        QByteArray data = QJsonDocument(json).toJson();
        // 拼接路径
        int num = getUserNum();
        QString path = QString("./data/userdata/%1.json").arg(num);
        // 新建一个空白的文件
        QFile myfile(path);
        myfile.open(QIODevice::ReadWrite|QIODevice::Truncate);
        // 写入数据
        myfile.write(data);
        myfile.close();
        // 提示
        QString tips = QString("注册成功，账号为%1").arg(num);
        QMessageBox::information(this,"success",tips);
        // 清空
        clearReg();
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"Warning","有必填项未填写");
    }
}

bool RegDialog::checkReg()
{
    int n = 0;
    //  用户名
    if(ui->name->text() != "")
        n++;
    // 密码
    if(ui->pwd->text() != "")
        n++;
    // 问题1
    if(ui->q1->text() != "")
        n++;
    // 问题2
    if(ui->q2->text() != "")
        n++;
    // 问题3
    if(ui->q3->text() != "")
        n++;

    if(n >= 5)
        return true;
    else
        return false;
}

int RegDialog::getUserNum()
{
    qsrand(time(NULL)); //产生随机数种子
    int num = qrand() % 100000000 + 100000;
    //定义QDir对象
    QDir mydir("./data/userdata");
    QStringList mylist = mydir.entryList();
    for(int i=0; i < mylist.size(); i++)
    {
        if(mylist.at(i)=="." || mylist.at(i)=="..")
            continue;
        // 判断随机数
        if(withoutExtension(mylist.at(i)).toInt() == num)
            //自己调用自己
            getUserNum();
    }

    return num;
}

inline QString RegDialog::withoutExtension(const QString &fileName)
{
    return fileName.left(fileName.lastIndexOf("."));
}

void RegDialog::clearReg()
{
    ui->name->setText("");
    ui->pwd->setText("");
    ui->q1->setText("");
    ui->q2->setText("");
    ui->q3->setText("");
}
