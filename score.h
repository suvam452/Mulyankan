#ifndef SCORE_H
#define SCORE_H

#include <QMainWindow>

namespace Ui {
class score;
}

class score : public QMainWindow
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = nullptr);
    ~score();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_home_clicked();

private:
    Ui::score *ui;
};

#endif // SCORE_H
