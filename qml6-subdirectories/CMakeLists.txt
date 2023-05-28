cmake_minimum_required(VERSION 3.25)

project(qml6-subdirectories LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

# This creates our qml6-subdirectories target
qt_add_executable(${PROJECT_NAME} main.cpp)

# This defines our custom output directory as
# a qml/ folder for each plugin in our build/ folder
# This is the same as directly adding OUTPUT_DIRECTORY to each QML module!
set(QT_QML_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/qml)

# This silences a warning about not using the new default :/qt/qml resource prefix path
# https://doc.qt.io/qt-6/qt-cmake-policy-qtp0001.html
qt_policy(SET QTP0001 NEW)

# This links the required QtQuick libraries
# as well as our static QML plugins
# set in the subdirectory CMakeLists.txt files
# to be used in our import statements
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Quick
    mainplugin
    textrowplugin
    stringsplugin
)

add_subdirectory(sub1)
