#include "landingpage.h"
#include "ui_landingpage.h"

landingpage::landingpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::landingpage)
{
    ui->setupUi(this);
}

landingpage::~landingpage()
{
    delete ui;
}
