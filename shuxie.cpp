#include "shuxie.h"
#include "ui_shuxie.h"

shuxie::shuxie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::shuxie)
{
    ui->setupUi(this);
}

shuxie::~shuxie()
{
    delete ui;
}
