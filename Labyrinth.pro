TEMPLATE = subdirs

SUBDIRS += \
    core \
    tests \    
    console \    

OTHER_FILES += \
    defaults.pri

QMAKE\_CXXFLAGS += -Wpedantic \
