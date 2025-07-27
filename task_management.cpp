#include "task_management.h"
#include "ui_task_management.h"
#include"landingpage.h"
#include"mainwindow.h"
#include<QMessageBox>
#include"task_view.h"
task_management::task_management(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::task_management)
{
    ui->setupUi(this);
}

task_management::~task_management()
{
    delete ui;
}

void task_management::on_pushButton_back_clicked()
{
    hide();
    landingpage *back22= new landingpage(this);
    back22->show();
}


void task_management::on_pushButton_saveTask_clicked()
{
    MainWindow taskss;
    QString save_tasks=ui->textEdit_task->toPlainText();
    taskss.databaseopen();
    QSqlQuery qry;

    qry.prepare("UPDATE students SET tasks = :tasks WHERE emailid = :emailid");
    qry.bindValue(":tasks", save_tasks);
    qry.bindValue(":emailid", emailid);


    if(qry.exec())
    {

        taskss.databaseclose();
        QMessageBox::information(this,"UPDATED","Your task has been Updated Thank You!");

    }
    else {
        QMessageBox::critical(this,"Check",qry.lastError().text());
    }
}




void task_management::on_pushButton_show_task_clicked()
{
    hide();
    task_view *proc= new task_view(this);
    proc->show();

}

