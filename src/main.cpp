#include <QApplication>
#include <QDir>
#include <QCommandLineParser>

#include "rockstack.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addPositionalArgument("path", "Path to directory containing rockstack.json file");
    parser.process(app);

    const QStringList args = parser.positionalArguments();

    RockStack *rockStack = new RockStack();
    rockStack->loadApplication(args.size() == 0 ? QDir::currentPath() : args[0]);

    return app.exec();
}
