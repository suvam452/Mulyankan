#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <QMainWindow>

namespace Ui {
class attendance;
}

class attendance : public QMainWindow
{
    Q_OBJECT

public:
    explicit attendance(QWidget *parent = nullptr);
    ~attendance();

private slots:
    void on_pushButton_home_clicked();

    void on_pushButton_load_clicked();

private:
    Ui::attendance *ui;
};

#endif // ATTENDANCE_H
