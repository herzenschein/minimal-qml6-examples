cmake_minimum_required(VERSION 3.20)

project(qml6-conan)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake" "${CMAKE_BINARY_DIR}/conan.cmake")
include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(REQUIRES qt/6.3.1 cmake/3.24.2 GENERATORS cmake_find_package)
conan_cmake_autodetect(settings)

conan_cmake_install(
    PATH_OR_REFERENCE .
    BUILD missing
    REMOTE conancenter
    SETTINGS ${settings}
    OPTIONS qt:qtshadertools=True qt:qtdeclarative=True
)

find_package(Qt6 REQUIRED COMPONENTS
    Quick
)

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
    Qt6::Quick
)

include(GNUInstallDirs)
install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
