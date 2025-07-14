/********************************************************************************
** Form generated from reading UI file 'student_info.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_INFO_H
#define UI_STUDENT_INFO_H

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

class Ui_student_info
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_scores;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_load;
    QPushButton *pushButton_home;

    void setupUi(QMainWindow *student_info)
    {
        if (student_info->objectName().isEmpty())
            student_info->setObjectName("student_info");
        student_info->resize(559, 353);
        centralwidget = new QWidget(student_info);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableView_scores = new QTableView(centralwidget);
        tableView_scores->setObjectName("tableView_scores");

        verticalLayout->addWidget(tableView_scores);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
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

        horizontalLayout_4->addWidget(pushButton_load);

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

        horizontalLayout_4->addWidget(pushButton_home);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        student_info->setCentralWidget(centralwidget);

        retranslateUi(student_info);

        QMetaObject::connectSlotsByName(student_info);
    } // setupUi

    void retranslateUi(QMainWindow *student_info)
    {
        student_info->setWindowTitle(QCoreApplication::translate("student_info", "MainWindow", nullptr));
        pushButton_load->setText(QCoreApplication::translate("student_info", "Load Scores", nullptr));
        pushButton_home->setText(QCoreApplication::translate("student_info", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student_info: public Ui_student_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INFO_H
