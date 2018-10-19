#include "js_callback.h"

js_callback::js_callback()
{

}

void js_callback::operator()()
{
    if (js_function.size() > 0 && nullptr != page)
    {
        page->runJavaScript(js_function+QString("()"));
    }
}

void js_callback::operator()(const QString& val)
{
    if (js_function.size() > 0 && nullptr != page)
    {
        page->runJavaScript(js_function+QString("(\"%1\")").arg(123));  //+QString("(\"%1)\")")
    }
}

QWebEnginePage *js_callback::getPage()
{
    return page;
}

void js_callback::setPage(QWebEnginePage *value)
{
    page = value;
}

void js_callback::set(const QString &function)
{
    js_function = function;
}

QWebEnginePage *js_callback::page = nullptr;
