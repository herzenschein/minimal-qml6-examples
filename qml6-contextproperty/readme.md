# QML6 Context Property - Exporting only C++ functions to QML

This is a minimal example to learn how to use [QQmlContext::setContextProperty](https://doc.qt.io/qt-6/qqmlcontext.html#setContextProperty).

This project uses the new CMake API for Qt6.

Use context property when you want to export functions from a C++ object to a QML file.

Important reminders:

* QQmlContext::setContextProperty must be set before the engine loads the entrypoint QML file, otherwise you'll get a "ReferenceError: X is not defined".
* Non-slots need Q_INVOKABLE
