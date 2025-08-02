#include "assignment_teacher.h"
#include "ui_assignment_teacher.h"
#include"mainwindow.h"
#include"landingpage.h"
#include"assignment_add_edit.h"
assignment_teacher::assignment_teacher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::assignment_teacher)
{
    ui->setupUi(this);
}

assignment_teacher::~assignment_teacher()
{
    delete ui;
}

void assignment_teacher::on_pushButton_load_clicked()
{

    MainWindow load;

    QString subject=ui->comboBox_subject->currentText();
    if (subject.compare("EEEG 202", Qt::CaseInsensitive) == 0) {

        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select * from assignments_EEEG_202") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();
            //qDebug>>(modal->rowCount());
    }
    else if (subject.compare("EEEG 211", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select * from assignments_EEEG_211") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("MATH 208", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select * from assignments_MATH_208") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("MCSC 201", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select * from assignments_MCSC_201") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("COMP 202", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select * from assignments_COMP_202") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
}


void assignment_teacher::on_pushButton_home_clicked()
{
    hide();
    landingpage *paxadi= new landingpage(this);
    paxadi->show();
}


void assignment_teacher::on_pushButton_add_edit_clicked()
{
    hide();
    assignment_add_edit *agadi = new assignment_add_edit(this);
    agadi->show();

}

