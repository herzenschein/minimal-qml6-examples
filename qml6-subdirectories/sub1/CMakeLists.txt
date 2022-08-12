set(CMAKE_INCLUDE_CURRENT_DIR ON)

#qt_add_library(main STATIC)

qt_add_qml_module(main
    URI "Main"
    VERSION 1.0
    QML_FILES "main.qml"
    STATIC
)

add_subdirectory(sub2)
