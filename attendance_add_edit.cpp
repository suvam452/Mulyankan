#include "attendance_add_edit.h"
#include "ui_attendance_add_edit.h"
#include"mainwindow.h"
#include"QMessageBox"
attendance_add_edit::attendance_add_edit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::attendance_add_edit)
{
    ui->setupUi(this);
}

attendance_add_edit::~attendance_add_edit()
{
    delete ui;
}

void attendance_add_edit::on_pushButton_add_clicked()
{
    MainWindow reg;
    QString day = ui->comboBox_day->currentText();
    QString value = ui->comboBox_day_value->currentText();
    QString reg__no = ui->lineEdit_regno->text();

    if (!reg.databaseopen()) {
        qDebug() << "Failed to Open Database!";
        return;
    }

    reg.databaseopen();
    QSqlQuery qry;


    QString queryStr = QString("INSERT INTO attendance (Reg_No, %1) VALUES (:regno, :value)").arg(day);
    qry.prepare(queryStr);
    qry.bindValue(":value", value);
    qry.bindValue(":regno", reg__no);

    if (qry.exec()) {
        QMessageBox::information(this, "STATUS", "Added Successfully");
        reg.databaseclose();
    } else {
        QMessageBox::critical(this, "Check", qry.lastError().text());
    }

}


void attendance_add_edit::on_pushButton_edit_clicked()
{
    MainWindow reg;
    QString day = ui->comboBox_day->currentText();
    QString value = ui->comboBox_day_value->currentText();
    QString reg__no = ui->lineEdit_regno->text();

    if (!reg.databaseopen()) {
        qDebug() << "Failed to Open Database!";
        return;
    }

    reg.databaseopen();
    QSqlQuery qry;


    QString queryStr = QString("UPDATE attendance SET %1 = :value WHERE Reg_No = :regno").arg(day);
    qry.prepare(queryStr);
    qry.bindValue(":value", value);
    qry.bindValue(":regno", reg__no);

    if (qry.exec()) {
        QMessageBox::information(this, "STATUS", "Edited Successfully");
        reg.databaseclose();
    } else {
        QMessageBox::critical(this, "Check", qry.lastError().text());
    }

}

