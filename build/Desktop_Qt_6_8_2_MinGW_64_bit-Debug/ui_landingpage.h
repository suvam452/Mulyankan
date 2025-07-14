/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_landingpage
{
public:
    QAction *actionExit;
    QAction *actionContact_Us;
    QAction *actionProfile_Info;
    QAction *actionLogout;
    QWidget *centralwidget;
    QPushButton *pushButton_attendance;
    QPushButton *pushButton_assignment;
    QPushButton *pushButton_scores;
    QPushButton *pushButton_class_performance;
    QPushButton *pushButton_studentinto;
    QToolBar *toolBar;

    void setupUi(QMainWindow *landingpage)
    {
        if (landingpage->objectName().isEmpty())
            landingpage->setObjectName("landingpage");
        landingpage->resize(683, 456);
        landingpage->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)\n"
""));
        actionExit = new QAction(landingpage);
        actionExit->setObjectName("actionExit");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        actionExit->setIcon(icon);
        actionExit->setMenuRole(QAction::MenuRole::NoRole);
        actionContact_Us = new QAction(landingpage);
        actionContact_Us->setObjectName("actionContact_Us");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::Phone));
        actionContact_Us->setIcon(icon1);
        actionContact_Us->setMenuRole(QAction::MenuRole::NoRole);
        actionProfile_Info = new QAction(landingpage);
        actionProfile_Info->setObjectName("actionProfile_Info");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::CameraWeb));
        actionProfile_Info->setIcon(icon2);
        actionProfile_Info->setMenuRole(QAction::MenuRole::NoRole);
        actionLogout = new QAction(landingpage);
        actionLogout->setObjectName("actionLogout");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        actionLogout->setIcon(icon3);
        actionLogout->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(landingpage);
        centralwidget->setObjectName("centralwidget");
        pushButton_attendance = new QPushButton(centralwidget);
        pushButton_attendance->setObjectName("pushButton_attendance");
        pushButton_attendance->setGeometry(QRect(10, 30, 141, 101));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        pushButton_attendance->setFont(font);
        pushButton_attendance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        pushButton_assignment = new QPushButton(centralwidget);
        pushButton_assignment->setObjectName("pushButton_assignment");
        pushButton_assignment->setGeometry(QRect(160, 30, 141, 101));
        pushButton_assignment->setFont(font);
        pushButton_assignment->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        pushButton_scores = new QPushButton(centralwidget);
        pushButton_scores->setObjectName("pushButton_scores");
        pushButton_scores->setGeometry(QRect(310, 30, 141, 101));
        pushButton_scores->setFont(font);
        pushButton_scores->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        pushButton_class_performance = new QPushButton(centralwidget);
        pushButton_class_performance->setObjectName("pushButton_class_performance");
        pushButton_class_performance->setGeometry(QRect(460, 30, 141, 101));
        pushButton_class_performance->setFont(font);
        pushButton_class_performance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        pushButton_studentinto = new QPushButton(centralwidget);
        pushButton_studentinto->setObjectName("pushButton_studentinto");
        pushButton_studentinto->setGeometry(QRect(10, 140, 141, 101));
        pushButton_studentinto->setFont(font);
        pushButton_studentinto->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        landingpage->setCentralWidget(centralwidget);
        toolBar = new QToolBar(landingpage);
        toolBar->setObjectName("toolBar");
        landingpage->addToolBar(Qt::ToolBarArea::LeftToolBarArea, toolBar);

        toolBar->addAction(actionProfile_Info);
        toolBar->addAction(actionContact_Us);
        toolBar->addAction(actionExit);
        toolBar->addAction(actionLogout);

        retranslateUi(landingpage);

        QMetaObject::connectSlotsByName(landingpage);
    } // setupUi

    void retranslateUi(QMainWindow *landingpage)
    {
        landingpage->setWindowTitle(QCoreApplication::translate("landingpage", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("landingpage", "Exit", nullptr));
        actionContact_Us->setText(QCoreApplication::translate("landingpage", "Contact Us", nullptr));
        actionProfile_Info->setText(QCoreApplication::translate("landingpage", "Profile Info", nullptr));
        actionLogout->setText(QCoreApplication::translate("landingpage", "Logout", nullptr));
        pushButton_attendance->setText(QCoreApplication::translate("landingpage", "Attendance", nullptr));
        pushButton_assignment->setText(QCoreApplication::translate("landingpage", "Assignments", nullptr));
        pushButton_scores->setText(QCoreApplication::translate("landingpage", "Scores", nullptr));
        pushButton_class_performance->setText(QCoreApplication::translate("landingpage", "Class \n"
"Performace", nullptr));
        pushButton_studentinto->setText(QCoreApplication::translate("landingpage", "View \n"
"Student Info", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("landingpage", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class landingpage: public Ui_landingpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H
