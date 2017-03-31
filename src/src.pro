QT = gui widgets webenginewidgets

CONFIG += c++11

TARGET = rockstack

SOURCES += main.cpp \
    application.cpp \
    rockstack.cpp \
    platform.cpp

HEADERS += \
    application.hpp \
    rockstack.hpp \
    platform.hpp

include($$PWD/htmlview/htmlview.pri)
include($$PWD/qmlview/qmlview.pri)
