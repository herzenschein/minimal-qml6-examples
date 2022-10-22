cmake_minimum_required(VERSION 3.20)

project(qml6-conan)

find_package(Qt6 REQUIRED COMPONENTS
    Quick
)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

qt_standard_project_setup()

qt_add_executable(${PROJECT_NAME}
    "main.cpp"
)

qt_add_qml_module(${PROJECT_NAME}
    URI "conan"
    VERSION 1.0
    QML_FILES "main.qml"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${CONAN_LIBS}
)

include(GNUInstallDirs)
install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
