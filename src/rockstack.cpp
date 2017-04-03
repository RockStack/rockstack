#include "rockstack.hpp"
#include "application.hpp"

#include <htmlview/htmlview.hpp>
#include <qmlview/qmlview.hpp>

#include <modules/filesystem.hpp>
#include <modules/process.hpp>

#include <QDebug>

RockStack::RockStack():
    m_application(NULL)
{
}

void RockStack::loadApplication(const QString &path)
{
    if (m_application) {
        delete m_application;
    }

    m_application = new Application(path);

    if (!m_application->parseManifest()) {
        qDebug() << "Failed to load manifest file";
    }

    Platform *platform = NULL;

    if (m_application->platform() == "html") {
        platform = new HtmlView();
    } else if (m_application->platform() == "qml") {
        platform = new QmlView();
    }

    platform->addModule("process", new Process);
    platform->addModule("fs", new FileSystem);
    platform->load(m_application->main());
    platform->show();
}
