qt_add_library(singleton-dialogs)
qt_add_library(singleton-singletons)

qt_add_qml_module(singleton-dialogs
    URI "com.example.singleton.dialogs"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/singleton/dialogs"
    QML_FILES
    "SetDialog.qml"
    "ViewDialog.qml"
)

qt_add_qml_module(singleton-singletons
    URI "com.example.singleton.singletons"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/singleton/singletons"
    SOURCES
    "singleton.cpp"
    "singleton.hpp"
)
