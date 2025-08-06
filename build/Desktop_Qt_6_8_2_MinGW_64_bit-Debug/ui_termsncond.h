/********************************************************************************
** Form generated from reading UI file 'termsncond.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMSNCOND_H
#define UI_TERMSNCOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_termsncond
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_back;

    void setupUi(QMainWindow *termsncond)
    {
        if (termsncond->objectName().isEmpty())
            termsncond->setObjectName("termsncond");
        termsncond->resize(485, 337);
        centralwidget = new QWidget(termsncond);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 651, 618));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
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

        verticalLayout_2->addWidget(pushButton_back);

        termsncond->setCentralWidget(centralwidget);

        retranslateUi(termsncond);

        QMetaObject::connectSlotsByName(termsncond);
    } // setupUi

    void retranslateUi(QMainWindow *termsncond)
    {
        termsncond->setWindowTitle(QCoreApplication::translate("termsncond", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("termsncond", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Terms and Conditions</span></p><p><span style=\" font-size:10pt;\">Welcome to Mulyankan. By using our app, you agree to the following Terms and Conditions. Please read them carefully.</span></p><p>1. Acceptance of Terms</p><p>By accessing or using Mulyankan, you agree to comply with and be bound by these Terms and Conditions. If you do not agree, you may not use the app.</p><p>2. Purpose of the App</p><p>Mulyankan is designed to provide Evaluation Information to students. The content, features, and services of the app are for educational purposes only.</p><p>3. User Conduct</p><p>You agree to use the app responsibly and only for lawful purposes.</p><p>Do not share, distribute, or upload any content that is harmful, illegal, or violates intellectual property rights.</p><p>Misuse of the app or its resources (e.g., hacking, unauthorized access) is prohibited.</p><p>4. Intellectual Property</p><p>All content, including graphics, and text, is t"
                        "he property of Mulyankan or its licensors.</p><p>5. Third-Party Links</p><p>Mulyankan may contain links to third-party websites. We are not responsible for the content or privacy practices of these sites. Use them at your own discretion.</p><p>6. Account Security</p><p>Users are responsible for maintaining the confidentiality of their login details and account. Any activity conducted under your account is your responsibility.</p><p>7. Limitation of Liability</p><p>Mulyankan is not liable for any errors, omissions, or inaccuracies in the content provided. Users are encouraged to verify the accuracy of resources independently.</p><p>8. Privacy Policy</p><p>Your use of the app is also governed by our Privacy Policy, which outlines how we collect, use, and protect your data.</p><p>9. Modifications to Terms</p><p>Mulyankan reserves the right to modify these Terms and Conditions at any time. Changes will be effective upon posting.</p><p>10. Termination of Use</p><p>We reserve the right to suspend or terminate your a"
                        "ccess to the app for violations of these terms without prior notice.</p><p><br/></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("termsncond", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class termsncond: public Ui_termsncond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMSNCOND_H
