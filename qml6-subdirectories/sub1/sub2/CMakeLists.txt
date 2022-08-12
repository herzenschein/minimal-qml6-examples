set(CMAKE_INCLUDE_CURRENT_DIR ON)

qt_add_library(textrow STATIC)

qt_add_qml_module(textrow
    URI "TextRow"
    VERSION 1.0
    QML_FILES "TextRow.qml"
#    STATIC
)

add_subdirectory(sub3)
