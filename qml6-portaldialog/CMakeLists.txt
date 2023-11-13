cmake_minimum_required(VERSION 3.20)

project(qml6-portaldialog)

find_package(Qt6 REQUIRED COMPONENTS Quick Widgets)

qt_standard_project_setup()

add_executable(${PROJECT_NAME}
    "main.cpp"
)

qt_add_qml_module(${PROJECT_NAME}
    URI "portaldialog"
    VERSION 1.0
    RESOURCE_PREFIX "/"
    QML_FILES "main.qml"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Quick
    Qt6::Widgets
)

include(GNUInstallDirs)

install(FILES ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
