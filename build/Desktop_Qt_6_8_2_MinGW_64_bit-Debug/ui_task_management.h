/********************************************************************************
** Form generated from reading UI file 'task_management.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_MANAGEMENT_H
#define UI_TASK_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task_management
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit_task;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_saveTask;
    QPushButton *pushButton_show_task;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *task_management)
    {
        if (task_management->objectName().isEmpty())
            task_management->setObjectName("task_management");
        task_management->resize(592, 453);
        centralwidget = new QWidget(task_management);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        textEdit_task = new QTextEdit(centralwidget);
        textEdit_task->setObjectName("textEdit_task");
        textEdit_task->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px;\n"
"    background-color: rgba(255, 255, 255, 0); /* Transparent background */\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"    color: black; /* Text color */\n"
"    selection-background-color: rgba(135, 206, 250, 180); /* Light blue selection */\n"
"}\n"
""));

        verticalLayout->addWidget(textEdit_task);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_saveTask = new QPushButton(centralwidget);
        pushButton_saveTask->setObjectName("pushButton_saveTask");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton_saveTask->setFont(font1);
        pushButton_saveTask->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_saveTask);

        pushButton_show_task = new QPushButton(centralwidget);
        pushButton_show_task->setObjectName("pushButton_show_task");
        pushButton_show_task->setFont(font1);
        pushButton_show_task->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_show_task);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setFont(font1);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_back);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        task_management->setCentralWidget(centralwidget);

        retranslateUi(task_management);

        QMetaObject::connectSlotsByName(task_management);
    } // setupUi

    void retranslateUi(QMainWindow *task_management)
    {
        task_management->setWindowTitle(QCoreApplication::translate("task_management", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("task_management", "Enter Task Details:", nullptr));
        pushButton_saveTask->setText(QCoreApplication::translate("task_management", "Save Task ", nullptr));
        pushButton_show_task->setText(QCoreApplication::translate("task_management", "Show Task", nullptr));
        pushButton_back->setText(QCoreApplication::translate("task_management", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task_management: public Ui_task_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_MANAGEMENT_H
