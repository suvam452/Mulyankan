#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include <QMainWindow>

namespace Ui {
class landingpage;
}

class landingpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit landingpage(QWidget *parent = nullptr);
    ~landingpage();

private slots:
    void on_actionExit_triggered();

    void on_actionLogout_triggered();

    void on_actionContact_Us_triggered();

    void on_actionProfile_Info_triggered();

    void on_pushButton_scores_clicked();

    void on_pushButton_studentinto_clicked();

private:
    Ui::landingpage *ui;
};

#endif // LANDINGPAGE_H
