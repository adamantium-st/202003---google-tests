include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += \
        fibtest.h \
        tst_fibottst.h

SOURCES += \
        fibtest.cpp \
        main.cpp
