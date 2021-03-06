QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cashregister.cpp \
    client.cpp \
    clientswindow.cpp \
    dialogeditclient.cpp \
    dialogedititem.cpp \
    findtable.cpp \
    main.cpp \
    mainwindow.cpp \
    product.cpp

HEADERS += \
    cashregister.h \
    client.h \
    clientswindow.h \
    dialogeditclient.h \
    dialogedititem.h \
    findtable.h \
    mainwindow.h \
    myexception.h \
    product.h

FORMS += \
    cashregister.ui \
    clientswindow.ui \
    dialogeditclient.ui \
    dialogedititem.ui \
    findtable.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
