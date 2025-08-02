/********************************************************************************
** Form generated from reading UI file 'score_teacher.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_TEACHER_H
#define UI_SCORE_TEACHER_H

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

class Ui_score_teacher
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_subject;
    QTableView *tableView_scores;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_load;
    QPushButton *pushButton_home;
    QPushButton *pushButton_add_edit;

    void setupUi(QMainWindow *score_teacher)
    {
        if (score_teacher->objectName().isEmpty())
            score_teacher->setObjectName("score_teacher");
        score_teacher->resize(546, 352);
        centralwidget = new QWidget(score_teacher);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
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

        horizontalLayout->addWidget(comboBox_subject);


        verticalLayout->addLayout(horizontalLayout);

        tableView_scores = new QTableView(centralwidget);
        tableView_scores->setObjectName("tableView_scores");
        tableView_scores->setStyleSheet(QString::fromUtf8("QTableView {\n"
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

        pushButton_add_edit = new QPushButton(centralwidget);
        pushButton_add_edit->setObjectName("pushButton_add_edit");
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        pushButton_add_edit->setFont(font1);
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

        horizontalLayout_4->addWidget(pushButton_add_edit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        score_teacher->setCentralWidget(centralwidget);

        retranslateUi(score_teacher);

        QMetaObject::connectSlotsByName(score_teacher);
    } // setupUi

    void retranslateUi(QMainWindow *score_teacher)
    {
        score_teacher->setWindowTitle(QCoreApplication::translate("score_teacher", "MainWindow", nullptr));
        comboBox_subject->setItemText(0, QCoreApplication::translate("score_teacher", "EEEG 202", nullptr));
        comboBox_subject->setItemText(1, QCoreApplication::translate("score_teacher", "MCSC 201", nullptr));
        comboBox_subject->setItemText(2, QCoreApplication::translate("score_teacher", "COMP 202", nullptr));
        comboBox_subject->setItemText(3, QCoreApplication::translate("score_teacher", "EEEG 211", nullptr));
        comboBox_subject->setItemText(4, QCoreApplication::translate("score_teacher", "MATH 208", nullptr));

        pushButton_load->setText(QCoreApplication::translate("score_teacher", "Load Scores", nullptr));
        pushButton_home->setText(QCoreApplication::translate("score_teacher", "Back to Home", nullptr));
        pushButton_add_edit->setText(QCoreApplication::translate("score_teacher", "Add/Edit score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class score_teacher: public Ui_score_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_TEACHER_H
