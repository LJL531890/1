#include "desktop.h"
#include "ui_widget.h"

Desktop::Desktop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Desktop)
{
    ui->setupUi(this);

    connect(ui->my_desktop, &QPushButton::clicked, this, &Desktop::on_my_desktop_clicked);
    connect(ui->task_manager, &QPushButton::clicked, this, &Desktop::on_task_manager_clicked);
//    connect(ui->pushButton_5,&QPushButton::clicked,[this]()
//    {
//        QMessageBox::information(this,"点击浏览","新型操作系统");
//    });

    //按钮上放图片
    QIcon con("D:\\qtonline\\run\\a.PNG");
    ui->my_desktop->setIcon(con);

    QIcon cod("D:\\qtonline\\run\\b.PNG");
    ui->task_manager->setIcon(cod);

}

Desktop::~Desktop()
{
    delete ui;
}


void Desktop::on_pushButton_4_clicked()
{
    //获取lineedit数据
//    QString program = ui->cmdLineEdit->text();

    //创建process对象
//    QProcess *myProcess = new QProcess(this);
//    myProcess->start(program);

}

void Desktop::on_pushButton_3_clicked()
{
    this->close();
}


void Desktop::on_pushButton_clicked()
{
//    this->hide();
//    Chat *c=new Chat();
//    c->show();
}

void Desktop::on_pushButton_2_clicked()
{
//    this->hide();
//    MainWindow *c=new MainWindow();
//    c->show();
}

void Desktop::on_my_desktop_clicked()
{
    Folder *c = new Folder();
    c->show();
}

void Desktop::on_task_manager_clicked()
{
    MainWindow *c=new MainWindow();
    c->show();
}
