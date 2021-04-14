#ifndef PRICEDIALOG_H
#define PRICEDIALOG_H

#include <QDialog>

namespace Ui {
class priceDialog;
}

class priceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit priceDialog(QWidget *parent = 0);
    ~priceDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::priceDialog *ui;
    // 获取计费规则
    void get_price_rule();
};

#endif // PRICEDIALOG_H
