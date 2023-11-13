cmake_minimum_required(VERSION 3.5)

project(qml6-qmlelement LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick Qml)

cmake_policy(SET CMP0071 NEW)

qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME}
    main.cpp
    NormalCppQml.hpp
    NamedCppQml.hpp
)

qt_add_qml_module(${PROJECT_NAME}
    URI "QmlFromCpp"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    QML_FILES
        "main.qml"
    SOURCES
        "NormalCppQml.hpp"
        "NamedCppQml.hpp"
)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick Qt6::Qml)
