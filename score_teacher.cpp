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

    QSqlQueryModel * modal=new QSqlQueryModel();
    load.databaseopen();
    QSqlQuery* qry=new QSqlQuery (load.mydb2) ;
    qry->prepare ("select Mcq,Lab_exams,First_internal,Second_internal,Total from scores where Reg_No='"+Reg_toshow+"' ") ;
    qry->exec();
    modal ->setQuery(*qry);
    ui->tableView_scores->setModel(modal);

    load.databaseclose();
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

