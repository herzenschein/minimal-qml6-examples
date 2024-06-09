qt_add_library(pragmasingleton-dialogs)
qt_add_library(pragmasingleton-singletons)

# This is the only requirement to mark a QML file as a singleton.
set_source_files_properties(PragmaSingleton.qml PROPERTIES QT_QML_SINGLETON_TYPE ON)

qt_add_qml_module(pragmasingleton-dialogs
    URI "com.example.pragmasingleton.dialogs"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/pragmasingleton/dialogs"
    QML_FILES
    "SetDialog.qml"
    "ViewDialog.qml"
)

qt_add_qml_module(pragmasingleton-singletons
    URI "com.example.pragmasingleton.singletons"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/pragmasingleton/singletons"
    QML_FILES
    "PragmaSingleton.qml"
)
