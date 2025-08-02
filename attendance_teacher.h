#ifndef ATTENDANCE_TEACHER_H
#define ATTENDANCE_TEACHER_H

#include <QMainWindow>

namespace Ui {
class attendance_teacher;
}

class attendance_teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit attendance_teacher(QWidget *parent = nullptr);
    ~attendance_teacher();

private slots:
    void on_pushButton_load_clicked();

    void on_pushButton_home_2_clicked();

    void on_pushButton_add_clicked();

private:
    Ui::attendance_teacher *ui;
};

#endif // ATTENDANCE_TEACHER_H
