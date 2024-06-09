qt_add_library(subdirectories-main)

qt_add_qml_module(subdirectories-main
    URI "com.example.subdirectories.main"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/subdirectories/main"
    QML_FILES "Main.qml"
)

add_subdirectory(sub2)
