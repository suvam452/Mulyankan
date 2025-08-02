/********************************************************************************
** Form generated from reading UI file 'assignment_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENT_TEACHER_H
#define UI_ASSIGNMENT_TEACHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_assignment_teacher
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_subject;
    QTableView *tableView_assignment;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_load;
    QPushButton *pushButton_home;
    QPushButton *pushButton_add_edit;

    void setupUi(QMainWindow *assignment_teacher)
    {
        if (assignment_teacher->objectName().isEmpty())
            assignment_teacher->setObjectName("assignment_teacher");
        assignment_teacher->resize(503, 309);
        centralwidget = new QWidget(assignment_teacher);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        comboBox_subject = new QComboBox(centralwidget);
        comboBox_subject->addItem(QString());
        comboBox_subject->addItem(QString());
        comboBox_subject->addItem(QString());
        comboBox_subject->addItem(QString());
        comboBox_subject->addItem(QString());
        comboBox_subject->setObjectName("comboBox_subject");
        comboBox_subject->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout->addWidget(comboBox_subject);

        tableView_assignment = new QTableView(centralwidget);
        tableView_assignment->setObjectName("tableView_assignment");
        tableView_assignment->setStyleSheet(QString::fromUtf8("QTableView {\n"
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

        verticalLayout->addWidget(tableView_assignment);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
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

        horizontalLayout->addWidget(pushButton_load);

        pushButton_home = new QPushButton(centralwidget);
        pushButton_home->setObjectName("pushButton_home");
        pushButton_home->setFont(font);
        pushButton_home->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_home);

        pushButton_add_edit = new QPushButton(centralwidget);
        pushButton_add_edit->setObjectName("pushButton_add_edit");
        pushButton_add_edit->setFont(font);
        pushButton_add_edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_add_edit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        assignment_teacher->setCentralWidget(centralwidget);

        retranslateUi(assignment_teacher);

        QMetaObject::connectSlotsByName(assignment_teacher);
    } // setupUi

    void retranslateUi(QMainWindow *assignment_teacher)
    {
        assignment_teacher->setWindowTitle(QCoreApplication::translate("assignment_teacher", "MainWindow", nullptr));
        comboBox_subject->setItemText(0, QCoreApplication::translate("assignment_teacher", "EEEG 202", nullptr));
        comboBox_subject->setItemText(1, QCoreApplication::translate("assignment_teacher", "EEEG 211", nullptr));
        comboBox_subject->setItemText(2, QCoreApplication::translate("assignment_teacher", "COMP 202", nullptr));
        comboBox_subject->setItemText(3, QCoreApplication::translate("assignment_teacher", "MATH 208", nullptr));
        comboBox_subject->setItemText(4, QCoreApplication::translate("assignment_teacher", "MCSC 201", nullptr));

        pushButton_load->setText(QCoreApplication::translate("assignment_teacher", "Load", nullptr));
        pushButton_home->setText(QCoreApplication::translate("assignment_teacher", "Back to Home", nullptr));
        pushButton_add_edit->setText(QCoreApplication::translate("assignment_teacher", "Add/Edit Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class assignment_teacher: public Ui_assignment_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENT_TEACHER_H
