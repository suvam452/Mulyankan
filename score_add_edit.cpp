#include "score_add_edit.h"
#include "ui_score_add_edit.h"
#include"mainwindow.h"
#include"QMessageBox"
#include"score_teacher.h"
score_add_edit::score_add_edit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::score_add_edit)
{
    ui->setupUi(this);
}

score_add_edit::~score_add_edit()
{
    delete ui;
}

void score_add_edit::on_pushButton_add_clicked()
{
    MainWindow reg;
    QString subject = ui->comboBox_subject->currentText();
    QString reg_no = ui->lineEdit_regno->text();
    QString mcq = ui->lineEdit_mcq->text();
    QString lab_exam = ui->lineEdit_labexam->text();
    QString first_int = ui->lineEdit_1st_int->text();
    QString second_int = ui->lineEdit_2nd_int->text();

if (reg_no.isEmpty() || mcq.isEmpty() || lab_exam.isEmpty() ||
        first_int.isEmpty() || second_int.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please fill in all fields!");
        return;
    }


    bool ok;
    int mcq_val = mcq.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Warning", "Invalid MCQ score format!");
        return;
    }

    int lab_val = lab_exam.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Warning", "Invalid Lab exam score format!");
        return;
    }

    int first_int_val = first_int.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Warning", "Invalid First internal score format!");
        return;
    }

    int second_int_val = second_int.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Warning", "Invalid Second internal score format!");
        return;
    }

    int total_val = mcq_val + lab_val + first_int_val + second_int_val;

    if (subject.compare("EEEG 202", Qt::CaseInsensitive) == 0) {
        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }



        QSqlQuery qry;

        qry.prepare("INSERT INTO scores_EEEG_202 (Reg_No, Mcq, Lab_exams, First_internal, Second_internal, Total) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_no);
        qry.addBindValue(mcq_val);
        qry.addBindValue(lab_val);
        qry.addBindValue(first_int_val);
        qry.addBindValue(second_int_val);
        qry.addBindValue(total_val);

        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record added successfully!");

            ui->lineEdit_regno->clear();
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error",
                                  "Failed to insert record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();


    }
    else if (subject.compare("EEEG 211", Qt::CaseInsensitive) == 0) {
        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }



        QSqlQuery qry;

        qry.prepare("INSERT INTO scores_EEEG_211 (Reg_No, Mcq, Lab_exams, First_internal, Second_internal, Total) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_no);
        qry.addBindValue(mcq_val);
        qry.addBindValue(lab_val);
        qry.addBindValue(first_int_val);
        qry.addBindValue(second_int_val);
        qry.addBindValue(total_val);

        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record added successfully!");

            ui->lineEdit_regno->clear();
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error",
                                  "Failed to insert record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();


    }
    else if (subject.compare("MATH 208", Qt::CaseInsensitive) == 0) {
        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }



        QSqlQuery qry;

        qry.prepare("INSERT INTO scores_MATH_208 (Reg_No, Mcq, Lab_exams, First_internal, Second_internal, Total) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_no);
        qry.addBindValue(mcq_val);
        qry.addBindValue(lab_val);
        qry.addBindValue(first_int_val);
        qry.addBindValue(second_int_val);
        qry.addBindValue(total_val);

        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record added successfully!");

            ui->lineEdit_regno->clear();
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error",
                                  "Failed to insert record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();


    }
    else if (subject.compare("MCSC 201", Qt::CaseInsensitive) == 0) {
        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }



        QSqlQuery qry;

        qry.prepare("INSERT INTO scores_MCSC_201 (Reg_No, Mcq, Lab_exams, First_internal, Second_internal, Total) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_no);
        qry.addBindValue(mcq_val);
        qry.addBindValue(lab_val);
        qry.addBindValue(first_int_val);
        qry.addBindValue(second_int_val);
        qry.addBindValue(total_val);

        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record added successfully!");

            ui->lineEdit_regno->clear();
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error",
                                  "Failed to insert record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();


    }
    else if (subject.compare("COMP 202", Qt::CaseInsensitive) == 0) {
        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }



        QSqlQuery qry;

        qry.prepare("INSERT INTO scores_COMP_202 (Reg_No, Mcq, Lab_exams, First_internal, Second_internal, Total) "
                    "VALUES (?, ?, ?, ?, ?, ?)");

        qry.addBindValue(reg_no);
        qry.addBindValue(mcq_val);
        qry.addBindValue(lab_val);
        qry.addBindValue(first_int_val);
        qry.addBindValue(second_int_val);
        qry.addBindValue(total_val);

        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record added successfully!");

            ui->lineEdit_regno->clear();
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error",
                                  "Failed to insert record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();

    }


}








void score_add_edit::on_pushButton_edit_clicked()
{
    MainWindow reg;
    QString subject = ui->comboBox_subject->currentText();
    QString reg_no = ui->lineEdit_regno->text();

    if (reg_no.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Reg_No must be filled to update the record!");
        return;
    }

    if (subject.compare("EEEG 202", Qt::CaseInsensitive) == 0) {



    if (!reg.databaseopen()) {
        qDebug() << "Failed to Open Database!";
        QMessageBox::critical(this, "Database Error", "Failed to open database!");
        return;
    }


    QString mcq = ui->lineEdit_mcq->text();
    QString lab_exam = ui->lineEdit_labexam->text();
    QString first_int = ui->lineEdit_1st_int->text();
    QString second_int = ui->lineEdit_2nd_int->text();

    QStringList updateFields;
    QVariantList values;
    bool ok;


    if (!mcq.isEmpty()) {
        int mcq_val = mcq.toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Warning", "Invalid MCQ score format!");
            reg.databaseclose();
            return;
        }
        updateFields << "Mcq = ?";
        values << mcq_val;
    }

    if (!lab_exam.isEmpty()) {
        int lab_val = lab_exam.toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Warning", "Invalid Lab exam score format!");
            reg.databaseclose();
            return;
        }
        updateFields << "Lab_exams = ?";
        values << lab_val;
    }

    if (!first_int.isEmpty()) {
        int first_val = first_int.toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Warning", "Invalid First internal score format!");
            reg.databaseclose();
            return;
        }
        updateFields << "First_internal = ?";
        values << first_val;
    }

    if (!second_int.isEmpty()) {
        int second_val = second_int.toInt(&ok);
        if (!ok) {
            QMessageBox::warning(this, "Warning", "Invalid Second internal score format!");
            reg.databaseclose();
            return;
        }
        updateFields << "Second_internal = ?";
        values << second_val;
    }


    if (!mcq.isEmpty() && !lab_exam.isEmpty() && !first_int.isEmpty() && !second_int.isEmpty()) {
        int total_val = mcq.toInt() + lab_exam.toInt() + first_int.toInt() + second_int.toInt();
        updateFields << "Total = ?";
        values << total_val;
    }

    if (updateFields.isEmpty()) {
        QMessageBox::warning(this, "Warning", "No fields filled in to update.");
        reg.databaseclose();
        return;
    }


    QString queryStr = "UPDATE scores_EEEG_202 SET " + updateFields.join(", ") + " WHERE Reg_No = ?";
    QSqlQuery qry;
    qry.prepare(queryStr);


    for (const auto &val : values) {
        qry.addBindValue(val);
    }
    qry.addBindValue(reg_no);


    if (qry.exec()) {
        QMessageBox::information(this, "SUCCESS", "Record updated successfully!");
        ui->lineEdit_mcq->clear();
        ui->lineEdit_labexam->clear();
        ui->lineEdit_1st_int->clear();
        ui->lineEdit_2nd_int->clear();
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to update record: " + qry.lastError().text());
        qDebug() << "SQL Error:" << qry.lastError().text();
    }

    reg.databaseclose();
    }


    else if (subject.compare("EEEG 211", Qt::CaseInsensitive) == 0) {
        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }


        QString mcq = ui->lineEdit_mcq->text();
        QString lab_exam = ui->lineEdit_labexam->text();
        QString first_int = ui->lineEdit_1st_int->text();
        QString second_int = ui->lineEdit_2nd_int->text();

        QStringList updateFields;
        QVariantList values;
        bool ok;


        if (!mcq.isEmpty()) {
            int mcq_val = mcq.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid MCQ score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Mcq = ?";
            values << mcq_val;
        }

        if (!lab_exam.isEmpty()) {
            int lab_val = lab_exam.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Lab exam score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Lab_exams = ?";
            values << lab_val;
        }

        if (!first_int.isEmpty()) {
            int first_val = first_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid First internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "First_internal = ?";
            values << first_val;
        }

        if (!second_int.isEmpty()) {
            int second_val = second_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Second internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Second_internal = ?";
            values << second_val;
        }


        if (!mcq.isEmpty() && !lab_exam.isEmpty() && !first_int.isEmpty() && !second_int.isEmpty()) {
            int total_val = mcq.toInt() + lab_exam.toInt() + first_int.toInt() + second_int.toInt();
            updateFields << "Total = ?";
            values << total_val;
        }

        if (updateFields.isEmpty()) {
            QMessageBox::warning(this, "Warning", "No fields filled in to update.");
            reg.databaseclose();
            return;
        }


        QString queryStr = "UPDATE scores_EEEG_211 SET " + updateFields.join(", ") + " WHERE Reg_No = ?";
        QSqlQuery qry;
        qry.prepare(queryStr);


        for (const auto &val : values) {
            qry.addBindValue(val);
        }
        qry.addBindValue(reg_no);


        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record updated successfully!");
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to update record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();
    }



    else if (subject.compare("MATH 208", Qt::CaseInsensitive) == 0)
    {

        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }


        QString mcq = ui->lineEdit_mcq->text();
        QString lab_exam = ui->lineEdit_labexam->text();
        QString first_int = ui->lineEdit_1st_int->text();
        QString second_int = ui->lineEdit_2nd_int->text();

        QStringList updateFields;
        QVariantList values;
        bool ok;


        if (!mcq.isEmpty()) {
            int mcq_val = mcq.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid MCQ score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Mcq = ?";
            values << mcq_val;
        }

        if (!lab_exam.isEmpty()) {
            int lab_val = lab_exam.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Lab exam score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Lab_exams = ?";
            values << lab_val;
        }

        if (!first_int.isEmpty()) {
            int first_val = first_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid First internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "First_internal = ?";
            values << first_val;
        }

        if (!second_int.isEmpty()) {
            int second_val = second_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Second internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Second_internal = ?";
            values << second_val;
        }


        if (!mcq.isEmpty() && !lab_exam.isEmpty() && !first_int.isEmpty() && !second_int.isEmpty()) {
            int total_val = mcq.toInt() + lab_exam.toInt() + first_int.toInt() + second_int.toInt();
            updateFields << "Total = ?";
            values << total_val;
        }

        if (updateFields.isEmpty()) {
            QMessageBox::warning(this, "Warning", "No fields filled in to update.");
            reg.databaseclose();
            return;
        }


        QString queryStr = "UPDATE scores_MATH_208 SET " + updateFields.join(", ") + " WHERE Reg_No = ?";
        QSqlQuery qry;
        qry.prepare(queryStr);


        for (const auto &val : values) {
            qry.addBindValue(val);
        }
        qry.addBindValue(reg_no);


        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record updated successfully!");
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to update record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();
    }



    else if (subject.compare("MCSC 201", Qt::CaseInsensitive) == 0) {

        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }


        QString mcq = ui->lineEdit_mcq->text();
        QString lab_exam = ui->lineEdit_labexam->text();
        QString first_int = ui->lineEdit_1st_int->text();
        QString second_int = ui->lineEdit_2nd_int->text();

        QStringList updateFields;
        QVariantList values;
        bool ok;


        if (!mcq.isEmpty()) {
            int mcq_val = mcq.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid MCQ score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Mcq = ?";
            values << mcq_val;
        }

        if (!lab_exam.isEmpty()) {
            int lab_val = lab_exam.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Lab exam score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Lab_exams = ?";
            values << lab_val;
        }

        if (!first_int.isEmpty()) {
            int first_val = first_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid First internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "First_internal = ?";
            values << first_val;
        }

        if (!second_int.isEmpty()) {
            int second_val = second_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Second internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Second_internal = ?";
            values << second_val;
        }


        if (!mcq.isEmpty() && !lab_exam.isEmpty() && !first_int.isEmpty() && !second_int.isEmpty()) {
            int total_val = mcq.toInt() + lab_exam.toInt() + first_int.toInt() + second_int.toInt();
            updateFields << "Total = ?";
            values << total_val;
        }

        if (updateFields.isEmpty()) {
            QMessageBox::warning(this, "Warning", "No fields filled in to update.");
            reg.databaseclose();
            return;
        }


        QString queryStr = "UPDATE scores_MCSC_201 SET " + updateFields.join(", ") + " WHERE Reg_No = ?";
        QSqlQuery qry;
        qry.prepare(queryStr);


        for (const auto &val : values) {
            qry.addBindValue(val);
        }
        qry.addBindValue(reg_no);


        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record updated successfully!");
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to update record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();
    }



    else if (subject.compare("COMP 202", Qt::CaseInsensitive) == 0)
    {

        if (!reg.databaseopen()) {
            qDebug() << "Failed to Open Database!";
            QMessageBox::critical(this, "Database Error", "Failed to open database!");
            return;
        }


        QString mcq = ui->lineEdit_mcq->text();
        QString lab_exam = ui->lineEdit_labexam->text();
        QString first_int = ui->lineEdit_1st_int->text();
        QString second_int = ui->lineEdit_2nd_int->text();

        QStringList updateFields;
        QVariantList values;
        bool ok;


        if (!mcq.isEmpty()) {
            int mcq_val = mcq.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid MCQ score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Mcq = ?";
            values << mcq_val;
        }

        if (!lab_exam.isEmpty()) {
            int lab_val = lab_exam.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Lab exam score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Lab_exams = ?";
            values << lab_val;
        }

        if (!first_int.isEmpty()) {
            int first_val = first_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid First internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "First_internal = ?";
            values << first_val;
        }

        if (!second_int.isEmpty()) {
            int second_val = second_int.toInt(&ok);
            if (!ok) {
                QMessageBox::warning(this, "Warning", "Invalid Second internal score format!");
                reg.databaseclose();
                return;
            }
            updateFields << "Second_internal = ?";
            values << second_val;
        }


        if (!mcq.isEmpty() && !lab_exam.isEmpty() && !first_int.isEmpty() && !second_int.isEmpty()) {
            int total_val = mcq.toInt() + lab_exam.toInt() + first_int.toInt() + second_int.toInt();
            updateFields << "Total = ?";
            values << total_val;
        }

        if (updateFields.isEmpty()) {
            QMessageBox::warning(this, "Warning", "No fields filled in to update.");
            reg.databaseclose();
            return;
        }


        QString queryStr = "UPDATE scores_COMP_202 SET " + updateFields.join(", ") + " WHERE Reg_No = ?";
        QSqlQuery qry;
        qry.prepare(queryStr);


        for (const auto &val : values) {
            qry.addBindValue(val);
        }
        qry.addBindValue(reg_no);


        if (qry.exec()) {
            QMessageBox::information(this, "SUCCESS", "Record updated successfully!");
            ui->lineEdit_mcq->clear();
            ui->lineEdit_labexam->clear();
            ui->lineEdit_1st_int->clear();
            ui->lineEdit_2nd_int->clear();
        } else {
            QMessageBox::critical(this, "Database Error", "Failed to update record: " + qry.lastError().text());
            qDebug() << "SQL Error:" << qry.lastError().text();
        }

        reg.databaseclose();
    }
}








void score_add_edit::on_pushButton_back_clicked()
{
    hide();
    score_teacher *teach= new score_teacher(this);
    teach->show();
}

