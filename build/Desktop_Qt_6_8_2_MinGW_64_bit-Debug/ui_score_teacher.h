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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_regno_toshow;
    QPushButton *pushButton_2;
    QTableView *tableView_scores;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_load;
    QPushButton *pushButton_home;

    void setupUi(QMainWindow *score_teacher)
    {
        if (score_teacher->objectName().isEmpty())
            score_teacher->setObjectName("score_teacher");
        score_teacher->resize(546, 352);
        centralwidget = new QWidget(score_teacher);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(111, 21, 258, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_regno_toshow = new QLineEdit(widget);
        lineEdit_regno_toshow->setObjectName("lineEdit_regno_toshow");

        horizontalLayout->addWidget(lineEdit_regno_toshow);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        tableView_scores = new QTableView(widget);
        tableView_scores->setObjectName("tableView_scores");

        verticalLayout->addWidget(tableView_scores);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_load = new QPushButton(widget);
        pushButton_load->setObjectName("pushButton_load");
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

        pushButton_home = new QPushButton(widget);
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

        score_teacher->setCentralWidget(centralwidget);

        retranslateUi(score_teacher);

        QMetaObject::connectSlotsByName(score_teacher);
    } // setupUi

    void retranslateUi(QMainWindow *score_teacher)
    {
        score_teacher->setWindowTitle(QCoreApplication::translate("score_teacher", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("score_teacher", "Reg No:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("score_teacher", "Save ", nullptr));
        pushButton_load->setText(QCoreApplication::translate("score_teacher", "Load Scores", nullptr));
        pushButton_home->setText(QCoreApplication::translate("score_teacher", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class score_teacher: public Ui_score_teacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_TEACHER_H
