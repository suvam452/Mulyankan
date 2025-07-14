#ifndef CONTACTUS_H
#define CONTACTUS_H

#include <QMainWindow>

namespace Ui {
class contactus;
}

class contactus : public QMainWindow
{
    Q_OBJECT

public:
    explicit contactus(QWidget *parent = nullptr);
    ~contactus();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_email_clicked();

private:
    Ui::contactus *ui;
};

#endif // CONTACTUS_H
