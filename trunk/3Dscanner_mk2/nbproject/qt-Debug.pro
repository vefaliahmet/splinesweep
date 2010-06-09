TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = 3Dscanner_mk2
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui
SOURCES += ModelGen.cpp GUI.cpp main.cpp ImageLoader.cpp SplineGenerator.cpp QDisplayWidget.cpp
HEADERS += SplineGenerator.h GUI.h common.h ModelGen.h QDisplayWidget.h ImageLoader.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 