qt_add_library(singletontype-dialogs)

qt_add_qml_module(singletontype-dialogs
    URI "com.example.singletontype.dialogs"
    VERSION 1.0
    OUTPUT_DIRECTORY
    "${CMAKE_BINARY_DIR}/com/example/singletontype/dialogs"
    QML_FILES
    "SetDialog.qml"
    "ViewDialog.qml"
)
