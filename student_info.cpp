#include "student_info.h"
#include "ui_student_info.h"
#include "landingpage.h"
#include"mainwindow.h"
student_info::student_info(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::student_info)
{
    ui->setupUi(this);
}

student_info::~student_info()
{
    delete ui;
}

void student_info::on_pushButton_home_clicked()
{
    hide();
    landingpage *back= new landingpage(this);
    back->show();
}


void student_info::on_pushButton_load_clicked()
{
    MainWindow load;

    QSqlQueryModel * modal=new QSqlQueryModel();
    load.databaseopen();
    QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
    qry->prepare ("select * from students") ;
    qry->exec();
    modal ->setQuery(*qry);
    ui->tableView_scores->setModel(modal);

    load.databaseclose();
}

