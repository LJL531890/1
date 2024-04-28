#ifndef DESKTOP_H
#define DESKTOP_H

#include <QWidget>
#include <QProcess>
#include <QMessageBox>
#include <folder.h>
#include <black.h>
#include "task_manager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Desktop; }
QT_END_NAMESPACE

class Desktop : public QWidget
{
    Q_OBJECT

public:
    Desktop(QWidget *parent = nullptr);
    ~Desktop();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_my_desktop_clicked();
    void on_task_manager_clicked();

private:
    Ui::Desktop *ui;
};

#endif // DESKTOP_H
