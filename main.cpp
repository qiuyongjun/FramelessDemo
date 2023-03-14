#include "mainwindow.h"
#include "form.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    Form f;
    f.show();

    Dialog d;
    d.show();
    //取消Areo效果
    d.setAreoEnable(false);
    //取消通过拖动该表大小
    d.setResizeable(false);


    return a.exec();
}
