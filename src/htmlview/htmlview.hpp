#ifndef HTMLVIEW_HPP
#define HTMLVIEW_HPP

#include <platform.hpp>

class QWebEngineView;

class HtmlView: public Platform
{
public:
    HtmlView();

    void load(const QUrl &url);
    void show();

private:
    QWebEngineView *m_webView;
};

#endif // HTMLVIEW_HPP
