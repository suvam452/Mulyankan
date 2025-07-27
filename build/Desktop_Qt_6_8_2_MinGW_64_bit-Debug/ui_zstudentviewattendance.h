/********************************************************************************
** Form generated from reading UI file 'zstudentviewattendance.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZSTUDENTVIEWATTENDANCE_H
#define UI_ZSTUDENTVIEWATTENDANCE_H

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

class Ui_StudentAttendanceView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QHBoxLayout *subjectLayout;
    QLabel *labelSubject;
    QComboBox *comboBoxSubject;
    QPushButton *buttonLoadAttendance;
    QTableWidget *tableAttendance;

    void setupUi(QWidget *StudentAttendanceView)
    {
        if (StudentAttendanceView->objectName().isEmpty())
            StudentAttendanceView->setObjectName("StudentAttendanceView");
        StudentAttendanceView->resize(548, 476);
        verticalLayout = new QVBoxLayout(StudentAttendanceView);
        verticalLayout->setObjectName("verticalLayout");
        labelTitle = new QLabel(StudentAttendanceView);
        labelTitle->setObjectName("labelTitle");
        labelTitle->setStyleSheet(QString::fromUtf8("font-size: 18pt; font-weight: bold; color: #2E4053;"));
        labelTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        subjectLayout = new QHBoxLayout();
        subjectLayout->setObjectName("subjectLayout");
        labelSubject = new QLabel(StudentAttendanceView);
        labelSubject->setObjectName("labelSubject");

        subjectLayout->addWidget(labelSubject);

        comboBoxSubject = new QComboBox(StudentAttendanceView);
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->addItem(QString());
        comboBoxSubject->setObjectName("comboBoxSubject");

        subjectLayout->addWidget(comboBoxSubject);

        buttonLoadAttendance = new QPushButton(StudentAttendanceView);
        buttonLoadAttendance->setObjectName("buttonLoadAttendance");

        subjectLayout->addWidget(buttonLoadAttendance);


        verticalLayout->addLayout(subjectLayout);

        tableAttendance = new QTableWidget(StudentAttendanceView);
        if (tableAttendance->columnCount() < 2)
            tableAttendance->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableAttendance->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableAttendance->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableAttendance->setObjectName("tableAttendance");
        tableAttendance->setStyleSheet(QString::fromUtf8("font-size: 12pt;"));
        tableAttendance->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableAttendance->setAlternatingRowColors(true);
        tableAttendance->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        tableAttendance->setRowCount(0);
        tableAttendance->setColumnCount(2);

        verticalLayout->addWidget(tableAttendance);


        retranslateUi(StudentAttendanceView);

        QMetaObject::connectSlotsByName(StudentAttendanceView);
    } // setupUi

    void retranslateUi(QWidget *StudentAttendanceView)
    {
        StudentAttendanceView->setWindowTitle(QCoreApplication::translate("StudentAttendanceView", "Student Attendance", nullptr));
        labelTitle->setText(QCoreApplication::translate("StudentAttendanceView", "View Attendance", nullptr));
        labelSubject->setText(QCoreApplication::translate("StudentAttendanceView", "Select Subject:", nullptr));
        comboBoxSubject->setItemText(0, QCoreApplication::translate("StudentAttendanceView", "MATH 208", nullptr));
        comboBoxSubject->setItemText(1, QCoreApplication::translate("StudentAttendanceView", "MCSC 201", nullptr));
        comboBoxSubject->setItemText(2, QCoreApplication::translate("StudentAttendanceView", "EEEG 202", nullptr));
        comboBoxSubject->setItemText(3, QCoreApplication::translate("StudentAttendanceView", "EEEG 211", nullptr));
        comboBoxSubject->setItemText(4, QCoreApplication::translate("StudentAttendanceView", "COMP 202", nullptr));
        comboBoxSubject->setItemText(5, QCoreApplication::translate("StudentAttendanceView", "COMP 206", nullptr));
        comboBoxSubject->setItemText(6, QCoreApplication::translate("StudentAttendanceView", "EEEG 217", nullptr));

        buttonLoadAttendance->setText(QCoreApplication::translate("StudentAttendanceView", "Load", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableAttendance->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StudentAttendanceView", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableAttendance->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StudentAttendanceView", "Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentAttendanceView: public Ui_StudentAttendanceView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZSTUDENTVIEWATTENDANCE_H
