/********************************************************************************
** Form generated from reading UI file 'zteacherstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZTEACHERSTUDENT_H
#define UI_ZTEACHERSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherAttendanceView
{
public:
    QVBoxLayout *mainLayout;
    QLabel *labelHeader;
    QLabel *labelDate;
    QHBoxLayout *controlLayout;
    QLabel *labelSemester;
    QComboBox *comboBoxSemester;
    QLabel *labelSubject;
    QComboBox *comboBoxSubject;
    QPushButton *buttonLoadStudents;
    QTableWidget *tableWidget;
    QPushButton *buttonSaveAttendance;

    void setupUi(QWidget *TeacherAttendanceView)
    {
        if (TeacherAttendanceView->objectName().isEmpty())
            TeacherAttendanceView->setObjectName("TeacherAttendanceView");
        TeacherAttendanceView->resize(647, 447);
        mainLayout = new QVBoxLayout(TeacherAttendanceView);
        mainLayout->setObjectName("mainLayout");
        labelHeader = new QLabel(TeacherAttendanceView);
        labelHeader->setObjectName("labelHeader");
        labelHeader->setAlignment(Qt::AlignmentFlag::AlignCenter);

        mainLayout->addWidget(labelHeader);

        labelDate = new QLabel(TeacherAttendanceView);
        labelDate->setObjectName("labelDate");
        labelDate->setAlignment(Qt::AlignmentFlag::AlignRight);

        mainLayout->addWidget(labelDate);

        controlLayout = new QHBoxLayout();
        controlLayout->setObjectName("controlLayout");
        labelSemester = new QLabel(TeacherAttendanceView);
        labelSemester->setObjectName("labelSemester");

        controlLayout->addWidget(labelSemester);

        comboBoxSemester = new QComboBox(TeacherAttendanceView);
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->addItem(QString());
        comboBoxSemester->setObjectName("comboBoxSemester");

        controlLayout->addWidget(comboBoxSemester);

        labelSubject = new QLabel(TeacherAttendanceView);
        labelSubject->setObjectName("labelSubject");

        controlLayout->addWidget(labelSubject);

        comboBoxSubject = new QComboBox(TeacherAttendanceView);
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->setObjectName("comboBoxSubject");

        controlLayout->addWidget(comboBoxSubject);

        buttonLoadStudents = new QPushButton(TeacherAttendanceView);
        buttonLoadStudents->setObjectName("buttonLoadStudents");

        controlLayout->addWidget(buttonLoadStudents);


        mainLayout->addLayout(controlLayout);

        tableWidget = new QTableWidget(TeacherAttendanceView);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(3);

        mainLayout->addWidget(tableWidget);

        buttonSaveAttendance = new QPushButton(TeacherAttendanceView);
        buttonSaveAttendance->setObjectName("buttonSaveAttendance");

        mainLayout->addWidget(buttonSaveAttendance);


        retranslateUi(TeacherAttendanceView);

        QMetaObject::connectSlotsByName(TeacherAttendanceView);
    } // setupUi

    void retranslateUi(QWidget *TeacherAttendanceView)
    {
        TeacherAttendanceView->setWindowTitle(QCoreApplication::translate("TeacherAttendanceView", "Teacher Attendance", nullptr));
        labelHeader->setStyleSheet(QCoreApplication::translate("TeacherAttendanceView", "font-size: 18pt; font-weight: bold; color: #2E4053;", nullptr));
        labelHeader->setText(QCoreApplication::translate("TeacherAttendanceView", "Mark Student Attendance", nullptr));
        labelDate->setStyleSheet(QCoreApplication::translate("TeacherAttendanceView", "font-size: 12pt; color: #444;", nullptr));
        labelDate->setText(QCoreApplication::translate("TeacherAttendanceView", "Date: --/--/----", nullptr));
        labelSemester->setText(QCoreApplication::translate("TeacherAttendanceView", "Semester:", nullptr));
        comboBoxSemester->setItemText(0, QCoreApplication::translate("TeacherAttendanceView", "I", nullptr));
        comboBoxSemester->setItemText(1, QCoreApplication::translate("TeacherAttendanceView", "II", nullptr));
        comboBoxSemester->setItemText(2, QCoreApplication::translate("TeacherAttendanceView", "III", nullptr));
        comboBoxSemester->setItemText(3, QCoreApplication::translate("TeacherAttendanceView", "IV", nullptr));
        comboBoxSemester->setItemText(4, QCoreApplication::translate("TeacherAttendanceView", "V", nullptr));
        comboBoxSemester->setItemText(5, QCoreApplication::translate("TeacherAttendanceView", "VI", nullptr));
        comboBoxSemester->setItemText(6, QCoreApplication::translate("TeacherAttendanceView", "VII", nullptr));
        comboBoxSemester->setItemText(7, QCoreApplication::translate("TeacherAttendanceView", "VIII", nullptr));

        labelSubject->setText(QCoreApplication::translate("TeacherAttendanceView", "Subject:", nullptr));
        comboBoxSubject->setItemText(0, QCoreApplication::translate("TeacherAttendanceView", "MATH 208", nullptr));
        comboBoxSubject->setItemText(1, QCoreApplication::translate("TeacherAttendanceView", "MCSC 201", nullptr));
        comboBoxSubject->setItemText(2, QCoreApplication::translate("TeacherAttendanceView", "EEEG 202", nullptr));
        comboBoxSubject->setItemText(3, QCoreApplication::translate("TeacherAttendanceView", "EEEG 211", nullptr));
        comboBoxSubject->setItemText(4, QCoreApplication::translate("TeacherAttendanceView", "COMP 202", nullptr));
        comboBoxSubject->setItemText(5, QCoreApplication::translate("TeacherAttendanceView", "COMP 206", nullptr));
        comboBoxSubject->setItemText(6, QCoreApplication::translate("TeacherAttendanceView", "EEEG 217", nullptr));

        buttonLoadStudents->setText(QCoreApplication::translate("TeacherAttendanceView", "Load Students", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TeacherAttendanceView", "Reg.NO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TeacherAttendanceView", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TeacherAttendanceView", "Attendance", nullptr));
        tableWidget->setStyleSheet(QCoreApplication::translate("TeacherAttendanceView", "font-size: 12pt;", nullptr));
        buttonSaveAttendance->setStyleSheet(QCoreApplication::translate("TeacherAttendanceView", "font-size: 14pt; padding: 6px;", nullptr));
        buttonSaveAttendance->setText(QCoreApplication::translate("TeacherAttendanceView", "Save Attendance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherAttendanceView: public Ui_TeacherAttendanceView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZTEACHERSTUDENT_H
