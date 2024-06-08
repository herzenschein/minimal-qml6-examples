qt_add_library(singletoninstance-dialogs)

qt_add_qml_module(singletoninstance-dialogs
    URI "com.example.singletoninstance.dialogs"
    VERSION 1.0
    OUTPUT_DIRECTORY
    "${CMAKE_BINARY_DIR}/com/example/singletoninstance/dialogs"
    QML_FILES
    "SetDialog.qml"
    "ViewDialog.qml"
)
