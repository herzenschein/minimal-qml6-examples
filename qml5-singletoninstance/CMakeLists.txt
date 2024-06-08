cmake_minimum_required(VERSION 3.23)

project(qml5-singletoninstance LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_policy(SET QTP0001 NEW)

qt_add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
    "main.cpp"
)

qt_add_qml_module(${PROJECT_NAME}
    URI "com.example.singletoninstance"
    VERSION 1.0
    QML_FILES
    "Main.qml"
    SOURCES
    "singletoninstance.cpp"
    "singletoninstance.hpp"
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Qt6::Quick
    singletoninstance-dialogs
)

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_qml_app_script(
    TARGET ${PROJECT_NAME}
    OUTPUT_SCRIPT deployScript
)

install(SCRIPT ${deployScript})

add_subdirectory(qml)
