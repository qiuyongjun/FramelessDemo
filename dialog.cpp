#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    FramelessDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    setTitleBar(ui->label);
}

Dialog::~Dialog()
{
    delete ui;
}
