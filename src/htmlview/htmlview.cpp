#include "htmlview.hpp"

#include <QWebEngineView>

HtmlView::HtmlView()
{
    m_webView = new QWebEngineView();
}

void HtmlView::load(const QUrl &url)
{
    m_webView->load(url);
}

void HtmlView::show()
{
    m_webView->show();
}
