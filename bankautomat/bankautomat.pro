QT += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TARGET = Numpad
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    keypad.cpp \
    main.cpp \
    mainwindow.cpp \
    nosto.cpp \
    tilisiirto.cpp \
    valikko.cpp

HEADERS += \
    keypad.h \
    mainwindow.h \
    nosto.h \
    tilisiirto.h \
    valikko.h

FORMS += \
    keypad.ui \
    mainwindow.ui \
    nosto.ui \
    tilisiirto.ui \
    valikko.ui

QMAKE_CXXFLAGS += -std=gnu++14 #numpadia varten

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
   resources.qrc
