set(CMAKE_INCLUDE_CURRENT_DIR ON)

target_sources(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/strings.hpp)

qt_add_qml_module(strings
    URI "Strings"
    VERSION 1.0
    SOURCES "strings.hpp"
    STATIC
)
