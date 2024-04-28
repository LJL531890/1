#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QDebug>
#include "property.h"
#include <black.h>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT
public:
    bool is_new_folder;

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_property_btn_clicked();
    void on_new_folder_btn_clicked();

    void on_compiler_btn_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
