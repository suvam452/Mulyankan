QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    contactus.cpp \
    landingpage.cpp \
    main.cpp \
    mainwindow.cpp \
    profileinfo.cpp \
    registration.cpp \
    score.cpp \
    score_teacher.cpp \
    student_info.cpp \
    updateaccount.cpp


HEADERS += \
    contactus.h \
    landingpage.h \
    mainwindow.h \
    profileinfo.h \
    registration.h \
    score.h \
    score_teacher.h \
    student_info.h \
    updateaccount.h

FORMS += \
    contactus.ui \
    landingpage.ui \
    mainwindow.ui \
    profileinfo.ui \
    registration.ui \
    score.ui \
    score_teacher.ui \
    student_info.ui \
    updateaccount.ui\
    zstudentviewattendance.ui\
    zteacherstudent.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resorc.qrc
