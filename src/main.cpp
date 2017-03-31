#include <QApplication>
#include <QDir>

#include "rockstack.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    RockStack *rockStack = new RockStack();
    rockStack->loadApplication(QDir::currentPath());

    return app.exec();
}
