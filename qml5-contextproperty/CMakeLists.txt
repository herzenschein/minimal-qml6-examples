cmake_minimum_required(VERSION 3.23)

# First argument will be PROJECT_NAME
project(qml6-contextproperty LANGUAGES CXX)

# We need to find Qt before we can use
# the new Qt CMake API
find_package(Qt6 REQUIRED COMPONENTS Quick)

# Autoconfigures AUTOMOC, AUTORCC, AUTOUIC etc.
qt_standard_project_setup()

# This accepts and silences the policy that uses the new RESOURCE_PREFIX
# /qt/qml, which automatically adds all files to the import path.
qt_policy(SET QTP0001 NEW)

# Create a target executable
qt_add_executable(${PROJECT_NAME}
    main.cpp
)

# This automatically creates resources,
# so avoid using qt_add_resources() with it.
# If we had a qrc file, we'd put after the first argument.
# This generates a resource like this:
# qrc: + RESOURCE_PREFIX + URI + / + QML_FILES
# so qrc:/qt/qml/com/example/contextproperty/Main.qml
qt_add_qml_module(${PROJECT_NAME}
    URI "com.example.contextproperty"
    VERSION 0.1
    QML_FILES
        "Main.qml"
    SOURCES
        "MyFunctionsFromCPPToQml.hpp"
)

# Finish by linking the necessary Qt libraries
target_link_libraries(${PROJECT_NAME} PRIVATE Qt::Quick)
