#include "attendance.h"
#include "ui_attendance.h"
#include"landingpage.h"
#include "mainwindow.h"
attendance::attendance(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::attendance)
{
    ui->setupUi(this);
}

attendance::~attendance()
{
    delete ui;
}

void attendance::on_pushButton_home_clicked()
{
    hide();
    landingpage *backk1= new landingpage(this);
    backk1->show();
}


void attendance::on_pushButton_load_clicked()
{
    MainWindow load;

    QSqlQueryModel * modal=new QSqlQueryModel();
    load.databaseopen();
    QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
    qry->prepare ("select * from attendance where Reg_No='"+reg_no+"'") ;
    qry->exec();
    modal ->setQuery(*qry);
    ui->tableView_attendance->setModel(modal);

    load.databaseclose();
}

