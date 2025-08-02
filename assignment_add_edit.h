#ifndef ASSIGNMENT_ADD_EDIT_H
#define ASSIGNMENT_ADD_EDIT_H

#include <QMainWindow>

namespace Ui {
class assignment_add_edit;
}

class assignment_add_edit : public QMainWindow
{
    Q_OBJECT

public:
    explicit assignment_add_edit(QWidget *parent = nullptr);
    ~assignment_add_edit();

private slots:
    void on_pushButton_add_2_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::assignment_add_edit *ui;
};

#endif // ASSIGNMENT_ADD_EDIT_H
