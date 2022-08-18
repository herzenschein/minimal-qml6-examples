cmake_minimum_required(VERSION 3.23)

project(qml5-singletontype LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME}
    main.cpp
    singletontype.hpp
)

# The qmlRegisterSingletonType method
# does not take advantage of qt_add_qml_module.
# If we didn't use this Qt6 feature here,
# we'd have to use qrc files and would end up with:
# SingletonType in C++
# main.qml in qrc
# qrc in CMakeLists.txt
# What a mess.
qt_add_qml_module(${PROJECT_NAME}
    URI "Main"
    VERSION 1.0
    QML_FILES
    "main.qml"
    "SetDialog.qml"
    "ViewDialog.qml"
)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick)
