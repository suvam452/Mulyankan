#ifndef SCORE_TEACHER_H
#define SCORE_TEACHER_H

#include <QMainWindow>

namespace Ui {
class score_teacher;
}

class score_teacher : public QMainWindow
{
    Q_OBJECT

public:
    explicit score_teacher(QWidget *parent = nullptr);
    ~score_teacher();

private slots:
    void on_pushButton_load_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_home_clicked();

private:
    Ui::score_teacher *ui;
};

#endif // SCORE_TEACHER_H
