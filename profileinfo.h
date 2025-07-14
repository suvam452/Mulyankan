#ifndef PROFILEINFO_H
#define PROFILEINFO_H

#include <QMainWindow>

namespace Ui {
class profileinfo;
}

class profileinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit profileinfo(QWidget *parent = nullptr);
    ~profileinfo();

private slots:
    void on_pushButton_update_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::profileinfo *ui;
};

#endif // PROFILEINFO_H
