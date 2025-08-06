QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    assignment.cpp \
    assignment_add_edit.cpp \
    assignment_teacher.cpp \
    attendance.cpp \
    attendance_add_edit.cpp \
    attendance_teacher.cpp \
    contactus.cpp \
    landingpage.cpp \
    main.cpp \
    mainwindow.cpp \
    profileinfo.cpp \
    registration.cpp \
    score.cpp \
    score_add_edit.cpp \
    score_teacher.cpp \
    student_info.cpp \
    task_management.cpp \
    task_view.cpp \
    termsncond.cpp \
    updateaccount.cpp


HEADERS += \
    assignment.h \
    assignment_add_edit.h \
    assignment_teacher.h \
    attendance.h \
    attendance_add_edit.h \
    attendance_teacher.h \
    contactus.h \
    landingpage.h \
    mainwindow.h \
    profileinfo.h \
    registration.h \
    score.h \
    score.h \
    score_add_edit.h \
    score_teacher.h \
    student_info.h \
    task_management.h \
    task_view.h \
    termsncond.h \
    updateaccount.h

FORMS += \
    assignment.ui \
    assignment_add_edit.ui \
    assignment_teacher.ui \
    attendance.ui \
    attendance_add_edit.ui \
    attendance_teacher.ui \
    contactus.ui \
    landingpage.ui \
    mainwindow.ui \
    profileinfo.ui \
    registration.ui \
    score.ui \
    score_add_edit.ui \
    score_teacher.ui \
    student_info.ui \
    task_management.ui \
    task_view.ui \
    termsncond.ui \
    updateaccount.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resorc.qrc
