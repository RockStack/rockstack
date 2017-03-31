#include "qmlview.hpp"

#include <QQuickView>

QmlView::QmlView()
{
    m_quickView = new QQuickView();
}

void QmlView::load(const QUrl &url)
{
    m_quickView->setSource(url);
}

void QmlView::show()
{
    m_quickView->show();
}
