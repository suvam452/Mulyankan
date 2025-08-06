#ifndef ATTENDANCE_ADD_EDIT_H
#define ATTENDANCE_ADD_EDIT_H

#include <QMainWindow>

namespace Ui {
class attendance_add_edit;
}

class attendance_add_edit : public QMainWindow
{
    Q_OBJECT

public:
    explicit attendance_add_edit(QWidget *parent = nullptr);
    ~attendance_add_edit();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_back_2_clicked();

private:
    Ui::attendance_add_edit *ui;
};

#endif // ATTENDANCE_ADD_EDIT_H
