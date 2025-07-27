QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assignment.cpp \
    attendance.cpp \
    attendance_teacher.cpp \
    contactus.cpp \
    landingpage.cpp \
    main.cpp \
    mainwindow.cpp \
    profileinfo.cpp \
    registration.cpp \
    score.cpp \
    score_teacher.cpp \
    student_info.cpp \
    task_management.cpp \
    task_view.cpp \
    updateaccount.cpp


HEADERS += \
    assignment.h \
    attendance.h \
    attendance_teacher.h \
    contactus.h \
    landingpage.h \
    mainwindow.h \
    profileinfo.h \
    registration.h \
    score.h \
    score_teacher.h \
    student_info.h \
    task_management.h \
    task_view.h \
    updateaccount.h

FORMS += \
    assignment.ui \
    attendance.ui \
    attendance_teacher.ui \
    contactus.ui \
    landingpage.ui \
    mainwindow.ui \
    profileinfo.ui \
    registration.ui \
    score.ui \
    score_teacher.ui \
    student_info.ui \
    task_management.ui \
    task_view.ui \
    updateaccount.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resorc.qrc
