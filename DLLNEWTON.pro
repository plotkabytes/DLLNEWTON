#-------------------------------------------------
#
# Project created by QtCreator 2015-05-21T15:18:44
#
#-------------------------------------------------

QT       -= gui

TARGET = DLLNEWTON
TEMPLATE = lib

DEFINES += DLLNEWTON_LIBRARY

SOURCES += dllnewton.cpp \
    intervalarithmetic.cpp

HEADERS += dllnewton.h\
        dllnewton_global.h \
        intervalarithmetic.h

# compiler flags
CXXFLAGS+="c++11"

# mpfr library
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Libraries/mpfr/dll/win32/release/ -lmpfr
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Libraries/mpfr/dll/win32/debug/ -lmpfr
else:unix: LIBS += -L$$PWD/../../Libraries/mpfr/dll/win32/ -lmpfr

INCLUDEPATH += $$PWD/../../Libraries/mpfr
DEPENDPATH += $$PWD/../../Libraries/mpfr

# mpir library
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../Libraries/mpir/dll/win32/release/ -lmpir
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../Libraries/mpir/dll/win32/debug/ -lmpir
else:unix: LIBS += -L$$PWD/../../Libraries/mpir/dll/win32/ -lmpir

INCLUDEPATH += $$PWD/../../Libraries/mpir/dll/win32/Release
DEPENDPATH += $$PWD/../../Libraries/mpir/dll/win32/Release

# boost library

INCLUDEPATH += $$PWD/../../Libraries/boost_1_55_0/
