# This ensures CMake will search this folder
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# This add new source files to the desired target, namely our executable.
# Because this is a single header file, we can set its visibility to INTERFACE.
# The main effect of this is the file appearing in the Projects tab in IDEs.
target_sources(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/strings.hpp)

# Like the previous CMakeLists.txt files,
# either method for setting STATIC works.

#qt_add_library(strings STATIC)

qt_add_qml_module(strings
    URI "Strings"
    VERSION 1.0
    # OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml
    # OUTPUT_DIRECTORY "Strings"
    SOURCES "strings.hpp"
    STATIC
)
