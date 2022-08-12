cmake_minimum_required(VERSION 3.5)

project(qml6-subdirectories LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME} main.cpp)

set(QT_QML_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Quick mainplugin textrowplugin stringsplugin)

add_subdirectory(sub1)
