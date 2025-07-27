/********************************************************************************
** Form generated from reading UI file 'task_view.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_VIEW_H
#define UI_TASK_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_task_view
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label_task_view;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *task_view)
    {
        if (task_view->objectName().isEmpty())
            task_view->setObjectName("task_view");
        task_view->resize(634, 394);
        centralwidget = new QWidget(task_view);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 618, 344));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        label_task_view = new QLabel(scrollAreaWidgetContents);
        label_task_view->setObjectName("label_task_view");

        verticalLayout->addWidget(label_task_view);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName("pushButton_delete");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_delete);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setFont(font);
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


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        task_view->setCentralWidget(centralwidget);

        retranslateUi(task_view);

        QMetaObject::connectSlotsByName(task_view);
    } // setupUi

    void retranslateUi(QMainWindow *task_view)
    {
        task_view->setWindowTitle(QCoreApplication::translate("task_view", "MainWindow", nullptr));
        label_task_view->setText(QString());
        pushButton_delete->setText(QCoreApplication::translate("task_view", "Delete", nullptr));
        pushButton_back->setText(QCoreApplication::translate("task_view", "Back ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class task_view: public Ui_task_view {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_VIEW_H
