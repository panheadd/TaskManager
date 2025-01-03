QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += Headers/mainwindow.h \
    Headers/Construction.h \
    Headers/Farming.h \
    Headers/MyProject.h \
    Headers/Personal.h \
    Headers/SchoolTask.h \
    Headers/Sport.h \
    Headers/Task.h \
    Headers/Transaction.h \
    Headers/Travel.h
SOURCES += Sources/main.cpp \
           Sources/Construction.cpp \
           Sources/Farming.cpp \
           Sources/MyProject.cpp \
           Sources/Personal.cpp \
           Sources/SchoolTask.cpp \
           Sources/Sport.cpp \
           Sources/Task.cpp \
           Sources/Transaction.cpp \
           Sources/Travel.cpp \
           Sources/mainwindow.cpp
FORMS += Forms/mainwindow.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
