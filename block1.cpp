#include "block1.h"
#include "ui_block1.h"

block1::block1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::block1)
{
    ui->setupUi(this);
}

block1::~block1()
{
    delete ui;
}
