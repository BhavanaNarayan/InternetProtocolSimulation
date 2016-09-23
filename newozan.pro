TEMPLATE = app
CONFIG += console c++11
CONFIG += app_bundle
CONFIG += qt

SOURCES += main.cpp \
    controller.cpp \
    accessdevice.cpp \
    accesspoint.cpp \
    data.cpp \
    datacreator.cpp \
    iscreating.cpp

HEADERS += \
    controller.h \
    accessdevice.h \
    accesspoint.h \
    data.h \
    datacreator.h \
    iscreating.h
