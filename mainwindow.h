#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include"landingpage.h"
#include"registration.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase mydb2;


    bool databaseopen() {
        mydb2=QSqlDatabase::addDatabase("QSQLITE");
        mydb2.setDatabaseName("C:/Mulyankan/Mulyankan/mulyankan.db");
        if(!mydb2.open()){
            qDebug()<<("Failed to open database!!");
            return false;}
        else
            qDebug()<<("CONNECTED!......");
        return true;
    }
    void databaseclose(){
        mydb2.close();
        mydb2.removeDatabase(QSqlDatabase::defaultConnection);

    }









public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

    void on_pushButton_register_clicked();

private:
    Ui::MainWindow *ui;
    landingpage *land;
    registration *reg1;
};
extern QString emailid;
extern QString role;
#endif // MAINWINDOW_H
