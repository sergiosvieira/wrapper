QT += core gui widgets
TARGET = main
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += main.cpp \
    mid-button.cpp \
    mid-qt5-button.cpp \
    mid-qt5-window.cpp \
    window.cpp \
    mid-qt5-check-box.cpp \
    mid-qt5-progress-bar.cpp

CONFIG += c++11 console
#CONFIG -= app_bundle

#HEADERS += 

HEADERS += \
    mid-button.h \
    mid-qt5-button.h \
    mid-application.h \
    mid-qt5-app.h \
    mid-qt5-window.h \
    mid-window.h \
    mid-qt5-msg-dialog.h \
    mid-msg-dialog.h \
    window.h \
    button.h \
    checkbox.h \
    textfield.h \
    mid-connect.h \
    mid-qt5-connect.h \
    eventtable.h \
    mid-handler.h \
    mid-qt5-handler.h \
    mid-object.h \
    mid-layout.h \
    midqtverticallayout.h \
    mid-qt5-horizontal-layout.h \
    mid-check-box.h \
    mid-qt5-check-box.h \    
    mid-radio-button.h \
    mid-qt5-radio-button.h \
    radio-button.h \
    mid-text-field.h \
    mid-qt5-text-field.h \
    progress-bar.h \
    mid-progress-bar.h \
    mid-qt5-progress-bar.h \
    textfield.h \
    mid-group-box.h \
    mid-qt5-group-box.h \
    group-box.h \
    mid-text-label.h \
    mid-qt5-text-label.h \
    textlabel.h \
    mid-combo-box.h \
    mid-qt5-combo-box.h \
    mid-spin-box.h \
    mid-qt5-spin-box.h \
    spin-box.h \
    combo-box.h \
    line.h \
    mid-line.h \
    mid-qt5-line.h \
    mid-date.h \
    mid-qt5-date.h \
    date.h \
    mid-date-edit.h \
    date-edit.h \
    mid-qt5-date-edit.h \
    mid-tab.h \
    mid-qt5-tab.h \
    tab.h

