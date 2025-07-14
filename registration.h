#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QMainWindow>

namespace Ui {
class registration;
}

class registration : public QMainWindow
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_pushButton_register_clicked();

    void on_pushButton_loginpage_clicked();

private:
    Ui::registration *ui;
};

#endif // REGISTRATION_H
