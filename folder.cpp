#include "folder.h"
#include "ui_chat.h"


Folder::Folder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Folder)
{
    ui->setupUi(this);

    timer.setInterval(500);
    connect(&timer, &QTimer::timeout, this, &Folder::new_folder);
    timer.start(); // 启动定时器

    next_x = 240;
    next_y = 40;

    num = 0;
    time_Start = 0 ;
    time_End = 0 ;

    menu->setWindowFlags(Qt::FramelessWindowHint);

    connect(ui->back_btn, &QPushButton::clicked, this, &Folder::on_back_btn_clicked);
    //connect(ui->new_folder_btn, &QPushButton::clicked, this, &Folder::on_new_folder_clicked);

    //按钮上放图片
    QIcon con("D:\\qtonline\\run\\h.PNG");
    ui->folder3->setIcon(con);

    QIcon cod("D:\\qtonline\\run\\h.PNG");
    ui->folder1->setIcon(cod);

    QIcon cof("D:\\qtonline\\run\\h.PNG");
    ui->folder2->setIcon(cof);

}


Folder::~Folder()
{
    delete ui;
}


void Folder::on_pushButton_1_clicked()
{
    this->hide();
    file1 *c = new file1();
    c->show();
}


void Folder::on_back_btn_clicked()
{
    this->hide();
}


void Folder::new_folder()
{
    if (menu->is_new_folder == false) {
        return;
    }
    menu->is_new_folder = false;

    // 创建新的按钮
    QPushButton *newButton = new QPushButton("", this);

    newButton->setGeometry(next_x, next_y, 65, 65);
    QIcon cog("D:\\qtonline\\run\\h.PNG");
    newButton->setIcon(cog);
    newButton->setIconSize(QSize(50, 50));

    next_x += 80;
    if(next_x>=455)
    {
    next_y += 80;
    next_x = 0;
    }
    newButton->show();

    // 添加新按钮到布局
    // layout()->addWidget(newButton);

    // 连接新按钮的点击信号到槽函数
    // connect(newButton, &QPushButton::clicked, this, &Folder::on_back_btn_clicked);

    qDebug() << "创建成功";
}



void Folder::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->x() << ":" << event->y();
    if(event->button() == Qt::LeftButton) {
        menu->hide();
    }

    else if(event->button() == Qt::RightButton) {
        QPoint globalPos = mapToGlobal(event->pos());  // 获取鼠标事件的全局坐标
        menu->move(globalPos);  // 将菜单移动到全局坐标位置
        //menu->move(event->x(), event->y());
        menu->show();

        qDebug() << "2" ;

    }
}


void Folder::mouseDoubleClickEvent(QMouseEvent *event)
{

}

void Folder::on_folder3_clicked()
{
    num+=1;
    if(num == 1){
        time_Start = (double)clock();
        qDebug()<< "num == 1";
        if((time_Start - time_End) < 400){//连续快速两次单击
            //
            qDebug()<< "click quickly " << time_Start - time_End ;
        }
    }

    if(num == 2){
        num = 0;
        qDebug()<< "num == 2";
        time_End = (double)clock();
        if((time_End - time_Start) < 300){//连续快速两次单击
            TxtEdit *txt_edit = new TxtEdit();
            txt_edit->show();
            qDebug()<< "click quickly " << time_End - time_Start ;
        }
    }
}
