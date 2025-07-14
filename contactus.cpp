#include "contactus.h"
#include "ui_contactus.h"
#include"landingpage.h"
#include<QDesktopServices>
contactus::contactus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::contactus)
{
    ui->setupUi(this);
}

contactus::~contactus()
{
    delete ui;
}

void contactus::on_pushButton_back_clicked()
{
    hide();
    landingpage *back= new landingpage(this);
    back->show();
}


void contactus::on_pushButton_email_clicked()
{
    QString link="mailto:mulyankanteam@gmail.com?";
    QDesktopServices::openUrl(QUrl(link));
}

