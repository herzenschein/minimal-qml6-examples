# This ensures CMake will search this folder
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# This is exactly the same thing as in sub2/CMakeLists.txt
# So use either qt_add_library or STATIC in the qt_add_qml_module.

#qt_add_library(main STATIC)

# Our QML files that are going to be
# shipped with our application need to be static.
# Creating the target "main" here
# (also called a module)
# autogenerates a mainplugin that can be used in
# the root target_link_libraries().
qt_add_qml_module(main
    URI "Main"
    VERSION 1.0
    # OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml
    # OUTPUT_DIRECTORY "Main"
    QML_FILES "main.qml"
    STATIC
)

add_subdirectory(sub2)
