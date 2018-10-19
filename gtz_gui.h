#ifndef GTZ_GUI_H
#define GTZ_GUI_H
#include <QWebEngineView>
#include "base_dialog.h"

class gtz_gui : public QWebEngineView
{
    Q_OBJECT
public:
    gtz_gui(QWidget *parent = 0);
    virtual ~gtz_gui();

   void showEvent(QShowEvent *event);


    //void changeEvent(QEvent *e);

    //void show();
private:
    void init_view();           //初始化界面

    void register_objects();    //用于注册对象到网页中的JavaScripts中

    void load_ui();             //加载html ui

public slots:
    void show_dialog();

    void onUrlChanged(const QUrl& url);

public:
    QPoint move_point; //移动的距离
    bool mouse_press; //鼠标按下
//    //鼠标按下事件
    void mousePressEvent(QMouseEvent *event);
//   //鼠标释放事件
//    void mouseReleaseEvent(QMouseEvent *event);
//   //鼠标移动事件
//    void mouseMoveEvent(QMouseEvent *event);

private:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);

private:
    //QWebEngineView *this;
    static const  QString ui_html;
    base_dialog *bd;
};

#endif // GTZ_GUI_H
