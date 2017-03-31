#ifndef PLATFORM_HPP
#define PLATFORM_HPP

#include <QUrl>

class Platform
{
public:
    Platform();

    virtual void load(const QUrl &url) = 0;
    virtual void show() = 0;
};

#endif // PLATFORM_HPP
