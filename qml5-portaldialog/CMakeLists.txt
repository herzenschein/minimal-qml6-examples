cmake_minimum_required(VERSION 3.20)

project(qml5-portaldialog)

find_package(Qt5 REQUIRED COMPONENTS Quick Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(${PROJECT_NAME}
	"main.cpp"
	"qmlfile.qrc"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
	Qt5::Quick
	Qt5::Widgets
)

include(GNUInstallDirs)

install(FILES ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
