#include "landingpage.h"
#include "ui_landingpage.h"
#include"mainwindow.h"
#include"contactus.h"
#include"profileinfo.h"
#include"score.h"
#include"score_teacher.h"
#include"student_info.h"
#include<QMessageBox>
#include"attendance_teacher.h"
#include"attendance.h"
#include"task_management.h"
#include"assignment.h"
landingpage::landingpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::landingpage)
{
    ui->setupUi(this);
}

landingpage::~landingpage()
{
    delete ui;
}

void landingpage::on_actionExit_triggered()
{
    QApplication::quit();
}


void landingpage::on_actionLogout_triggered()
{
    hide();
    MainWindow *logout= new MainWindow(this);
    logout->show();
}


void landingpage::on_actionContact_Us_triggered()
{
    hide();
    contactus *cont= new contactus(this);
    cont->show();
}


void landingpage::on_actionProfile_Info_triggered()
{
    hide();
    profileinfo *prof= new profileinfo(this);
    prof->show();
}


void landingpage::on_pushButton_scores_clicked()
{


    if (role.compare("Student", Qt::CaseInsensitive) == 0) {
        hide();
        score *scor=new score(this);
        scor->show();

    }
    else if (role.compare("Teacher", Qt::CaseInsensitive) == 0) {
        hide();
        score_teacher *scor1= new score_teacher(this);
        scor1->show();

    }




}


void landingpage::on_pushButton_studentinto_clicked()
{
    if (role.compare("Student", Qt::CaseInsensitive) == 0) {

        QMessageBox::warning(this, "Unauthorized Access", "Sorry Only Teachers and Faculty Members can access this information");

    }
    else if (role.compare("Teacher", Qt::CaseInsensitive) == 0) {
        hide();
        student_info *stud= new student_info(this);
        stud->show();

    }

}


void landingpage::on_pushButton_attendance_clicked()
{
    if (role.compare("Student", Qt::CaseInsensitive) == 0) {

        hide();
        attendance *stt= new attendance(this);
        stt->show();

    }
    else if (role.compare("Teacher", Qt::CaseInsensitive) == 0) {
        hide();
        attendance_teacher *stttt= new attendance_teacher(this);
        stttt->show();

    }
}


void landingpage::on_pushButton_task_management_clicked()
{
    hide();
    task_management *taskk=new task_management(this);
taskk->show();
}


void landingpage::on_pushButton_assignment_clicked()
{
    hide();
    assignment *assig= new assignment(this);
    assig->show();
}

