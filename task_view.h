#ifndef TASK_VIEW_H
#define TASK_VIEW_H

#include <QMainWindow>

namespace Ui {
class task_view;
}

class task_view : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_view(QWidget *parent = nullptr);
    ~task_view();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::task_view *ui;
};

#endif // TASK_VIEW_H
