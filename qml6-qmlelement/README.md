# QML6 QML_ELEMENT - Exporting C++ data to QML

This is a minimal example to learn how to export functions and properties from C++ to QML using [QML_ELEMENT](https://doc.qt.io/qt-6/qqmlengine.html#QML_ELEMENT) and [QML_NAMED_ELEMENT](https://doc.qt.io/qt-6/qqmlengine.html#QML_NAMED_ELEMENT).

This project uses the new CMake API for Qt6.

Use this when you want to expose anything from C++ to QML.

Important reminders:

* Prefer this over `setContextProperty()` and `qmlRegisterType()`.
* The macros `QML_ELEMENT` and `QML_NAMED_ELEMENT` require the `Qml` dependency.
* Properties and functions exported via this method require at least one instantiation to be used, unless another method is used to prevent that (e.g. `QML_SINGLETON` + static factory function).
