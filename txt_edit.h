#ifndef TXT_EDIT_H
#define TXT_EDIT_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class TxtEdit;
}

class TxtEdit : public QWidget
{
    Q_OBJECT

public:
    explicit TxtEdit(QWidget *parent = nullptr);
    ~TxtEdit();

private:

    Ui::TxtEdit *ui;

private:


};

#endif // TXT_EDIT_H
