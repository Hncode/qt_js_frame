#include "i_gtz_gui_event.h"
#include "base_dialog.h"
#include <QDebug>
#include <QJsonParseError>
#include <QJsonObject>

i_gtz_gui_event::i_gtz_gui_event(QObject *parent) : QObject(parent)
{

}

i_gtz_gui_event::~i_gtz_gui_event()
{
    qDebug() << "i_gtz_gui_event destructor execute.";
}

void i_gtz_gui_event::setWidget(QWidget *value)
{
    widget = value;
}

//i_gtz_gui_event *i_gtz_gui_event::instance()
//{
//    static i_gtz_gui_event gtz_gui_event;
//    return &gtz_gui_event;
//}

void i_gtz_gui_event::close()
{
    widget->close();
}

void i_gtz_gui_event::minimized()
{
    widget->showMinimized();
}

void i_gtz_gui_event::maximized()
{
    widget->showMaximized();
}

void i_gtz_gui_event::normal()
{
    widget->showNormal();
}

void i_gtz_gui_event::move(int x, int y)
{
//    QJsonParseError jsonError;
//    QJsonDocument json = QJsonDocument::fromJson(position.toLocal8Bit(), &jsonError);
//    QJsonObject jsonobject = json.object();
//    int x = jsonobject["x"].toInt();
//    int y = jsonobject["y"].toInt();
    //qDebug() << position << x << ", " << y;
    widget->move(x, y);
}

void i_gtz_gui_event::show_test_dialog_now()
{
    show_test_dialog();
}

