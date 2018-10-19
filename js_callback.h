#ifndef JS_CALLBACK_H
#define JS_CALLBACK_H

#include <QString>
#include <QtWebEngineWidgets/QWebEnginePage>

class js_callback
{
public:
    js_callback();

    void operator()();
    void operator()(const QString& val);

    static QWebEnginePage *getPage();
    static void setPage(QWebEnginePage *value);

    void set(const QString& function);

private:
    QString js_function;
    static QWebEnginePage *page;
};

#endif // JS_CALLBACK_H
