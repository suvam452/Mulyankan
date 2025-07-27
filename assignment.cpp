#include "assignment.h"
#include "ui_assignment.h"
#include"mainwindow.h"
#include"landingpage.h"

assignment::assignment(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::assignment)
{
    ui->setupUi(this);
}

assignment::~assignment()
{
    delete ui;
}

void assignment::on_pushButton_load_clicked()
{
    MainWindow load;
    QString subject=ui->comboBox_subject->currentText();
    if (subject.compare("EEEG 202", Qt::CaseInsensitive) == 0) {

        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Assignment_1,Assignment_2,Assignment_3 ,Assignment_4 ,Assignment_5 from assignments_EEEG_202") ;
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
        qry->prepare ("select Assignment_1,Assignment_2,Assignment_3 ,Assignment_4 ,Assignment_5 from assignments_EEEG_211") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("MATH 208", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Assignment_1,Assignment_2,Assignment_3 ,Assignment_4 ,Assignment_5 from assignments_MATH_208") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("MCSC 201", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Assignment_1,Assignment_2,Assignment_3 ,Assignment_4 ,Assignment_5 from assignments_MCSC_201") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("COMP 202", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Assignment_1,Assignment_2,Assignment_3 ,Assignment_4 ,Assignment_5 from assignments_COMP_202") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_assignment->setModel(modal);

        load.databaseclose();

    }
}


void assignment::on_pushButton_home_clicked()
{
    hide();
    landingpage *back4= new landingpage(this);
    back4->show();
}

