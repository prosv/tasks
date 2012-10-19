#include <QtGui>
#include <QtWebKit>
#include "mainwindow.h"

mainwindow::mainwindow()
{
    view = new QWebView;
    location = new QLineEdit("http://www.google.com");
    view->load(QUrl(location->text()));
    connect(location, SIGNAL(returnPressed()), SLOT(go()));
    connect(view, SIGNAL(loadFinished(bool)), SLOT(newUrl()));
    QToolBar *toolBar = addToolBar(tr("Navigation"));
    toolBar->addAction(view->pageAction(QWebPage::Back));
    toolBar->addAction(view->pageAction(QWebPage::Forward));
    toolBar->addAction(view->pageAction(QWebPage::Reload));
    toolBar->addAction(view->pageAction(QWebPage::Stop));
    toolBar->addWidget(location);
    setCentralWidget(view);
}

void mainwindow::go()
{
    view->load(QUrl(location->text()));
}

void mainwindow::newUrl()
{
    location->setText(view->url().toString());
}
