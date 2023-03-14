#ifndef FORM_H
#define FORM_H

#include "FramelessBase/FramelessWidget.h"

namespace Ui {
class Form;
}

class Form : public FramelessWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private:
    Ui::Form *ui;
};

#endif // FORM_H
