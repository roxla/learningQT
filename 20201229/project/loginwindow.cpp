#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    // 软键盘
    keyboard = false;
    ui->widget->hide();
    // 注册弹窗
    regdialog = new RegDialog();
    // 忘记密码弹窗
    forgetdialog = new ForgetDialog();
    // 读取登录信息
    // 密码输错次数
    l_count = 0;
    // 判断是否记住密码
    isRemember = false;
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::readLogin()
{
    QString path = QString("./data/logindata/%1.json").arg(ui->comboBox->currentText());
    // 打开文件
    QFile myfile(path);
    if(myfile.open(QIODevice::ReadOnly))
    {
        int remember = 0, autolg = 0;
        QString name,pwd;

        //读取 JSON 数据
        QByteArray buf = myfile.readAll();
        //定义json解析错误对象
        QJsonParseError err;
        //把得到的 JSON 标准化存储
        QJsonDocument mydoc = QJsonDocument::fromJson(buf,&err);
        //判断要解析的 JSON 数据是否合法
        if(!mydoc.isNull() &&(err.error == QJsonParseError::NoError))
        {
            if (mydoc.isObject())
            {
                // 解析
                QJsonObject obj = mydoc.object();
                if (obj.contains("pwd"))
                {
                    QJsonValue value = obj.value("pwd");
                    if (value.isString())
                    {
                        pwd = value.toString();
                    }
                }
                if (obj.contains("name"))
                {
                    QJsonValue value = obj.value("name");
                    if (value.isString())
                    {
                        name = value.toString();
                    }
                }
                if (obj.contains("login"))
                {
                    QJsonValue value = obj.value("login");
                    if (value.isArray())
                    {
                        QJsonArray array = value.toArray();
                        autolg = QJsonValue(array.at(0)).toInt();
                        remember = QJsonValue(array.at(1)).toInt();
                    }
                }
            }
        }
        if(remember)
        {
            ui->remember->setChecked(true);
            ui->lineEdit->setText(pwd);
            isRemember = true;
            if(autolg)
            {
                ui->autologin->setChecked(true);
                newWin = new MainWindow(this);
                // 传递用户名
                newWin->getName(name);
                // 显示主界面
                newWin->show();
                // 登录界面隐藏
                this->hide();
            }
            else
            {
                ui->autologin->setChecked(false);
            }
        }
        else
        {
            ui->remember->setChecked(false);
            ui->autologin->setChecked(false);
            ui->lineEdit->setText("");
            isRemember = false;
        }
    }
}

void LoginWindow::checkLogin(QString name)
{
    QString path = QString("./data/logindata/%1.json").arg(ui->comboBox->currentText());
    // 构建 JSON 对象
    QJsonObject json;
    json.insert("name",name);
    json.insert("pwd",ui->lineEdit->text());
    // JSON 数组对象
    QJsonArray Array;
    if(ui->autologin->isChecked())
        Array.append(1);
    else
        Array.append(0);
    if(ui->remember->isChecked())
        Array.append(1);
    else
        Array.append(0);
    json.insert("login",Array);
    // JSON 格式转换
    QByteArray data = QJsonDocument(json).toJson();
    // 新建一个空白的文件
    QFile myfile(path);
    myfile.open(QIODevice::ReadWrite|QIODevice::Truncate);
    // 写入数据
    myfile.write(data);
    myfile.close();
}

void LoginWindow::on_pushButton_3_clicked()
{
    keyboard = !keyboard;
    if(keyboard)
        ui->widget->show();
    else
        ui->widget->hide();
}
// 注册
void LoginWindow::on_pushButton_clicked()
{
    regdialog->exec();
}
// 登录
void LoginWindow::on_pushButton_2_clicked()
{
    QString name,pwd;
    // 判断账号
    QString path = QString("./data/userdata/%1.json").arg(ui->comboBox->currentText());
    // 打开文件
    QFile myfile(path);
    if(myfile.open(QIODevice::ReadOnly))
    {
        //读取 JSON 数据
        QByteArray buf = myfile.readAll();
        //定义json解析错误对象
        QJsonParseError err;
        //把得到的 JSON 标准化存储
        QJsonDocument mydoc = QJsonDocument::fromJson(buf,&err);
        //判断要解析的 JSON 数据是否合法
        if(!mydoc.isNull() &&(err.error == QJsonParseError::NoError))
        {
            if (mydoc.isObject())
            {
                // 解析
                QJsonObject obj = mydoc.object();
                if (obj.contains("pwd"))
                {
                    QJsonValue value = obj.value("pwd");
                    if (value.isString())
                    {
                        pwd = value.toString();
                    }
                }
                if (obj.contains("name"))
                {
                    QJsonValue value = obj.value("name");
                    if (value.isString())
                    {
                        name = value.toString();
                    }
                }
            }
        }
        else
        {
            qDebug()<<"json数据有问题: "<<err.errorString();
            return;
        }
    }
    else
    {
        QMessageBox::warning(this,"Warning","没有找到该账号，请先注册");
        return;
    }
    // 判断密码
    if(pwd == ui->lineEdit->text())
    {
        checkLogin(name);
        newWin = new MainWindow(this);
        // 传递用户名
        newWin->getName(name);
        // 显示主界面
        newWin->show();
        // 登录界面隐藏
        this->hide();
        // 清除密码
        if(!isRemember)
            ui->lineEdit->clear();
    }
    else
    {
        l_count++;
        if(l_count>5)
        {
            QMessageBox::critical(this,"error","错误次数过多，请去修改密码");
        }
        else
        {
            QString tip = QString("密码错误,错误次数%1").arg(l_count);
            QMessageBox::warning(this,"Warning",tip);
        }
    }
}
// 自动登录 & 记住密码
void LoginWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(l_count)
        l_count = 0;
    readLogin();
}
// 忘记密码
void LoginWindow::on_pushButton_4_clicked()
{
    forgetdialog->show();
    l_count = 0;
}

void LoginWindow::on_autologin_clicked(bool checked)
{
    if(checked)
        ui->remember->setChecked(true);
}

void LoginWindow::on_remember_clicked(bool checked)
{
    if(!checked)
        ui->autologin->setChecked(false);
}
