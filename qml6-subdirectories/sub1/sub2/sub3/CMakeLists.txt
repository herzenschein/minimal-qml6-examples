qt_add_library(subdirectories-strings)

qt_add_qml_module(strings
    URI "com.example.subdirectories.strings"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/subdirectories/strings"
    SOURCES "strings.hpp"
)
