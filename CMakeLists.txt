cmake_minimum_required(VERSION 3.25)
project(minimal-qml6-examples)

add_subdirectory(qml5-contextproperty)

option(BUILD_QML5PORTAL OFF)
if(BUILD_QML5PORTAL)
    add_subdirectory(qml5-portaldialog)
endif()


add_subdirectory(qml5-singletoninstance)
add_subdirectory(qml5-singletontype)

option(BUILD_QMLCONAN OFF)
if(BUILD_QMLCONAN)
    add_subdirectory(qml6-conan)
endif()

add_subdirectory(qml6-portaldialog)
add_subdirectory(qml6-pragmasingleton)
add_subdirectory(qml6-qmlelement)
add_subdirectory(qml6-singleton)
add_subdirectory(qml6-subdirectories)
