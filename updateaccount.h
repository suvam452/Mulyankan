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

private:
    Ui::updateaccount *ui;
};

#endif // UPDATEACCOUNT_H
