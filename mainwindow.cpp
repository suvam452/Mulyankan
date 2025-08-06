#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QMessageBox>
#include"QInputDialog"
QString emailid;
QString role;
QString reg_no;
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
                reg_no=  qry.value("Reg_No").toString();
                qDebug() << "Login successful. ";

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


void MainWindow::on_pushButton_forgot_clicked()
{
    bool ok;
    QString emailid = QInputDialog::getText(
        this,
        tr("Forgot Password"),
        tr("Enter your Emailid:"),
        QLineEdit::Normal,
        QString(),
        &ok
        );



    if (ok && !emailid.isEmpty()) {

        QSqlQuery query;
        query.prepare("SELECT password FROM students WHERE emailid ='"+emailid+"'");

        if (query.exec()) {
            if (query.next()) {

                QString password = query.value(0).toString();


                QMessageBox::information(
                    this,
                    tr("Your Password"),
                    tr("Your password is: %1").arg(password)
                    );
            } else {

                QMessageBox::warning(
                    this,
                    tr("Error"),
                    tr("Emailid not found.")
                    );
            }
        } else {

            QMessageBox::critical(
                this,
                tr("Error"),
                tr("Failed to query the database: %1").arg(query.lastError().text())
                );
        }

    }
}

