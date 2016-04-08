#! [0]
HEADERS     = \
    form.h
#! [0] #! [1]
FORMS       = \
    form.ui
#! [1]
SOURCES     = \
              main.cpp \
    form.cpp
QT += widgets

target.path = $$[QT_INSTALL_EXAMPLES]/designer/calculatorform
INSTALLS += target
