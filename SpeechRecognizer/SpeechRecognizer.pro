QT += core gui

QT += widgets


CONFIG += console
CONFIG -= app_bundle

TARGET = qt_console_app
TEMPLATE = app

INCLUDEPATH += "..\pocketsphinx\include" \
"..\sphinxbase\include" \
"..\sphinxbase\include\win32"

LIBS += "..\sphinxbase\lib\Debug\*.lib" \
"..\pocketsphinx\lib\Debug\*.lib"



SOURCES += main.cpp\
        mainwindow.cpp \
    sphinxengine.cpp \
    mainwindow.cpp \
    sphinxengine.cpp

HEADERS  += mainwindow.h \
    sphinxengine.h \
    mainwindow.h \
    sphinxengine.h

FORMS += \
    mainwindow.ui
