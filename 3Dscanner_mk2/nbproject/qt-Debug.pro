TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = 3Dscanner_mk2
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
QT = core gui
SOURCES += QCamObject.cpp QCanny.cpp QErode.cpp ModelGen.cpp GUI.cpp main.cpp ImageLoader.cpp QSmooth.cpp QChromaKey.cpp QDisplayWidget.cpp QDilate.cpp
HEADERS += QErode.h GUI.h common.h ModelGen.h QCanny.h QCamObject.h QChromaKey.h QDisplayWidget.h ImageLoader.h QSmooth.h QDilate.h
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
INCLUDEPATH += /usr/local/include/opencv 
LIBS += /usr/local/lib/libcv.so /usr/local/lib/libcvaux.so /usr/local/lib/libcxcore.so  
