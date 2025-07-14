#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QMessageBox>
QString emailid;
QString role;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/image/img/logo1.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio, Qt::SmoothTransformation));

    if(!databaseopen())
        ui->label_status2->setText("Failed to open database!!");
    else
        ui->label_status2->setText("CONNECTED!......");





}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    /*if(ui->checkBox_terms->isChecked()==1){

        emailid= ui->lineEdit_emailid->text();
        QString password = ui->lineEdit_password->text();


        if(!databaseopen())
        {
            qDebug()<<"Failed to Open Database!";
            return ;
        }
        databaseopen();
        QSqlQuery qry;

        qry.prepare("select * from students where emailid='"+emailid+"'and password='"+password+"'");
        if(qry.exec())
        {

            int count=0;
            while(qry.next())
            {
                count++;
            }
            if(count==1)
            {

                databaseclose();
                hide();
                land = new landingpage(this);
                land->show();
            }
            else
            {
                QMessageBox::warning(this,"Incorrect","Username and password is not correct..");
            }
        }

    }
    else
    {
        QMessageBox::warning(this,"Check","Please Accept the Terms and Conditions to proceed");
    }*/

    if (ui->checkBox_terms->isChecked()) {

        emailid = ui->lineEdit_emailid->text();
        QString password = ui->lineEdit_password->text();

        if (!databaseopen()) {
            qDebug() << "Failed to open database!";
            return;
        }

        QSqlQuery qry;
        qry.prepare("SELECT role FROM students WHERE emailid = :email AND password = :password");
        qry.bindValue(":email", emailid);
        qry.bindValue(":password", password);

        if (qry.exec()) {
            if (qry.next()) {
                role = qry.value("role").toString();
                qDebug() << "Login successful. Role: " << role;

                databaseclose();
                hide();
                land = new landingpage(this);
                land->show();
            } else {
                QMessageBox::warning(this, "Incorrect", "Username or password is incorrect.");
            }
        } else {
            QMessageBox::critical(this, "Error", qry.lastError().text());
        }

    } else {
        QMessageBox::warning(this, "Check", "Please accept the Terms and Conditions to proceed.");
    }


}



void MainWindow::on_pushButton_register_clicked()
{
    hide();
    reg1 = new registration(this);
    reg1->show();
}

