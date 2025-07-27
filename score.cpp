#include "score.h"
#include "ui_score.h"
#include"mainwindow.h"
#include"landingpage.h"

score::score(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::score)
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

            ui->label_name->setText(qry.value("name").toString());
            ui->label_regno->setText(qry.value("Reg_No").toString());
        }
        else
        {

            ui->label_name->setText(qry.value("NO Records Found!").toString());
            ui->label_regno->setText(qry.value("NO Records Found!").toString());
        }
    }
    else
    {
        qDebug() << "Query execution failed: " << qry.lastError().text();
    }
    prof.databaseclose();
}

score::~score()
{
    delete ui;
}

void score::on_pushButton_clicked()
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


void score::on_pushButton_home_clicked()
{
    hide();
    landingpage *home=new landingpage(this);
    home->show();
}

