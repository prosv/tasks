#include <QtGui>

class QWebView;
class QLineEdit;

class mainwindow : public QMainWindow {

    Q_OBJECT

public: mainwindow ();

protected slots:

    void go();
    void newUrl();

private:
    QWebView *view;
    QLineEdit *location;
};
