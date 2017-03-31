#ifndef ROCKSTACK_HPP
#define ROCKSTACK_HPP

#include <QString>

class Application;

class RockStack
{
public:
    RockStack();

    void loadApplication(const QString &path);

private:
    Application *m_application;
};

#endif // ROCKSTACK_HPP
