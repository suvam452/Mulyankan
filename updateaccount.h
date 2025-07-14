#ifndef UPDATEACCOUNT_H
#define UPDATEACCOUNT_H

#include <QMainWindow>

namespace Ui {
class updateaccount;
}

class updateaccount : public QMainWindow
{
    Q_OBJECT

public:
    explicit updateaccount(QWidget *parent = nullptr);
    ~updateaccount();

private slots:
    void on_pushButton_update_clicked();

    void on_pushButton_home_clicked();

private:
    Ui::updateaccount *ui;
};

#endif // UPDATEACCOUNT_H
