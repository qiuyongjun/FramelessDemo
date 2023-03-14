#ifndef DIALOG_H
#define DIALOG_H

#include "FramelessBase/FramelessDialog.h"

namespace Ui {
class Dialog;
}

class Dialog : public FramelessDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
