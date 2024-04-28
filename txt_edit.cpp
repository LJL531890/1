#include "txt_edit.h"
#include "ui_txt_edit.h"

TxtEdit::TxtEdit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TxtEdit)
{
    ui->setupUi(this);
}

TxtEdit::~TxtEdit()
{
    delete ui;
}


