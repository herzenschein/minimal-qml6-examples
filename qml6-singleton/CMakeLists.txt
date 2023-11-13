cmake_minimum_required(VERSION 3.23)

# First argument will be PROJECT_NAME
project(qml6-singleton LANGUAGES CXX)

# We need to find Qt before we can use
# the new Qt CMake API
find_package(Qt6 REQUIRED COMPONENTS Quick)

# Autoconfigures AUTOMOC, AUTORCC, AUTOUIC etc.
qt_standard_project_setup()

# Create a target executable
qt_add_executable(${PROJECT_NAME}
    main.cpp
    singleton.cpp singleton.hpp
)

# This automatically creates resources,
# so avoid using qt_add_resources() with it.
# If we had a qrc file, we'd put after the first argument.
# This generates a resource like this:
# qrc: + RESOURCE_PREFIX + URI + / + QML_FILES
# so qrc:/SingletonExample/main.qml
qt_add_qml_module(${PROJECT_NAME}
    URI "SingletonExample"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    QML_FILES
    "main.qml"
    "SetDialog.qml"
    "ViewDialog.qml"
    SOURCES
    "main.cpp"
)

qt_add_qml_module(singleton # This automatically creates a singletonplugin target.
    URI "SingletonImport"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    OUTPUT_DIRECTORY "SingletonImport"
    SOURCES
    "singleton.cpp"
    "singleton.hpp"
    STATIC
)

# Finish by linking the necessary Qt libraries, including our custom target/module
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick singletonplugin)
