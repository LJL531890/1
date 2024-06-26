QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    black.cpp \
    block1.cpp \
    desktop.cpp \
    cmd/cmd.cpp \
    compiler/src/ast.cpp \
    compiler/src/compiler.cpp \
    compiler/src/errorHandle.cpp \
    compiler/src/lex.cpp \
    compiler/src/my_parser.cpp \
    compiler/src/table.cpp \
    compiler/src/utils.cpp \
    directory/directory.cpp \
    disk/disk.cpp \
    kernel/kernel.cpp \
    memory/my_memory.cpp \
    shuxie.cpp \
    thread/my_thread.cpp \
    file1.cpp \
    login.cpp \
    main.cpp \
    task_manager.cpp \
    folder.cpp \
    menu.cpp \
    property.cpp \
    txt_edit.cpp

HEADERS += \
    black.h \
    block1.h \
    file1.h \
    login.h \
    desktop.h \
    cmd/cmd.h \
    compiler/include/ast.h \
    compiler/include/compiler.h \
    compiler/include/define.h \
    compiler/include/errorHandle.h \
    compiler/include/lex.h \
    compiler/include/my_parser.h \
    compiler/include/table.h \
    compiler/include/utils.h \
    directory/directory.h \
    disk/disk.h \
    kernel/kernel.h \
    memory/my_memory.h \
    shuxie.h \
    thread/my_thread.h \
    task_manager.h \
    folder.h \
    menu.h \
    property.h \
    txt_edit.h

FORMS += \
    black.ui \
    block1.ui \
    chat.ui \
    file1.ui \
    mainwindow.ui \
    login.ui \
    shuxie.ui \
    widget.ui \
    menu.ui \
    property.ui \
    txt_edit.ui

TRANSLATIONS += \
    run_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
