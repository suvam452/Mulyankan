#include "mainwindow.h"
#include<QSplashScreen>
#include <QApplication>
#include<QTimer>
#include<QScreen>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/image/img/ChatGPT Image Jun 11, 2025, 05_45_04 PM.png"));
    splash->show();

    QTimer::singleShot(1500,splash,SLOT(close()));
    QTimer::singleShot(1500,&w,SLOT(show()));
    // w.show();

    return a.exec();
}
