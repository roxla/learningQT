#include "forgetdialog.h"
#include "ui_forgetdialog.h"

ForgetDialog::ForgetDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgetDialog)
{
    ui->setupUi(this);
}

ForgetDialog::~ForgetDialog()
{
    delete ui;
}

void ForgetDialog::on_pushButton_clicked()
{
    if(checkQuestion())
    {
        QByteArray buf = changePwd();
        QString path = QString("./data/userdata/%1.json").arg(ui->account->text());
        // 打开文件
        QFile myfile(path);
        myfile.open(QIODevice::ReadWrite|QIODevice::Truncate);
        // 写入数据
        myfile.write(buf);
        myfile.close();
        // 提示
        QMessageBox::information(this,"success","修改成功");
        this->close();
    }
}

bool ForgetDialog::checkQuestion()
{
    QString question;
    // 判断
    QString path = QString("./data/userdata/%1.json").arg(ui->account->text());
    // 打开文件
    QFile myfile(path);
    if(myfile.open(QIODevice::ReadOnly))
    {
        //读取 JSON 数据
        QByteArray buf = myfile.readAll();
        myfile.close();
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
                if (obj.contains("question"))
                {
                    QJsonValue value = obj.value("question");
                    if (value.isArray())
                    {
                        QJsonArray array = value.toArray();
                        int nSize = array.size();
                        for (int i = 0; i < nSize; ++i)
                        {
                            QJsonValue q = array.at(i);
                            if(q.isObject())
                            {
                                QJsonObject qObject = q.toObject();
                                if(qObject.contains(ui->comboBox->currentText()))
                                {
                                    QJsonValue qValue = qObject.value(ui->comboBox->currentText());
                                    question = qValue.toString();
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            qDebug()<< "json数据有问题: "<<err.errorString();
            return false;
        }
    }
    else
    {
        QMessageBox::warning(this,"Warning","没有找到该账号，请先注册");
        return false;
    }
    if(question == "" || question != ui->question->text())
    {
        QMessageBox::warning(this,"Warning","密保问题验证错误");
        return false;
    }

    return true;
}

QByteArray ForgetDialog::changePwd()
{
    QJsonObject json;

    QString path = QString("./data/userdata/%1.json").arg(ui->account->text());
    // 打开文件
    QFile myfile(path);
    myfile.open(QIODevice::ReadOnly);
    //读取 JSON 数据
    QByteArray buf = myfile.readAll();
    myfile.close();
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
            json = mydoc.object();
            if (json.contains("pwd"))
            {
                json.insert("pwd",ui->pwd->text());
            }
        }
    }
    else
    {
        return NULL;
    }
    QByteArray data = QJsonDocument(json).toJson();

    return data;
}
