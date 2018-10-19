#ifndef UI_CONTAINER_H
#define UI_CONTAINER_H
#include <QWidget>
#include <QDialog>
#include <QtWebEngineWidgets/QtWebEngineWidgets>

template<typename baseclass = QDialog, typename ui>
class ui_container : public baseclass
{
public:
    ui_container(QWidget* parent = 0);

    ~ui_container(){}

public:
    void init();
private:
    ui* ui_;
    QWebEngineView *webview_;
};

ui_container::ui_container(QWidget* parent = 0) : baseclass(parent)
{
    webview_ = 0;
    ui_ = 0;
    init();
}

void ui_container::init()
{
    webview_ = new QWebEngineView(this);
    ui_ = new ui(this);
    ui_.customise_window(this);
    QWebChannel *channel = new QWebChannel(webview_);
    ui_->set_page(webview_->page());
    channel->registerObject(ui_.class_name(), (QObject*)ui_);
    webview_->page()->setWebChannel(channel);
}



#endif // UI_CONTAINER_H
