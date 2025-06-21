/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_registration
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_regname;
    QLineEdit *lineEdit_regphone;
    QLineEdit *lineEdit_regemail;
    QLineEdit *lineEdit_regpassword;
    QComboBox *comboBox_role;
    QCheckBox *checkBox;
    QPushButton *pushButton_register;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_loginpage;

    void setupUi(QMainWindow *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(623, 430);
        registration->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(registration);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 40, 401, 311));
        QFont font;
        font.setPointSize(11);
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
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_regname = new QLineEdit(groupBox);
        lineEdit_regname->setObjectName("lineEdit_regname");
        lineEdit_regname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_regname);

        lineEdit_regphone = new QLineEdit(groupBox);
        lineEdit_regphone->setObjectName("lineEdit_regphone");
        lineEdit_regphone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_regphone);

        lineEdit_regemail = new QLineEdit(groupBox);
        lineEdit_regemail->setObjectName("lineEdit_regemail");
        lineEdit_regemail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_regemail);

        lineEdit_regpassword = new QLineEdit(groupBox);
        lineEdit_regpassword->setObjectName("lineEdit_regpassword");
        lineEdit_regpassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_regpassword);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        comboBox_role = new QComboBox(groupBox);
        comboBox_role->addItem(QString());
        comboBox_role->addItem(QString());
        comboBox_role->addItem(QString());
        comboBox_role->setObjectName("comboBox_role");
        comboBox_role->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_4->addWidget(comboBox_role);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");

        verticalLayout_4->addWidget(checkBox);

        pushButton_register = new QPushButton(groupBox);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setFont(font);
        pushButton_register->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_4->addWidget(pushButton_register);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_loginpage = new QPushButton(groupBox);
        pushButton_loginpage->setObjectName("pushButton_loginpage");
        pushButton_loginpage->setFont(font);
        pushButton_loginpage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_3->addWidget(pushButton_loginpage);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        registration->setCentralWidget(centralwidget);

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QMainWindow *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("registration", "Register", nullptr));
        label_5->setText(QCoreApplication::translate("registration", "Create your Account Here", nullptr));
        label->setText(QCoreApplication::translate("registration", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("registration", "Phone No.", nullptr));
        label_3->setText(QCoreApplication::translate("registration", "Email ID", nullptr));
        label_4->setText(QCoreApplication::translate("registration", "Password", nullptr));
        comboBox_role->setItemText(0, QCoreApplication::translate("registration", "Student", nullptr));
        comboBox_role->setItemText(1, QCoreApplication::translate("registration", "Faculty Member", nullptr));
        comboBox_role->setItemText(2, QCoreApplication::translate("registration", "Teacher", nullptr));

        checkBox->setText(QCoreApplication::translate("registration", "I agree to terms and conditions", nullptr));
        pushButton_register->setText(QCoreApplication::translate("registration", "Register ", nullptr));
        pushButton_loginpage->setText(QCoreApplication::translate("registration", "Back to Login Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
