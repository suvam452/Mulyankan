/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_score
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_regno;
    QTableView *tableView_scores;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_home;

    void setupUi(QMainWindow *score)
    {
        if (score->objectName().isEmpty())
            score->setObjectName("score");
        score->resize(642, 412);
        centralwidget = new QWidget(score);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        label_name->setFont(font1);

        horizontalLayout->addWidget(label_name);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        label_regno = new QLabel(centralwidget);
        label_regno->setObjectName("label_regno");
        QFont font2;
        font2.setPointSize(10);
        label_regno->setFont(font2);

        horizontalLayout_2->addWidget(label_regno);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        tableView_scores = new QTableView(centralwidget);
        tableView_scores->setObjectName("tableView_scores");

        verticalLayout->addWidget(tableView_scores);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QFont font3;
        font3.setBold(true);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_home = new QPushButton(centralwidget);
        pushButton_home->setObjectName("pushButton_home");
        pushButton_home->setFont(font3);
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


        verticalLayout_2->addLayout(verticalLayout);

        score->setCentralWidget(centralwidget);

        retranslateUi(score);

        QMetaObject::connectSlotsByName(score);
    } // setupUi

    void retranslateUi(QMainWindow *score)
    {
        score->setWindowTitle(QCoreApplication::translate("score", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("score", "Name:", nullptr));
        label_name->setText(QString());
        label_2->setText(QCoreApplication::translate("score", "Reg. No.:", nullptr));
        label_regno->setText(QString());
        pushButton->setText(QCoreApplication::translate("score", "Load Scores", nullptr));
        pushButton_home->setText(QCoreApplication::translate("score", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class score: public Ui_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
