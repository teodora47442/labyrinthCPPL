TEMPLATE = subdirs

SUBDIRS += \
    core \
    tests \    
    console \    

OTHER_FILES += \
    defaults.pri

QMAKE\_CXXFLAGS += -Wpedantic \
                    -std=c++1z

CONFIG += c++1z
