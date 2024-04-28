#ifndef BLACK_H
#define BLACK_H

#include <QWidget>
#include <Qpainter>
namespace Ui {
class black;
}

class black : public QWidget
{
    Q_OBJECT

public:
    explicit black(QWidget *parent = nullptr);
    ~black();
    void paintEvent(QPaintEvent * event);

private:
    Ui::black *ui;
};

#endif // BLACK_H
