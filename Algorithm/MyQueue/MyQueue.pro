TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
DEFINES += _GLIBCXX_USE_CXX11_ABI=0
SOURCES += main.cpp

HEADERS += \
    CLoopQueue.h
