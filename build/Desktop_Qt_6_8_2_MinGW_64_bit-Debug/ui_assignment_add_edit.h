/********************************************************************************
** Form generated from reading UI file 'assignment_add_edit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNMENT_ADD_EDIT_H
#define UI_ASSIGNMENT_ADD_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_assignment_add_edit
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_subject;
    QPushButton *pushButton_add_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_regno;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_assignmen_value_1;
    QComboBox *comboBox_assignmen_value_2;
    QComboBox *comboBox_assignmen_value_3;
    QComboBox *comboBox_assignmen_value_4;
    QComboBox *comboBox_assignmen_value_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_add;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *assignment_add_edit)
    {
        if (assignment_add_edit->objectName().isEmpty())
            assignment_add_edit->setObjectName("assignment_add_edit");
        assignment_add_edit->resize(568, 378);
        centralwidget = new QWidget(assignment_add_edit);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 15px;\n"
"    margin-top: 10px; \n"
"    background-color:rgb(232, 232, 232);\n"
"    padding: 5px;\n"
" \n"
"}\n"
"\n"
""));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        comboBox_subject = new QComboBox(groupBox);
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

        horizontalLayout_2->addWidget(comboBox_subject);

        pushButton_add_2 = new QPushButton(groupBox);
        pushButton_add_2->setObjectName("pushButton_add_2");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        pushButton_add_2->setFont(font2);
        pushButton_add_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton_add_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout_3->addWidget(label);

        lineEdit_regno = new QLineEdit(groupBox);
        lineEdit_regno->setObjectName("lineEdit_regno");
        lineEdit_regno->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(lineEdit_regno);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        comboBox_assignmen_value_1 = new QComboBox(groupBox);
        comboBox_assignmen_value_1->addItem(QString());
        comboBox_assignmen_value_1->addItem(QString());
        comboBox_assignmen_value_1->setObjectName("comboBox_assignmen_value_1");
        comboBox_assignmen_value_1->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(comboBox_assignmen_value_1);

        comboBox_assignmen_value_2 = new QComboBox(groupBox);
        comboBox_assignmen_value_2->addItem(QString());
        comboBox_assignmen_value_2->addItem(QString());
        comboBox_assignmen_value_2->setObjectName("comboBox_assignmen_value_2");
        comboBox_assignmen_value_2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(comboBox_assignmen_value_2);

        comboBox_assignmen_value_3 = new QComboBox(groupBox);
        comboBox_assignmen_value_3->addItem(QString());
        comboBox_assignmen_value_3->addItem(QString());
        comboBox_assignmen_value_3->setObjectName("comboBox_assignmen_value_3");
        comboBox_assignmen_value_3->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(comboBox_assignmen_value_3);

        comboBox_assignmen_value_4 = new QComboBox(groupBox);
        comboBox_assignmen_value_4->addItem(QString());
        comboBox_assignmen_value_4->addItem(QString());
        comboBox_assignmen_value_4->setObjectName("comboBox_assignmen_value_4");
        comboBox_assignmen_value_4->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(comboBox_assignmen_value_4);

        comboBox_assignmen_value_5 = new QComboBox(groupBox);
        comboBox_assignmen_value_5->addItem(QString());
        comboBox_assignmen_value_5->addItem(QString());
        comboBox_assignmen_value_5->setObjectName("comboBox_assignmen_value_5");
        comboBox_assignmen_value_5->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(comboBox_assignmen_value_5);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setFont(font2);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_add);

        pushButton_edit = new QPushButton(groupBox);
        pushButton_edit->setObjectName("pushButton_edit");
        pushButton_edit->setFont(font2);
        pushButton_edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_edit);

        pushButton_back = new QPushButton(groupBox);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setFont(font2);
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

        horizontalLayout_4->addWidget(pushButton_back);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addWidget(groupBox);

        assignment_add_edit->setCentralWidget(centralwidget);

        retranslateUi(assignment_add_edit);

        QMetaObject::connectSlotsByName(assignment_add_edit);
    } // setupUi

    void retranslateUi(QMainWindow *assignment_add_edit)
    {
        assignment_add_edit->setWindowTitle(QCoreApplication::translate("assignment_add_edit", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("assignment_add_edit", "Add/Edit Information", nullptr));
        label_2->setText(QCoreApplication::translate("assignment_add_edit", "Subject:", nullptr));
        comboBox_subject->setItemText(0, QCoreApplication::translate("assignment_add_edit", "EEEG 202", nullptr));
        comboBox_subject->setItemText(1, QCoreApplication::translate("assignment_add_edit", "EEEG 211", nullptr));
        comboBox_subject->setItemText(2, QCoreApplication::translate("assignment_add_edit", "COMP 202", nullptr));
        comboBox_subject->setItemText(3, QCoreApplication::translate("assignment_add_edit", "MATH 208", nullptr));
        comboBox_subject->setItemText(4, QCoreApplication::translate("assignment_add_edit", "MCSC 201", nullptr));

        pushButton_add_2->setText(QCoreApplication::translate("assignment_add_edit", "Save", nullptr));
        label->setText(QCoreApplication::translate("assignment_add_edit", "Reg. No. :", nullptr));
        lineEdit_regno->setText(QString());
        label_3->setText(QCoreApplication::translate("assignment_add_edit", "Assignment 1:", nullptr));
        label_4->setText(QCoreApplication::translate("assignment_add_edit", "Assignment 2:", nullptr));
        label_5->setText(QCoreApplication::translate("assignment_add_edit", "Assignment 3:", nullptr));
        label_6->setText(QCoreApplication::translate("assignment_add_edit", "Assignment 4:", nullptr));
        label_7->setText(QCoreApplication::translate("assignment_add_edit", "Assignment 5:", nullptr));
        comboBox_assignmen_value_1->setItemText(0, QCoreApplication::translate("assignment_add_edit", "Submitted", nullptr));
        comboBox_assignmen_value_1->setItemText(1, QCoreApplication::translate("assignment_add_edit", "Not Submitted", nullptr));

        comboBox_assignmen_value_2->setItemText(0, QCoreApplication::translate("assignment_add_edit", "Submitted", nullptr));
        comboBox_assignmen_value_2->setItemText(1, QCoreApplication::translate("assignment_add_edit", "Not Submitted", nullptr));

        comboBox_assignmen_value_3->setItemText(0, QCoreApplication::translate("assignment_add_edit", "Submitted", nullptr));
        comboBox_assignmen_value_3->setItemText(1, QCoreApplication::translate("assignment_add_edit", "Not Submitted", nullptr));

        comboBox_assignmen_value_4->setItemText(0, QCoreApplication::translate("assignment_add_edit", "Submitted", nullptr));
        comboBox_assignmen_value_4->setItemText(1, QCoreApplication::translate("assignment_add_edit", "Not Submitted", nullptr));

        comboBox_assignmen_value_5->setItemText(0, QCoreApplication::translate("assignment_add_edit", "Submitted", nullptr));
        comboBox_assignmen_value_5->setItemText(1, QCoreApplication::translate("assignment_add_edit", "Not Submitted", nullptr));

        pushButton_add->setText(QCoreApplication::translate("assignment_add_edit", "Add Info", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("assignment_add_edit", "Edit Info", nullptr));
        pushButton_back->setText(QCoreApplication::translate("assignment_add_edit", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class assignment_add_edit: public Ui_assignment_add_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNMENT_ADD_EDIT_H
