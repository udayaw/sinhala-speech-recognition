QT += core gui

QT += widgets


CONFIG += console
CONFIG -= app_bundle

TARGET = qt_console_app
TEMPLATE = app

INCLUDEPATH += "E:\Data\SLIIT\Fourth Year - 1st Semester\CDAP-I\AppLibraries\cmusphinx\built\pocketsphinx\include" \
"E:\Data\SLIIT\Fourth Year - 1st Semester\CDAP-I\AppLibraries\cmusphinx\built\sphinxbase\include" \
"E:\Data\SLIIT\Fourth Year - 1st Semester\CDAP-I\AppLibraries\cmusphinx\built\sphinxbase\include\win32"

LIBS += "E:\Data\SLIIT\Fourth Year - 1st Semester\CDAP-I\AppLibraries\cmusphinx\built\sphinxbase\lib\Debug\*.lib" \
"E:\Data\SLIIT\Fourth Year - 1st Semester\CDAP-I\AppLibraries\cmusphinx\built\pocketsphinx\lib\Debug\*.lib"



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
