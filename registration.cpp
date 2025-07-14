#include "registration.h"
#include "ui_registration.h"
#include"mainwindow.h"
#include<QMessageBox>

registration::registration(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::registration)
{
    ui->setupUi(this);

    MainWindow reg;

    if(!reg.databaseopen())
        ui->label_status2->setText("Failed to open database!!");
    else
        ui->label_status2->setText("CONNECTED!......");
}

registration::~registration()
{
    delete ui;
}

void registration::on_pushButton_register_clicked()
{
    if(ui->checkBox_reg->isChecked()==1)
    {



        MainWindow reg;
        QString password = ui->lineEdit_regpassword->text();
        QString name = ui->lineEdit_regname->text();
        QString phno = ui->lineEdit_regphone->text();
        QString emailid = ui->lineEdit_regemail->text();
        QString role= ui->comboBox_role->currentText();
        QString grade=ui->comboBox_grade->currentText();
        QString reg_no=ui->lineEdit_regno->text();
        if(emailid.endsWith("@student.ku.edu.np")  )
        {
            if(password.length() >=8 )
            {
                if(phno.length() >= 10)
                {



                    if(!reg.databaseopen())
                    {
                        qDebug()<<"Failed to Open Database!";
                        return ;
                    }
                    reg.databaseopen();
                    QSqlQuery qry;
                    qry.prepare("INSERT INTO students(name,phno,emailid,password,role,grade,Reg_No) VALUES ('"+name+"','"+phno+"','"+emailid+"','"+password+"','"+role+"','"+grade+"','"+reg_no+"')");
                    if(qry.exec())
                    {
                        QMessageBox::information(this,"STATUS","Registered Successfully");
                        reg.databaseclose();
                        hide();
                        MainWindow *open = new MainWindow(this);
                        open->show();
                    }
                    else {
                        QMessageBox::critical(this,"Check",qry.lastError().text());
                    }
                }
                else
                {
                    QMessageBox::warning(this,"Warning","Phone No. not valid!");
                }
            }
            else
            {
                QMessageBox::warning(this,"Warning","Password must be atleast 8 letters long.");
            }

        }
        else
        {
            QMessageBox::warning(this,"Warning"," Not a valid email , Please try again with a valid EMail Thank you !");
        }
    }


    else {
        QMessageBox::warning(this,"Check","Please Accept the Terms and Conditions to proceed");
    }

}


void registration::on_pushButton_loginpage_clicked()
{
    hide();
    MainWindow *open = new MainWindow(this);
    open->show();
}

