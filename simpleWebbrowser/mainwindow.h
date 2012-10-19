#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#endif // MAINWINDOW_H
#include <QtGui>

class QWebView;
class QLineEdit;

class mainwindow : public QMainWindow {

    Q_OBJECT

public: mainwindow ();

protected slots:

    void go();
    void newUrl();
    //void finish(bool);

    //void viewSource();
    //void slotSourceDownloaded();

private:
    QWebView *view;
    QLineEdit *location;
};
