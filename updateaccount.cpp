#include "updateaccount.h"
#include "ui_updateaccount.h"

updateaccount::updateaccount(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::updateaccount)
{
    ui->setupUi(this);
}

updateaccount::~updateaccount()
{
    delete ui;
}
