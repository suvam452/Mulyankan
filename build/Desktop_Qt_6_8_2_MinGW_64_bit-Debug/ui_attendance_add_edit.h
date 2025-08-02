/********************************************************************************
** Form generated from reading UI file 'attendance_add_edit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTENDANCE_ADD_EDIT_H
#define UI_ATTENDANCE_ADD_EDIT_H

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

class Ui_attendance_add_edit
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_regno;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_day;
    QComboBox *comboBox_day_value;
    QPushButton *pushButton_add;
    QPushButton *pushButton_edit;

    void setupUi(QMainWindow *attendance_add_edit)
    {
        if (attendance_add_edit->objectName().isEmpty())
            attendance_add_edit->setObjectName("attendance_add_edit");
        attendance_add_edit->resize(624, 393);
        attendance_add_edit->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 15px;\n"
"    margin-top: 10px; \n"
"    background-color:rgb(232, 232, 232);\n"
"    padding: 5px;\n"
" \n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(attendance_add_edit);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 100, 351, 171));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
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

        verticalLayout_2->addWidget(lineEdit_regno);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox_day = new QComboBox(groupBox);
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->addItem(QString());
        comboBox_day->setObjectName("comboBox_day");
        comboBox_day->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(comboBox_day);

        comboBox_day_value = new QComboBox(groupBox);
        comboBox_day_value->addItem(QString());
        comboBox_day_value->addItem(QString());
        comboBox_day_value->setObjectName("comboBox_day_value");
        comboBox_day_value->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(comboBox_day_value);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName("pushButton_add");
        QFont font2;
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

        verticalLayout_3->addWidget(pushButton_add);

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

        verticalLayout_3->addWidget(pushButton_edit);


        verticalLayout_4->addLayout(verticalLayout_3);

        attendance_add_edit->setCentralWidget(centralwidget);

        retranslateUi(attendance_add_edit);

        QMetaObject::connectSlotsByName(attendance_add_edit);
    } // setupUi

    void retranslateUi(QMainWindow *attendance_add_edit)
    {
        attendance_add_edit->setWindowTitle(QCoreApplication::translate("attendance_add_edit", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("attendance_add_edit", "Add/Edit Information", nullptr));
        label->setText(QCoreApplication::translate("attendance_add_edit", "Reg. No. :", nullptr));
        label_3->setText(QCoreApplication::translate("attendance_add_edit", "Day: ", nullptr));
        lineEdit_regno->setText(QString());
        comboBox_day->setItemText(0, QCoreApplication::translate("attendance_add_edit", "day1", nullptr));
        comboBox_day->setItemText(1, QCoreApplication::translate("attendance_add_edit", "day2", nullptr));
        comboBox_day->setItemText(2, QCoreApplication::translate("attendance_add_edit", "day3", nullptr));
        comboBox_day->setItemText(3, QCoreApplication::translate("attendance_add_edit", "day4", nullptr));
        comboBox_day->setItemText(4, QCoreApplication::translate("attendance_add_edit", "day5", nullptr));
        comboBox_day->setItemText(5, QCoreApplication::translate("attendance_add_edit", "day6", nullptr));
        comboBox_day->setItemText(6, QCoreApplication::translate("attendance_add_edit", "day7", nullptr));
        comboBox_day->setItemText(7, QCoreApplication::translate("attendance_add_edit", "day8", nullptr));
        comboBox_day->setItemText(8, QCoreApplication::translate("attendance_add_edit", "day9", nullptr));
        comboBox_day->setItemText(9, QCoreApplication::translate("attendance_add_edit", "day10", nullptr));
        comboBox_day->setItemText(10, QCoreApplication::translate("attendance_add_edit", "day11", nullptr));
        comboBox_day->setItemText(11, QCoreApplication::translate("attendance_add_edit", "day12", nullptr));
        comboBox_day->setItemText(12, QCoreApplication::translate("attendance_add_edit", "day13", nullptr));
        comboBox_day->setItemText(13, QCoreApplication::translate("attendance_add_edit", "day14", nullptr));
        comboBox_day->setItemText(14, QCoreApplication::translate("attendance_add_edit", "day15", nullptr));
        comboBox_day->setItemText(15, QCoreApplication::translate("attendance_add_edit", "day16", nullptr));
        comboBox_day->setItemText(16, QCoreApplication::translate("attendance_add_edit", "day17", nullptr));
        comboBox_day->setItemText(17, QCoreApplication::translate("attendance_add_edit", "day18", nullptr));
        comboBox_day->setItemText(18, QCoreApplication::translate("attendance_add_edit", "day19", nullptr));
        comboBox_day->setItemText(19, QCoreApplication::translate("attendance_add_edit", "day20", nullptr));
        comboBox_day->setItemText(20, QCoreApplication::translate("attendance_add_edit", "day21", nullptr));
        comboBox_day->setItemText(21, QCoreApplication::translate("attendance_add_edit", "day22", nullptr));
        comboBox_day->setItemText(22, QCoreApplication::translate("attendance_add_edit", "day23", nullptr));
        comboBox_day->setItemText(23, QCoreApplication::translate("attendance_add_edit", "day24", nullptr));
        comboBox_day->setItemText(24, QCoreApplication::translate("attendance_add_edit", "day25", nullptr));
        comboBox_day->setItemText(25, QCoreApplication::translate("attendance_add_edit", "day26", nullptr));
        comboBox_day->setItemText(26, QCoreApplication::translate("attendance_add_edit", "day27", nullptr));
        comboBox_day->setItemText(27, QCoreApplication::translate("attendance_add_edit", "day28", nullptr));
        comboBox_day->setItemText(28, QCoreApplication::translate("attendance_add_edit", "day29", nullptr));
        comboBox_day->setItemText(29, QCoreApplication::translate("attendance_add_edit", "day30", nullptr));

        comboBox_day_value->setItemText(0, QCoreApplication::translate("attendance_add_edit", "Present", nullptr));
        comboBox_day_value->setItemText(1, QCoreApplication::translate("attendance_add_edit", "Absent", nullptr));

        pushButton_add->setText(QCoreApplication::translate("attendance_add_edit", "Add Info", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("attendance_add_edit", "Edit Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class attendance_add_edit: public Ui_attendance_add_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTENDANCE_ADD_EDIT_H
