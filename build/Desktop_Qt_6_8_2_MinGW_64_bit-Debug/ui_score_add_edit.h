/********************************************************************************
** Form generated from reading UI file 'score_add_edit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_ADD_EDIT_H
#define UI_SCORE_ADD_EDIT_H

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

class Ui_score_add_edit
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QComboBox *comboBox_subject;
    QLineEdit *lineEdit_regno;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_mcq;
    QLineEdit *lineEdit_labexam;
    QLineEdit *lineEdit_1st_int;
    QLineEdit *lineEdit_2nd_int;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_add;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *score_add_edit)
    {
        if (score_add_edit->objectName().isEmpty())
            score_add_edit->setObjectName("score_add_edit");
        score_add_edit->resize(601, 366);
        centralwidget = new QWidget(score_add_edit);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 20, 351, 321));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 15px;\n"
"    margin-top: 10px; \n"
"    background-color:rgb(232, 232, 232,0);\n"
"    padding: 5px;\n"
" \n"
"}\n"
"\n"
""));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_2->setFont(font1);

        verticalLayout_4->addWidget(label_2);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font1);

        verticalLayout_4->addWidget(label);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
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

        verticalLayout_5->addWidget(comboBox_subject);

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

        verticalLayout_5->addWidget(lineEdit_regno);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);

        verticalLayout->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_mcq = new QLineEdit(groupBox);
        lineEdit_mcq->setObjectName("lineEdit_mcq");
        lineEdit_mcq->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_mcq);

        lineEdit_labexam = new QLineEdit(groupBox);
        lineEdit_labexam->setObjectName("lineEdit_labexam");
        lineEdit_labexam->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_labexam);

        lineEdit_1st_int = new QLineEdit(groupBox);
        lineEdit_1st_int->setObjectName("lineEdit_1st_int");
        lineEdit_1st_int->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_1st_int);

        lineEdit_2nd_int = new QLineEdit(groupBox);
        lineEdit_2nd_int->setObjectName("lineEdit_2nd_int");
        lineEdit_2nd_int->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_2nd_int);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName("pushButton_add");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
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


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_7->addLayout(verticalLayout_6);

        score_add_edit->setCentralWidget(centralwidget);

        retranslateUi(score_add_edit);

        QMetaObject::connectSlotsByName(score_add_edit);
    } // setupUi

    void retranslateUi(QMainWindow *score_add_edit)
    {
        score_add_edit->setWindowTitle(QCoreApplication::translate("score_add_edit", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("score_add_edit", "Add/Edit Information", nullptr));
        label_2->setText(QCoreApplication::translate("score_add_edit", "Subject :", nullptr));
        label->setText(QCoreApplication::translate("score_add_edit", "Reg. No. :", nullptr));
        comboBox_subject->setItemText(0, QCoreApplication::translate("score_add_edit", "EEEG 202", nullptr));
        comboBox_subject->setItemText(1, QCoreApplication::translate("score_add_edit", "EEEG 211", nullptr));
        comboBox_subject->setItemText(2, QCoreApplication::translate("score_add_edit", "COMP 202", nullptr));
        comboBox_subject->setItemText(3, QCoreApplication::translate("score_add_edit", "MATH 208", nullptr));
        comboBox_subject->setItemText(4, QCoreApplication::translate("score_add_edit", "MCSC 201", nullptr));

        lineEdit_regno->setText(QString());
        label_3->setText(QCoreApplication::translate("score_add_edit", "Type", nullptr));
        label_4->setText(QCoreApplication::translate("score_add_edit", "Score", nullptr));
        label_5->setText(QCoreApplication::translate("score_add_edit", "Mcq:", nullptr));
        label_7->setText(QCoreApplication::translate("score_add_edit", "Lab_exams:", nullptr));
        label_6->setText(QCoreApplication::translate("score_add_edit", "First Internal", nullptr));
        label_8->setText(QCoreApplication::translate("score_add_edit", "Second Internal", nullptr));
        lineEdit_mcq->setText(QString());
        lineEdit_labexam->setText(QString());
        lineEdit_1st_int->setText(QString());
        lineEdit_2nd_int->setText(QString());
        pushButton_add->setText(QCoreApplication::translate("score_add_edit", "Add Info", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("score_add_edit", "Edit Info", nullptr));
        pushButton_back->setText(QCoreApplication::translate("score_add_edit", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class score_add_edit: public Ui_score_add_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_ADD_EDIT_H
