/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

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

class Ui_contactus
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_email;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *contactus)
    {
        if (contactus->objectName().isEmpty())
            contactus->setObjectName("contactus");
        contactus->resize(616, 417);
        centralwidget = new QWidget(contactus);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 110, 351, 181));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_email = new QPushButton(groupBox);
        pushButton_email->setObjectName("pushButton_email");
        pushButton_email->setFont(font);
        pushButton_email->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 10px; \n"
"    min-height: 10px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(pushButton_email);

        pushButton_back = new QPushButton(groupBox);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setFont(font);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 10px; \n"
"    min-height: 10px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        verticalLayout_2->addWidget(pushButton_back);

        contactus->setCentralWidget(centralwidget);

        retranslateUi(contactus);

        QMetaObject::connectSlotsByName(contactus);
    } // setupUi

    void retranslateUi(QMainWindow *contactus)
    {
        contactus->setWindowTitle(QCoreApplication::translate("contactus", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("contactus", "CONTACT US", nullptr));
        label_3->setText(QCoreApplication::translate("contactus", "Contact No.    :", nullptr));
        label->setText(QCoreApplication::translate("contactus", "+977-9800000000", nullptr));
        label_4->setText(QCoreApplication::translate("contactus", "Email Address :", nullptr));
        label_2->setText(QCoreApplication::translate("contactus", "mulyankanteam@gmail.com", nullptr));
        pushButton_email->setText(QCoreApplication::translate("contactus", "Email Us", nullptr));
        pushButton_back->setText(QCoreApplication::translate("contactus", "Back to login page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contactus: public Ui_contactus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
