#ifndef FRAMELESSWINDOW_H
#define FRAMELESSWINDOW_H

#include <QMainWindow>

class FramelessWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit FramelessWindow(QWidget *parent = nullptr);

public:
    //设置是否可以通过鼠标调整窗口大小
    //if resizable is set to false, then the window can not be resized by mouse
    //but still can be resized programtically
    void setResizeable(bool resizeable = true);
    bool isResizeable() const {return m_resizable;}

    //设置可调整大小区域的宽度，在此区域内，可以使用鼠标调整窗口大小
    //set border width, inside this aera, window can be resized by mouse
    void setResizeableAreaWidth(int width = 4);

public:
    void setContentsMargins(const QMargins &margins);
    void setContentsMargins(int left, int top, int right, int bottom);
    QMargins contentsMargins() const;
    QRect contentsRect() const;
    void getContentsMargins(int *left, int *top, int *right, int *bottom) const;

public slots:
    void showFullScreen();

protected:
    //设置一个标题栏widget，此widget会被当做标题栏对待
    //set a widget which will be treat as SYSTEM titlebar
    void setTitleBar(QWidget *titlebar);

    //在标题栏控件内，也可以有子控件如标签控件“label1”，此label1遮盖了标题栏，导致不能通过label1拖动窗口
    //要解决此问题，使用addIgnoreWidget(label1)
    //generally, we can add widget say "label1" on titlebar, and it will cover the titlebar under it
    //as a result, we can not drag and move the MainWindow with this "label1" again
    //we can fix this by add "label1" to a ignorelist, just call addIgnoreWidget(label1)
    void addIgnoreWidget(QWidget *widget);

    bool nativeEvent(const QByteArray &eventType, void *message, long *result);

private slots:
    void onTitleBarDestroyed();

private:
    QWidget* m_titlebar;
    QList<QWidget*> m_whiteList;
    int m_borderWidth;

    QMargins m_margins;
    QMargins m_frames;
    bool m_justMaximized;

    bool m_resizable;
};

#endif // FRAMELESSWINDOW_H
