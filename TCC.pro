#-------------------------------------------------
#
# Project created by QtCreator 2015-05-18T11:20:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_cadastrar.cpp \
    dialog_buscar.cpp \
    dialog_alterar.cpp \
    dialog_excluir.cpp

HEADERS  += mainwindow.h \
    dialog_cadastrar.h \
    dialog_buscar.h \
    dialog_alterar.h \
    dialog_excluir.h

FORMS    += mainwindow.ui \
    dialog_cadastrar.ui \
    dialog_buscar.ui \
    dialog_alterar.ui \
    dialog_excluir.ui

OTHER_FILES += \
    resource/logo-unp.png

RESOURCES += \
    resource.qrc
