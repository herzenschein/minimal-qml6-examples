cmake_minimum_required(VERSION 3.20)

project(qml6-conan)

# Conan generates several Find<PkgName> in the build folder (CMAKE_BINARY_DIR).
# This includes all of them as well as Conan's Qt cmake files.
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

# This is needed for the following conan_ macros.
file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake" "${CMAKE_BINARY_DIR}/conan.cmake")
include(${CMAKE_BINARY_DIR}/conan.cmake)

# This is equivalent to what you'd write in a conanfile.py or conanfile.txt.
conan_cmake_configure(
    REQUIRES qt/6.3.1
    GENERATORS cmake_find_package qt
)

conan_cmake_autodetect(settings)

# This is equivalent to what you'd write with conan install.
# e.g. conan install . --build missing --remote conancenter --options qt:qtshadertools=True qt:qtdeclarative=True
conan_cmake_install(
    PATH_OR_REFERENCE .
    BUILD missing
    REMOTE conancenter
    SETTINGS ${settings}
    OPTIONS qt:qtshadertools=True qt:qtdeclarative=True
)

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
    QML_FILES "main.qml"
)

# Normal target_link_library calls too.
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Quick
)

include(GNUInstallDirs)
install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
