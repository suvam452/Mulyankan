#include "attendance_teacher.h"
#include "ui_attendance_teacher.h"
#include"mainwindow.h"
#include"landingpage.h"
attendance_teacher::attendance_teacher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::attendance_teacher)
{
    ui->setupUi(this);
}

attendance_teacher::~attendance_teacher()
{
    delete ui;
}

void attendance_teacher::on_pushButton_load_clicked()
{
MainWindow load;

    QSqlQueryModel * modal=new QSqlQueryModel();
    load.databaseopen();
    QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
    qry->prepare ("select * from attendance") ;
    qry->exec();
    modal ->setQuery(*qry);
    ui->tableView_attendance->setModel(modal);

    load.databaseclose();
}


void attendance_teacher::on_pushButton_home_2_clicked()
{
    hide();
    landingpage *backkk= new landingpage(this);
    backkk->show();
}

