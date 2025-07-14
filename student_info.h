#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <QMainWindow>

namespace Ui {
class student_info;
}

class student_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_info(QWidget *parent = nullptr);
    ~student_info();

private slots:
    void on_pushButton_home_clicked();

    void on_pushButton_load_clicked();

private:
    Ui::student_info *ui;
};

#endif // STUDENT_INFO_H
