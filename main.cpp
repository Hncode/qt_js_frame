#include <QApplication>
#include "gtz_gui.h"
#include "base_dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    base_dialog w;
//    w.show();

    gtz_gui w;
    w.show();

    return a.exec();
}
