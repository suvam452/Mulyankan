#include "updateaccount.h"
#include "ui_updateaccount.h"
#include "mainwindow.h"
#include"landingpage.h"
#include<QMessageBox>
updateaccount::updateaccount(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::updateaccount)
{
    ui->setupUi(this);
}

updateaccount::~updateaccount()
{
    delete ui;
}

void updateaccount::on_pushButton_update_clicked()
{
    MainWindow mainup;
    QString emailid1 = ui->lineEdit_updtemail->text();
    QString password = ui->lineEdit_updtpassword->text();
    QString name = ui->lineEdit_updtname->text();
    QString phno = ui->lineEdit_updtphone->text();
    QString grade=ui->lineEdit_updtgrade->text();
    QString reg_no=ui->lineEdit_updtregno->text();

    if(!mainup.databaseopen())
    {
        qDebug()<<"Failed to Open Database!";
        return ;
    }
    mainup.databaseopen();
    QSqlQuery qry;

    qry.prepare("UPDATE students SET name = '"+name+"', phno = '"+phno+"', emailid = '"+emailid1+"', password = '"+password+"' , grade= '"+grade+", Reg_No ='"+reg_no+" WHERE emailid = '"+emailid+"'");
    if(qry.exec())
    {

        mainup.databaseclose();
        QMessageBox::information(this,"UPDATED","Your INFO is Updated Thank You!");

    }
    else {
        QMessageBox::critical(this,"Check",qry.lastError().text());
    }
}


void updateaccount::on_pushButton_home_clicked()
{
    hide();
    landingpage *back1=new landingpage(this);
    back1->show();

}

