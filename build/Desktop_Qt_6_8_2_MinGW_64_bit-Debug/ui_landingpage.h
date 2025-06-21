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
    QAction *actionHome;
    QAction *actionExit;
    QAction *actionContact_Us;
    QAction *actionProfile_Info;
    QAction *actionLogout;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolBar *toolBar;

    void setupUi(QMainWindow *landingpage)
    {
        if (landingpage->objectName().isEmpty())
            landingpage->setObjectName("landingpage");
        landingpage->resize(642, 415);
        landingpage->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)\n"
""));
        actionHome = new QAction(landingpage);
        actionHome->setObjectName("actionHome");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        actionHome->setIcon(icon);
        actionHome->setMenuRole(QAction::MenuRole::NoRole);
        actionExit = new QAction(landingpage);
        actionExit->setObjectName("actionExit");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        actionExit->setIcon(icon1);
        actionExit->setMenuRole(QAction::MenuRole::NoRole);
        actionContact_Us = new QAction(landingpage);
        actionContact_Us->setObjectName("actionContact_Us");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::Phone));
        actionContact_Us->setIcon(icon2);
        actionContact_Us->setMenuRole(QAction::MenuRole::NoRole);
        actionProfile_Info = new QAction(landingpage);
        actionProfile_Info->setObjectName("actionProfile_Info");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::CameraWeb));
        actionProfile_Info->setIcon(icon3);
        actionProfile_Info->setMenuRole(QAction::MenuRole::NoRole);
        actionLogout = new QAction(landingpage);
        actionLogout->setObjectName("actionLogout");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        actionLogout->setIcon(icon4);
        actionLogout->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(landingpage);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 30, 141, 101));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        pushButton->setFont(font);
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
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 30, 141, 101));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 30, 141, 101));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid rgb(16, 16, 16);\n"
"    border-radius: 10px; \n"
"    background-color:rgb(255, 255, 255,0);\n"
"    min-width: 9px; \n"
"    min-height: 9px; \n"
"    padding: 5px; \n"
"    margin: 0px; \n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(460, 30, 141, 101));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        toolBar->addAction(actionHome);
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
        actionHome->setText(QCoreApplication::translate("landingpage", "Home", nullptr));
        actionExit->setText(QCoreApplication::translate("landingpage", "Exit", nullptr));
        actionContact_Us->setText(QCoreApplication::translate("landingpage", "Contact Us", nullptr));
        actionProfile_Info->setText(QCoreApplication::translate("landingpage", "Profile Info", nullptr));
        actionLogout->setText(QCoreApplication::translate("landingpage", "Logout", nullptr));
        pushButton->setText(QCoreApplication::translate("landingpage", "Attendance", nullptr));
        pushButton_2->setText(QCoreApplication::translate("landingpage", "Assignments", nullptr));
        pushButton_3->setText(QCoreApplication::translate("landingpage", "Scores", nullptr));
        pushButton_4->setText(QCoreApplication::translate("landingpage", "Class \n"
"Performace", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("landingpage", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class landingpage: public Ui_landingpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H
