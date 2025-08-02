#include "assignment_add_edit.h"
#include "ui_assignment_add_edit.h"
#include"mainwindow.h"
#include<QMessageBox>
#include"assignment_teacher.h"
QString subject;

assignment_add_edit::assignment_add_edit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::assignment_add_edit)
{
    ui->setupUi(this);
}

assignment_add_edit::~assignment_add_edit()
{
    delete ui;
}

void assignment_add_edit::on_pushButton_add_2_clicked()
{
    subject=ui->comboBox_subject->currentText();
}


void assignment_add_edit::on_pushButton_add_clicked()
{
    MainWindow load;
    QString reg_noo = ui->lineEdit_regno->text();
    QString assgn_no1 = ui->comboBox_assignmen_value_1->currentText();
    QString assgn_no2 = ui->comboBox_assignmen_value_2->currentText();
    QString assgn_no3 = ui->comboBox_assignmen_value_3->currentText();
    QString assgn_no4 = ui->comboBox_assignmen_value_4->currentText();
    QString assgn_no5 = ui->comboBox_assignmen_value_5->currentText();



    if (subject.compare("EEEG 202", Qt::CaseInsensitive) == 0) {
        if (reg_noo.isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please enter the registration number.");
            return;
        }

        if (!load.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Could not open database.");
            return;
        }


        QSqlQuery qry(load.mydb2);
        qry.prepare("INSERT INTO assignments_EEEG_202 (Reg_No, Assignment_1, Assignment_2, Assignment_3, Assignment_4, Assignment_5) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_noo);
        qry.addBindValue(assgn_no1);
        qry.addBindValue(assgn_no2);
        qry.addBindValue(assgn_no3);
        qry.addBindValue(assgn_no4);
        qry.addBindValue(assgn_no5);

        if (qry.exec()) {
            QMessageBox::information(this, "Status", "Record added successfully.");

            ui->lineEdit_regno->clear();
            ui->comboBox_assignmen_value_1->setCurrentIndex(0);
            ui->comboBox_assignmen_value_2->setCurrentIndex(0);
            ui->comboBox_assignmen_value_3->setCurrentIndex(0);
            ui->comboBox_assignmen_value_4->setCurrentIndex(0);
            ui->comboBox_assignmen_value_5->setCurrentIndex(0);
        } else {
            QMessageBox::critical(this, "Insert Failed", qry.lastError().text());
        }

        load.databaseclose();
    }
    else if (subject.compare("EEEG 211", Qt::CaseInsensitive) == 0) {

        if (reg_noo.isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please enter the registration number.");
            return;
        }

        if (!load.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Could not open database.");
            return;
        }


        QSqlQuery qry(load.mydb2);
        qry.prepare("INSERT INTO assignments_EEEG_211 (Reg_No, Assignment_1, Assignment_2, Assignment_3, Assignment_4, Assignment_5) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_noo);
        qry.addBindValue(assgn_no1);
        qry.addBindValue(assgn_no2);
        qry.addBindValue(assgn_no3);
        qry.addBindValue(assgn_no4);
        qry.addBindValue(assgn_no5);

        if (qry.exec()) {
            QMessageBox::information(this, "Status", "Record added successfully.");

            ui->lineEdit_regno->clear();
            ui->comboBox_assignmen_value_1->setCurrentIndex(0);
            ui->comboBox_assignmen_value_2->setCurrentIndex(0);
            ui->comboBox_assignmen_value_3->setCurrentIndex(0);
            ui->comboBox_assignmen_value_4->setCurrentIndex(0);
            ui->comboBox_assignmen_value_5->setCurrentIndex(0);
        } else {
            QMessageBox::critical(this, "Insert Failed", qry.lastError().text());
        }

        load.databaseclose();
    }
    else if (subject.compare("MATH 208", Qt::CaseInsensitive) == 0) {
        if (reg_noo.isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please enter the registration number.");
            return;
        }

        if (!load.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Could not open database.");
            return;
        }


        QSqlQuery qry(load.mydb2);
        qry.prepare("INSERT INTO assignments_MATH_208 (Reg_No, Assignment_1, Assignment_2, Assignment_3, Assignment_4, Assignment_5) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_noo);
        qry.addBindValue(assgn_no1);
        qry.addBindValue(assgn_no2);
        qry.addBindValue(assgn_no3);
        qry.addBindValue(assgn_no4);
        qry.addBindValue(assgn_no5);

        if (qry.exec()) {
            QMessageBox::information(this, "Status", "Record added successfully.");

            ui->lineEdit_regno->clear();
            ui->comboBox_assignmen_value_1->setCurrentIndex(0);
            ui->comboBox_assignmen_value_2->setCurrentIndex(0);
            ui->comboBox_assignmen_value_3->setCurrentIndex(0);
            ui->comboBox_assignmen_value_4->setCurrentIndex(0);
            ui->comboBox_assignmen_value_5->setCurrentIndex(0);
        } else {
            QMessageBox::critical(this, "Insert Failed", qry.lastError().text());
        }

        load.databaseclose();
    }
    else if (subject.compare("MCSC 201", Qt::CaseInsensitive) == 0) {
        if (reg_noo.isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please enter the registration number.");
            return;
        }

        if (!load.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Could not open database.");
            return;
        }


        QSqlQuery qry(load.mydb2);
        qry.prepare("INSERT INTO assignments_MCSC_201 (Reg_No, Assignment_1, Assignment_2, Assignment_3, Assignment_4, Assignment_5) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_noo);
        qry.addBindValue(assgn_no1);
        qry.addBindValue(assgn_no2);
        qry.addBindValue(assgn_no3);
        qry.addBindValue(assgn_no4);
        qry.addBindValue(assgn_no5);

        if (qry.exec()) {
            QMessageBox::information(this, "Status", "Record added successfully.");

            ui->lineEdit_regno->clear();
            ui->comboBox_assignmen_value_1->setCurrentIndex(0);
            ui->comboBox_assignmen_value_2->setCurrentIndex(0);
            ui->comboBox_assignmen_value_3->setCurrentIndex(0);
            ui->comboBox_assignmen_value_4->setCurrentIndex(0);
            ui->comboBox_assignmen_value_5->setCurrentIndex(0);
        } else {
            QMessageBox::critical(this, "Insert Failed", qry.lastError().text());
        }

        load.databaseclose();

    }
    else if (subject.compare("COMP 202", Qt::CaseInsensitive) == 0) {
        if (reg_noo.isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please enter the registration number.");
            return;
        }

        if (!load.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Could not open database.");
            return;
        }


        QSqlQuery qry(load.mydb2);
        qry.prepare("INSERT INTO assignments_COMP_202 (Reg_No, Assignment_1, Assignment_2, Assignment_3, Assignment_4, Assignment_5) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_noo);
        qry.addBindValue(assgn_no1);
        qry.addBindValue(assgn_no2);
        qry.addBindValue(assgn_no3);
        qry.addBindValue(assgn_no4);
        qry.addBindValue(assgn_no5);

        if (qry.exec()) {
            QMessageBox::information(this, "Status", "Record added successfully.");

            ui->lineEdit_regno->clear();
            ui->comboBox_assignmen_value_1->setCurrentIndex(0);
            ui->comboBox_assignmen_value_2->setCurrentIndex(0);
            ui->comboBox_assignmen_value_3->setCurrentIndex(0);
            ui->comboBox_assignmen_value_4->setCurrentIndex(0);
            ui->comboBox_assignmen_value_5->setCurrentIndex(0);
        } else {
            QMessageBox::critical(this, "Insert Failed", qry.lastError().text());
        }

        load.databaseclose();

    }

}


void assignment_add_edit::on_pushButton_edit_clicked()
{
    MainWindow load;
    QString reg_noo = ui->lineEdit_regno->text();
    QString assgn_no1 = ui->comboBox_assignmen_value_1->currentText();
    QString assgn_no2 = ui->comboBox_assignmen_value_2->currentText();
    QString assgn_no3 = ui->comboBox_assignmen_value_3->currentText();
    QString assgn_no4 = ui->comboBox_assignmen_value_4->currentText();
    QString assgn_no5 = ui->comboBox_assignmen_value_5->currentText();

    if (reg_noo.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter the registration number to edit.");
        return;
    }

    if (!load.databaseopen()) {
        QMessageBox::critical(this, "Database Error", "Could not open the database.");
        return;
    }

    // Prepare list of fields to update
    QStringList fieldsToUpdate;
    QVariantList values;

    if (!assgn_no1.isEmpty()) {
        fieldsToUpdate << "Assignment_1 = ?";
        values << assgn_no1;
    }
    if (!assgn_no2.isEmpty()) {
        fieldsToUpdate << "Assignment_2 = ?";
        values << assgn_no2;
    }
    if (!assgn_no3.isEmpty()) {
        fieldsToUpdate << "Assignment_3 = ?";
        values << assgn_no3;
    }
    if (!assgn_no4.isEmpty()) {
        fieldsToUpdate << "Assignment_4 = ?";
        values << assgn_no4;
    }
    if (!assgn_no5.isEmpty()) {
        fieldsToUpdate << "Assignment_5 = ?";
        values << assgn_no5;
    }

    if (fieldsToUpdate.isEmpty()) {
        QMessageBox::information(this, "No Changes", "No fields were edited.");
        load.databaseclose();
        return;
    }

    // Construct the SQL query
    QString queryStr = "UPDATE assignments_EEEG_202 SET " + fieldsToUpdate.join(", ") + " WHERE Reg_No = ?";
    QSqlQuery qry(load.mydb2);
    qry.prepare(queryStr);

    // Bind the values
    for (const QVariant &val : values) {
        qry.addBindValue(val);
    }
    qry.addBindValue(reg_noo);  // For WHERE clause

    // Execute
    if (qry.exec()) {
        QMessageBox::information(this, "Success", "Assignment data updated successfully.");
        ui->lineEdit_regno->clear();
        ui->comboBox_assignmen_value_1->setCurrentIndex(0);
        ui->comboBox_assignmen_value_2->setCurrentIndex(0);
        ui->comboBox_assignmen_value_3->setCurrentIndex(0);
        ui->comboBox_assignmen_value_4->setCurrentIndex(0);
        ui->comboBox_assignmen_value_5->setCurrentIndex(0);
    } else {
        QMessageBox::critical(this, "Update Failed", qry.lastError().text());
    }

    load.databaseclose();

}


void assignment_add_edit::on_pushButton_back_clicked()
{
    hide();
    assignment_teacher *paxaadi= new assignment_teacher(this);
    paxaadi->show();
}

