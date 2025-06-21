/********************************************************************************
** Form generated from reading UI file 'updateaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEACCOUNT_H
#define UI_UPDATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateaccount
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
    QLineEdit *lineEdit_updtname;
    QLineEdit *lineEdit_updtphone;
    QLineEdit *lineEdit_updtemail;
    QLineEdit *lineEdit_updtpassword;
    QPushButton *pushButton_update;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_deleteacc;

    void setupUi(QMainWindow *updateaccount)
    {
        if (updateaccount->objectName().isEmpty())
            updateaccount->setObjectName("updateaccount");
        updateaccount->resize(630, 405);
        centralwidget = new QWidget(updateaccount);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 20, 401, 311));
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
        lineEdit_updtname = new QLineEdit(groupBox);
        lineEdit_updtname->setObjectName("lineEdit_updtname");
        lineEdit_updtname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_updtname);

        lineEdit_updtphone = new QLineEdit(groupBox);
        lineEdit_updtphone->setObjectName("lineEdit_updtphone");
        lineEdit_updtphone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_updtphone);

        lineEdit_updtemail = new QLineEdit(groupBox);
        lineEdit_updtemail->setObjectName("lineEdit_updtemail");
        lineEdit_updtemail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_updtemail);

        lineEdit_updtpassword = new QLineEdit(groupBox);
        lineEdit_updtpassword->setObjectName("lineEdit_updtpassword");
        lineEdit_updtpassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color: rgb(255, 255, 255,0);\n"
"    min-width: 8px; \n"
"    min-height: 8px;\n"
"    padding: 5px;\n"
"    margin: 0px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(lineEdit_updtpassword);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        pushButton_update = new QPushButton(groupBox);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setFont(font);
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_4->addWidget(pushButton_update);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_deleteacc = new QPushButton(groupBox);
        pushButton_deleteacc->setObjectName("pushButton_deleteacc");
        pushButton_deleteacc->setFont(font);
        pushButton_deleteacc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_3->addWidget(pushButton_deleteacc);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        updateaccount->setCentralWidget(centralwidget);

        retranslateUi(updateaccount);

        QMetaObject::connectSlotsByName(updateaccount);
    } // setupUi

    void retranslateUi(QMainWindow *updateaccount)
    {
        updateaccount->setWindowTitle(QCoreApplication::translate("updateaccount", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_5->setText(QCoreApplication::translate("updateaccount", "Update your Account Informaton here", nullptr));
        label->setText(QCoreApplication::translate("updateaccount", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("updateaccount", "Phone No.", nullptr));
        label_3->setText(QCoreApplication::translate("updateaccount", "Email ID", nullptr));
        label_4->setText(QCoreApplication::translate("updateaccount", "Password", nullptr));
        pushButton_update->setText(QCoreApplication::translate("updateaccount", "Update ", nullptr));
        pushButton_deleteacc->setText(QCoreApplication::translate("updateaccount", "Delete Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateaccount: public Ui_updateaccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEACCOUNT_H
