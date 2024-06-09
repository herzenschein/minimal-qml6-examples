cmake_minimum_required(VERSION 3.23)

# First argument will be PROJECT_NAME
project(qml6-pragmasingleton LANGUAGES CXX)

# We need to find Qt before we can use
# the new Qt CMake API
find_package(Qt6 REQUIRED COMPONENTS Quick)

# Autoconfigures AUTOMOC, AUTORCC, AUTOUIC etc.
qt_standard_project_setup()

qt_policy(SET QTP0001 NEW)

# Create a target executable
qt_add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
    PRIVATE
    "main.cpp"
)

# This automatically creates resources,
# so avoid using qt_add_resources() with it.
# If we had a qrc file, we'd put after the first argument.
# This generates a resource like this:
# qrc: + RESOURCE_PREFIX + URI + / + QML_FILES
# so qrc:/qt/qml/com/example/pragmasingleton/Main.qml
qt_add_qml_module(${PROJECT_NAME}
    URI "com.example.pragmasingleton"
    VERSION 1.0
    QML_FILES
    "Main.qml"
)

# Finish by linking the necessary Qt libraries
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    Qt6::Quick
    pragmasingleton-dialogs
    pragmasingleton-singletons
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
