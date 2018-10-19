#include "gtz_gui.h"
#include <QWebChannel>
#include <QDesktopWidget>
#include <QApplication>
#include "interface/i_decompressor.h"
#include "interface/i_gtz_gui_event.h"
#include <QResizeEvent>
#include <QMimeData>
#include <iostream>
#include <QObjectUserData>
#include <QFrame>
#include <QDialog>
#include "base_dialog.h"

gtz_gui::gtz_gui(QWidget *parent) : QWebEngineView(parent)
{
    this->setWindowTitle("gtz");
    init_view();
    register_objects();
    load_ui();

    mouse_press = false;
    bd = new base_dialog(this);


    connect(this, SIGNAL(urlChanged(QUrl)),
            this, SLOT(onUrlChanged(QUrl)));
}

gtz_gui::~gtz_gui()
{

}

void gtz_gui::showEvent(QShowEvent *event)
{
//    this->setAttribute(Qt::WA_Mapped);
//    QWebEngineView::showEvent(event);
    //this->resize(900, 600);
    //QResizeEvent n(900, 600);
    this->resizeEvent(0);
    QWebEngineView::showEvent(event);
}





void gtz_gui::init_view()
{
    //设置无边框
    //this->setWindowFlags(Qt::Window);

    this->resize(900, 600);
    QDesktopWidget *desktop = QApplication::desktop();
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
}

void gtz_gui::register_objects()
{
    js_callback::setPage(this->page());
    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject("i_decompressor", (QObject*)i_decompressor::instance());
    i_gtz_gui_event *i_gui_event = new i_gtz_gui_event;
    i_gui_event->setWidget(this);
    channel->registerObject("i_gtz_gui_event", (QObject*)i_gui_event);
    connect(i_gui_event, SIGNAL(show_test_dialog()), this, SLOT(show_dialog()));
    this->page()->setWebChannel(channel);
}

void gtz_gui::load_ui()
{
    this->page()->load(QUrl(gtz_gui::ui_html));
}

void gtz_gui::show_dialog()
{
    if (bd)
    {
        bd->show();
    }
}

void gtz_gui::onUrlChanged(const QUrl &url)
{
    this->page()->load(url);
}

void gtz_gui::dragEnterEvent(QDragEnterEvent *event)
{
    const QMimeData *md = event->mimeData();
    QObjectUserData *usdata = event->mimeData()->userData(0);
    QString strtex = md->text();

    QList<QUrl> urllist = md->urls();
    //md->setUserData();
    //event->mimeData()->setu
    if (urllist.size() > 0)
    {
        QString strtext = (*urllist.begin()).toString();
        std::cout << strtext.toStdString() << std::endl;
    }
}

void gtz_gui::dragMoveEvent(QDragMoveEvent *event)
{

}

void gtz_gui::dropEvent(QDropEvent *event)
{

}

void gtz_gui::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
     {
        this->setMouseTracking(true);
          mouse_press = true;
          //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
          move_point = event->pos();
     }
}

//void gtz_gui::mouseReleaseEvent(QMouseEvent *event)
//{
//    //设置鼠标为未被按下
//    mouse_press = false;
//}

//void gtz_gui::mouseMoveEvent(QMouseEvent *event)
//{
//    //若鼠标左键被按下
//    qDebug()<<"mouse_press="<<event->globalPos();
//    if(mouse_press)
//    {
//        //鼠标相对于屏幕的位置
//        QPoint move_pos = event->globalPos();

//        //移动主窗体位置
//        this->move(move_pos - move_point);
//    }
//}



//const QString gtz_gui::ui_html = "file:///home/nil/workspace/Qt_Project/qt_js_frame/html/gtz_gui.html";
const QString gtz_gui::ui_html = "https://www.baidu.com";
