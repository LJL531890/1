#ifndef BLOCK1_H
#define BLOCK1_H

#include <QWidget>

namespace Ui {
class block1;
}

class block1 : public QWidget
{
    Q_OBJECT

public:
    explicit block1(QWidget *parent = nullptr);
    ~block1();

private:
    Ui::block1 *ui;
};

#endif // BLOCK1_H
