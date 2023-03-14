#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    FramelessWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    setTitleBar(ui->label);
}

Form::~Form()
{
    delete ui;
}
