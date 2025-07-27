/********************************************************************************
** Form generated from reading UI file 'attendance_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCE_TEACHER_H
#define UI_ATTENDANCE_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attendance_teacher
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView_attendance;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_load;
    QPushButton *pushButton_home_2;

    void setupUi(QMainWindow *attendance_teacher)
    {
        if (attendance_teacher->objectName().isEmpty())
            attendance_teacher->setObjectName("attendance_teacher");
        attendance_teacher->resize(596, 368);
        centralwidget = new QWidget(attendance_teacher);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        tableView_attendance = new QTableView(centralwidget);
        tableView_attendance->setObjectName("tableView_attendance");
        tableView_attendance->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px;\n"
"    background-color: rgba(255, 255, 255, 0); /* transparent */\n"
"    gridline-color: rgba(16, 16, 16, 50);\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"    selection-background-color: rgba(135, 206, 250, 180); /* light blue on selection */\n"
"    selection-color: black;\n"
"    show-grid: true;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(200, 200, 200, 150);\n"
"    padding: 4px;\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: 1px solid rgb(120, 120, 120);\n"
"    border-radius: 6px;\n"
"    padding: 5px;\n"
"    background-color: rgba(255, 255, 255, 30); /* slight transparency */\n"
"    color: black;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: rgba(135, 206, 250, 180);\n"
"    color: black;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background-color: rgba(200, 200, 200, 100"
                        ");\n"
"}\n"
""));

        verticalLayout_2->addWidget(tableView_attendance);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_load = new QPushButton(centralwidget);
        pushButton_load->setObjectName("pushButton_load");
        QFont font;
        font.setBold(true);
        pushButton_load->setFont(font);
        pushButton_load->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout_6->addWidget(pushButton_load);

        pushButton_home_2 = new QPushButton(centralwidget);
        pushButton_home_2->setObjectName("pushButton_home_2");
        pushButton_home_2->setFont(font);
        pushButton_home_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout_6->addWidget(pushButton_home_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        attendance_teacher->setCentralWidget(centralwidget);

        retranslateUi(attendance_teacher);

        QMetaObject::connectSlotsByName(attendance_teacher);
    } // setupUi

    void retranslateUi(QMainWindow *attendance_teacher)
    {
        attendance_teacher->setWindowTitle(QCoreApplication::translate("attendance_teacher", "MainWindow", nullptr));
        pushButton_load->setText(QCoreApplication::translate("attendance_teacher", "Load Attendance", nullptr));
        pushButton_home_2->setText(QCoreApplication::translate("attendance_teacher", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class attendance_teacher: public Ui_attendance_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_TEACHER_H
