#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "FramelessBase/FramelessWindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public FramelessWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
