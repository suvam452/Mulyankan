#ifndef SCORE_ADD_EDIT_H
#define SCORE_ADD_EDIT_H

#include <QMainWindow>

namespace Ui {
class score_add_edit;
}

class score_add_edit : public QMainWindow
{
    Q_OBJECT

public:
    explicit score_add_edit(QWidget *parent = nullptr);
    ~score_add_edit();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::score_add_edit *ui;
};

#endif // SCORE_ADD_EDIT_H
