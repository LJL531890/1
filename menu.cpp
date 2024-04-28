#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);

    is_new_folder = false;
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_property_btn_clicked()
{
    Property *property = new Property();
    property->show();
}

void Menu::on_new_folder_btn_clicked()
{
    qDebug() << "1" ;
    is_new_folder = true;
}

void Menu::on_compiler_btn_clicked()
{
    this->hide();
    black *c = new black();
    c->show();
}
