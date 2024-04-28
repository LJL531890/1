#ifndef SHUXIE_H
#define SHUXIE_H

#include <QMainWindow>

namespace Ui {
class shuxie;
}

class shuxie : public QMainWindow
{
    Q_OBJECT

public:
    explicit shuxie(QWidget *parent = nullptr);
    ~shuxie();

private:
    Ui::shuxie *ui;
};

#endif // SHUXIE_H
