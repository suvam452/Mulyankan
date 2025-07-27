#ifndef TASK_MANAGEMENT_H
#define TASK_MANAGEMENT_H

#include <QMainWindow>

namespace Ui {
class task_management;
}

class task_management : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_management(QWidget *parent = nullptr);
    ~task_management();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_saveTask_clicked();

    void on_pushButton_show_task_clicked();

private:
    Ui::task_management *ui;
};

#endif // TASK_MANAGEMENT_H
