#include "profileinfo.h"
#include "ui_profileinfo.h"
#include"updateaccount.h"
#include"mainwindow.h"
#include<QMessageBox>
profileinfo::profileinfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::profileinfo)
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
            ui->label_emailid->setText(qry.value("emailid").toString());
            ui->label_password->setText(qry.value("password").toString());
            ui->label_name->setText(qry.value("name").toString());
            ui->label_phno->setText(qry.value("phno").toString());
            ui->label_grade->setText(qry.value("grade").toString());
            ui->label_role->setText(qry.value("role").toString());
            ui->label_reg_no->setText(qry.value("Reg_No").toString());
        }
        else
        {
            ui->label_emailid->setText(qry.value("NO Records Found!").toString());
            ui->label_password->setText(qry.value("NO Records Found!").toString());
            ui->label_name->setText(qry.value("NO Records Found!").toString());
            ui->label_phno->setText(qry.value("NO Records Found!").toString());
            ui->label_grade->setText(qry.value("NO Records Found!").toString());
            ui->label_role->setText(qry.value("NO Records Found!").toString());
            ui->label_reg_no->setText(qry.value("NO Records Found!").toString());
        }
    }
    else
    {
        qDebug() << "Query execution failed: " << qry.lastError().text();
    }
    prof.databaseclose();
}

profileinfo::~profileinfo()
{
    delete ui;
}

void profileinfo::on_pushButton_update_clicked()
{
    hide();
    updateaccount *updt= new updateaccount(this);
    updt->show();
}


void profileinfo::on_pushButton_delete_clicked()
{
    MainWindow del;
    del.databaseopen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM students WHERE emailid ='"+emailid+"' ");
    if(qry.exec())
    {
        QMessageBox::warning(this,"ACCOUNT DELETED","YOUR ACCOUNT HAS BEEN SUCCESSFULLY DELETED!!");
        hide();
        MainWindow *open = new MainWindow(this);
        open->show();
        del.databaseclose();

    }
    else
    {
        qDebug() << "Query execution failed: " << qry.lastError().text();
    }
}

