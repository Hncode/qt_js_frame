#include "base_dialog.h"
#include "./interface/i_gtz_gui_event.h"

#include <QWebChannel>
#include <QMouseEvent>

base_dialog::base_dialog(QWidget *parent) : QDialog(parent)
{
    setWindowFlags(Qt::Dialog);
    hide();
    //this->setFixedSize(300, 500);
    webview = new QWebEngineView(this);
    this->setFixedSize(400, 260);
    webview->setFixedSize(400, 260);

    QWebChannel *channel = new QWebChannel(webview);
    i_gtz_gui_event *i_gui_event = new i_gtz_gui_event;
    i_gui_event->setWidget(this);
    channel->registerObject("i_gtz_gui_event", (QObject*)i_gui_event);
    webview->page()->setWebChannel(channel);
    webview->page()->load(QUrl("file:///home/nil/workspace/Qt_Project/qt_js_frame/html/select_file_hint.html"));
    //webview->show();
}

base_dialog::~base_dialog()
{
    qDebug() << "base_dialog destructor execute.";
}
