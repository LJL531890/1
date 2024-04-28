#ifndef PROPERTY_H
#define PROPERTY_H

#include <QWidget>
#include <black.h>
namespace Ui {
class Property;
}

class Property : public QWidget
{
    Q_OBJECT

public:
    explicit Property(QWidget *parent = nullptr);
    ~Property();

private:
    Ui::Property *ui;
};

#endif // PROPERTY_H
