qt_add_library(subdirectories-textrow)

qt_add_qml_module(subdirectories-textrow
    URI "com.example.subdirectories.textrow"
    VERSION 1.0
    OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/com/example/subdirectories/textrow
    QML_FILES "TextRow.qml"
)

add_subdirectory(sub3)
