#ifndef CHAT_H
#define CHAT_H

#include <QFileDialog>
#include <QPushButton>
#include <QDebug>
#include <QWidget>
#include <QMouseEvent>
#include <QMessageBox>
#include <file1.h>
#include <QTimer>
#include <black.h>
#include "menu.h"
#include "txt_edit.h"

namespace Ui {
class Folder;
}

class Folder : public QWidget
{
    Q_OBJECT

private:
    int num;
    double time_Start;
    double time_End;

    QTimer timer;

    int next_x, next_y, folder_cnt;
    Menu *menu = new Menu();

public:
    explicit Folder(QWidget *parent = nullptr);
    ~Folder();

private slots:
    void on_pushButton_1_clicked();
    void on_back_btn_clicked();
    void new_folder();

    void on_folder3_clicked();

private:
    void mousePressEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    Ui::Folder *ui;
};

#endif // CHAT_H
