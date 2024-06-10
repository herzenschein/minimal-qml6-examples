cmake_minimum_required(VERSION 3.20)

project(qml6-conan)

# Conan generates several Find<PkgName> in the build folder (CMAKE_BINARY_DIR).
# This includes all of them as well as Conan's Qt cmake files.
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

# This way, we can use normal find_package calls.
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
    RESOURCE_PREFIX "/"
    QML_FILES "main.qml"
)

# Normal target_link_library calls too.
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Quick
)

include(GNUInstallDirs)
install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
