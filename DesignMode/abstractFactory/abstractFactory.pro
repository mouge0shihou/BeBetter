TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    factory.cpp

HEADERS += \
    createfactory.h \
    createproduct.h \
    factory.h \
    product.h
