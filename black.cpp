#include "black.h"
#include "ui_black.h"

black::black(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::black)
{
    ui->setupUi(this);

}

black::~black()
{
    delete ui;
}

void black::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
            painter.drawPixmap(0,0,width(),height(),QPixmap("D:\\qtonline\\run\\i.PNG"));
}
