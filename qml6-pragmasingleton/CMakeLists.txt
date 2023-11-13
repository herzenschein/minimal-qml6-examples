cmake_minimum_required(VERSION 3.23)

# First argument will be PROJECT_NAME
project(qml6-pragmasingleton LANGUAGES CXX)

# We need to find Qt before we can use
# the new Qt CMake API
find_package(Qt6 REQUIRED COMPONENTS Quick)

# Autoconfigures AUTOMOC, AUTORCC, AUTOUIC etc.
qt_standard_project_setup()

# Create a target executable
qt_add_executable(${PROJECT_NAME}
    main.cpp
)

# This is the only requirement to mark a QML file as a singleton.
set_source_files_properties(PragmaSingleton.qml PROPERTIES QT_QML_SINGLETON_TYPE ON)

# This automatically creates resources,
# so avoid using qt_add_resources() with it.
# If we had a qrc file, we'd put after the first argument.
# This generates a resource like this:
# qrc: + RESOURCE_PREFIX + URI + / + QML_FILES
# so qrc:/PragmaSingletonExample/main.qml
qt_add_qml_module(${PROJECT_NAME}
    URI "PragmaSingletonExample"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    QML_FILES
    "main.qml"
    "SetDialog.qml"
    "ViewDialog.qml"
    "PragmaSingleton.qml"
)


# Finish by linking the necessary Qt libraries
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick)
