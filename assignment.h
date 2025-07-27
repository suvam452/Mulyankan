#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

#include <QMainWindow>

namespace Ui {
class assignment;
}

class assignment : public QMainWindow
{
    Q_OBJECT

public:
    explicit assignment(QWidget *parent = nullptr);
    ~assignment();

private slots:
    void on_pushButton_load_clicked();

    void on_pushButton_home_clicked();

private:
    Ui::assignment *ui;
};

#endif // ASSIGNMENT_H
