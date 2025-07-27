/********************************************************************************
** Form generated from reading UI file 'assignment.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENT_H
#define UI_ASSIGNMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_assignment
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_regno;
    QComboBox *comboBox_subject;
    QTableView *tableView_assignment;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_load;
    QPushButton *pushButton_home;

    void setupUi(QMainWindow *assignment)
    {
        if (assignment->objectName().isEmpty())
            assignment->setObjectName("assignment");
        assignment->resize(592, 354);
        centralwidget = new QWidget(assignment);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        label_name->setFont(font1);

        horizontalLayout->addWidget(label_name);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        label_regno = new QLabel(centralwidget);
        label_regno->setObjectName("label_regno");
        QFont font2;
        font2.setPointSize(10);
        label_regno->setFont(font2);

        horizontalLayout_2->addWidget(label_regno);


        horizontalLayout_3->addLayout(horizontalLayout_2);

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

        horizontalLayout_3->addWidget(comboBox_subject);


        verticalLayout->addLayout(horizontalLayout_3);

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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_load = new QPushButton(centralwidget);
        pushButton_load->setObjectName("pushButton_load");
        QFont font3;
        font3.setBold(true);
        pushButton_load->setFont(font3);
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

        horizontalLayout_4->addWidget(pushButton_load);

        pushButton_home = new QPushButton(centralwidget);
        pushButton_home->setObjectName("pushButton_home");
        pushButton_home->setFont(font3);
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

        horizontalLayout_4->addWidget(pushButton_home);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        assignment->setCentralWidget(centralwidget);

        retranslateUi(assignment);

        QMetaObject::connectSlotsByName(assignment);
    } // setupUi

    void retranslateUi(QMainWindow *assignment)
    {
        assignment->setWindowTitle(QCoreApplication::translate("assignment", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("assignment", "Name:", nullptr));
        label_name->setText(QString());
        label_2->setText(QCoreApplication::translate("assignment", "Reg. No.:", nullptr));
        label_regno->setText(QString());
        comboBox_subject->setItemText(0, QCoreApplication::translate("assignment", "EEEG 202", nullptr));
        comboBox_subject->setItemText(1, QCoreApplication::translate("assignment", "EEEG 211", nullptr));
        comboBox_subject->setItemText(2, QCoreApplication::translate("assignment", "COMP 202", nullptr));
        comboBox_subject->setItemText(3, QCoreApplication::translate("assignment", "MATH 208", nullptr));
        comboBox_subject->setItemText(4, QCoreApplication::translate("assignment", "MCSC 201", nullptr));

        pushButton_load->setText(QCoreApplication::translate("assignment", "Load", nullptr));
        pushButton_home->setText(QCoreApplication::translate("assignment", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class assignment: public Ui_assignment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENT_H
