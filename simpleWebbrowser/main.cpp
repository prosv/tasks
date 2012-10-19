#include <QtGui>

#include "mainwindow.h"

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
    mainwindow *browser = new mainwindow();
    browser->show();
    return app.exec();
}
