qt_add_library(qmlelement-exports)

qt_add_qml_module(qmlelement-exports
    URI "com.example.qmlelement.exports"
    VERSION 1.0
    OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/com/example/qmlelement/exports"
    SOURCES
    "CppQml.hpp"
    "NamedCppQml.hpp"
)
