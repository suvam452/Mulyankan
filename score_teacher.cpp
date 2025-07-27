#include "score_teacher.h"
#include "ui_score_teacher.h"
#include"mainwindow.h"
#include"landingpage.h"
QString Reg_toshow;
score_teacher::score_teacher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::score_teacher)
{
    ui->setupUi(this);
}

score_teacher::~score_teacher()
{
    delete ui;
}

void score_teacher::on_pushButton_load_clicked()
{
    MainWindow load;

    QString subject=ui->comboBox_subject->currentText();
    if (subject.compare("EEEG 202", Qt::CaseInsensitive) == 0) {

        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Mcq,Lab_exams,First_internal,Second_internal,Total from scores_EEEG_202") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_scores->setModel(modal);

        load.databaseclose();
            //qDebug>>(modal->rowCount());
    }
    else if (subject.compare("EEEG 211", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Mcq,Lab_exams,First_internal,Second_internal,Total from scores_EEEG_211") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_scores->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("MATH 208", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Mcq,Lab_exams,First_internal,Second_internal,Total from scores_MATH_208") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_scores->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("MCSC 201", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Mcq,Lab_exams,First_internal,Second_internal,Total from scores_MCSC_201") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_scores->setModel(modal);

        load.databaseclose();

    }
    else if (subject.compare("COMP 202", Qt::CaseInsensitive) == 0) {
        QSqlQueryModel * modal=new QSqlQueryModel();
        load.databaseopen();
        QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
        qry->prepare ("select Mcq,Lab_exams,First_internal,Second_internal,Total from scores_COMP_202") ;
        qry->exec();
        modal ->setQuery(*qry);
        ui->tableView_scores->setModel(modal);

        load.databaseclose();

    }

}


void score_teacher::on_pushButton_2_clicked()
{
    Reg_toshow=ui->lineEdit_regno_toshow->text();
}


void score_teacher::on_pushButton_home_clicked()
{
    hide();
    landingpage *backk=new landingpage(this);
    backk->show();
}

