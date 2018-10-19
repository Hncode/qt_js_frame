#ifndef BASE_DIALOG_H
#define BASE_DIALOG_H
#include <QDialog>
#include <QWebEngineView>
#include <QMainWindow>


class base_dialog : public QDialog
{
public:
    explicit base_dialog(QWidget *parent = 0);
    ~base_dialog();

    //void mousePressEvent(QMouseEvent *event);

private:
    QWebEngineView *webview;
};

#endif // BASE_DIALOG_H
