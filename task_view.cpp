#include "task_view.h"
#include "ui_task_view.h"
#include"mainwindow.h"
#include"task_management.h"
#include"QMessageBox"
task_view::task_view(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::task_view)
{
    ui->setupUi(this);

    MainWindow prof;

    prof.databaseopen();
    QSqlQuery qry;
    qry.prepare("select * from students where emailid='"+emailid+"'");
    if(qry.exec())


    {
        if (qry.next())
        {
            ui->label_task_view->setText(qry.value("tasks").toString());

        }
        else
        {
            ui->label_task_view->setText(qry.value("NO Records Found!").toString());

        }
    }
    else
    {
        qDebug() << "Query execution failed: " << qry.lastError().text();
    }
    prof.databaseclose();
}


task_view::~task_view()
{
    delete ui;
}

void task_view::on_pushButton_back_clicked()
{
    hide();
    task_management *back3= new task_management(this);
    back3->show();
}


void task_view::on_pushButton_delete_clicked()
{
    MainWindow del;
    del.databaseopen();
    QSqlQuery qry;
    qry.prepare("UPDATE students SET tasks = NULL WHERE emailid ='"+emailid+"'");
    if(qry.exec())
    {
        QMessageBox::warning(this,"DELETED","Task HAS BEEN SUCCESSFULLY DELETED!!");


    }
    else
    {
        QMessageBox::warning(this,"Error","qry.lastError().text()");
    }
}






