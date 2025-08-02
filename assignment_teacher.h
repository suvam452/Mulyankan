#ifndef ASSIGNMENT_TEACHER_H
#define ASSIGNMENT_TEACHER_H

#include <QMainWindow>

namespace Ui {
class assignment_teacher;
}

class assignment_teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit assignment_teacher(QWidget *parent = nullptr);
    ~assignment_teacher();

private slots:
    void on_pushButton_load_clicked();

    void on_pushButton_home_clicked();

    void on_pushButton_add_edit_clicked();

private:
    Ui::assignment_teacher *ui;
};

#endif // ASSIGNMENT_TEACHER_H
