#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    FramelessWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setTitleBar(ui->label);
}

MainWindow::~MainWindow()
{
    delete ui;
}
