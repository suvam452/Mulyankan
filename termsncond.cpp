#include "termsncond.h"
#include "ui_termsncond.h"

termsncond::termsncond(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::termsncond)
{
    ui->setupUi(this);
}

termsncond::~termsncond()
{
    delete ui;
}
