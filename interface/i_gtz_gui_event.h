#ifndef I_GTZ_GUI_EVENT_H
#define I_GTZ_GUI_EVENT_H

#include <QObject>

class i_gtz_gui_event : public QObject
{
    Q_OBJECT
public:
    i_gtz_gui_event(QObject *parent = nullptr);

    ~i_gtz_gui_event();

public:
    void setWidget(QWidget *value);

    //static i_gtz_gui_event* instance();

signals:
    //void notify(int i);

    void show_test_dialog();

public slots:
    void close();
    void minimized();
    void maximized();
    void normal();

    void move(int x, int y/*const QString& position*/);

    void show_test_dialog_now();
private:
    QWidget *widget;
};

#endif // I_GTZ_GUI_EVENT_H
