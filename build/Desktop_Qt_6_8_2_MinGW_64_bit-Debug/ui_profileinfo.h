/********************************************************************************
** Form generated from reading UI file 'profileinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEINFO_H
#define UI_PROFILEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profileinfo
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_phno;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_emailid;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *label_password;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *label_grade;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *label_role;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *label_reg_no;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_update;

    void setupUi(QMainWindow *profileinfo)
    {
        if (profileinfo->objectName().isEmpty())
            profileinfo->setObjectName("profileinfo");
        profileinfo->resize(574, 381);
        centralwidget = new QWidget(profileinfo);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 20, 451, 251));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 15px;\n"
"    margin-top: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    padding: 5px;\n"
"}"));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font;
        font.setBold(true);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        label_name = new QLabel(groupBox);
        label_name->setObjectName("label_name");

        horizontalLayout->addWidget(label_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        label_phno = new QLabel(groupBox);
        label_phno->setObjectName("label_phno");

        horizontalLayout_2->addWidget(label_phno);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_4->addWidget(label_8);

        label_emailid = new QLabel(groupBox);
        label_emailid->setObjectName("label_emailid");

        horizontalLayout_4->addWidget(label_emailid);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        label_password = new QLabel(groupBox);
        label_password->setObjectName("label_password");

        horizontalLayout_3->addWidget(label_password);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_6->addWidget(label_9);

        label_grade = new QLabel(groupBox);
        label_grade->setObjectName("label_grade");

        horizontalLayout_6->addWidget(label_grade);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout_7->addWidget(label_10);

        label_role = new QLabel(groupBox);
        label_role->setObjectName("label_role");

        horizontalLayout_7->addWidget(label_role);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        horizontalLayout_5->addWidget(label_11);

        label_reg_no = new QLabel(groupBox);
        label_reg_no->setObjectName("label_reg_no");

        horizontalLayout_5->addWidget(label_reg_no);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(220, 300, 131, 71));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_delete = new QPushButton(layoutWidget_3);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 10px; \n"
"    background-color:rgb(236, 0, 0);\n"
"    min-width: 10px; \n"
"    min-height: 10px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_3->addWidget(pushButton_delete);

        pushButton_update = new QPushButton(layoutWidget_3);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setFont(font);
        pushButton_update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 10px; \n"
"    min-height: 10px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_3->addWidget(pushButton_update);

        profileinfo->setCentralWidget(centralwidget);

        retranslateUi(profileinfo);

        QMetaObject::connectSlotsByName(profileinfo);
    } // setupUi

    void retranslateUi(QMainWindow *profileinfo)
    {
        profileinfo->setWindowTitle(QCoreApplication::translate("profileinfo", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("profileinfo", "Profile Information", nullptr));
        label_2->setText(QCoreApplication::translate("profileinfo", "Name:", nullptr));
        label_name->setText(QString());
        label_4->setText(QCoreApplication::translate("profileinfo", "Phone NO.:", nullptr));
        label_phno->setText(QString());
        label_8->setText(QCoreApplication::translate("profileinfo", "EMAIL/ UserName:", nullptr));
        label_emailid->setText(QString());
        label_6->setText(QCoreApplication::translate("profileinfo", "Password:", nullptr));
        label_password->setText(QString());
        label_9->setText(QCoreApplication::translate("profileinfo", "Grade:", nullptr));
        label_grade->setText(QString());
        label_10->setText(QCoreApplication::translate("profileinfo", "Role:", nullptr));
        label_role->setText(QString());
        label_11->setText(QCoreApplication::translate("profileinfo", "Reg No.:", nullptr));
        label_reg_no->setText(QString());
        pushButton_delete->setText(QCoreApplication::translate("profileinfo", "DELETE ACCOUNT", nullptr));
        pushButton_update->setText(QCoreApplication::translate("profileinfo", "UPDATE INFO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profileinfo: public Ui_profileinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEINFO_H
