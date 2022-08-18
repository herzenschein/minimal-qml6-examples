# QML5 Context Property - Exporting C++ data to QML

This is a minimal example to learn how to use [QQmlContext::setContextProperty()](https://doc.qt.io/qt-6/qqmlcontext.html#setContextProperty).

This project uses an old Qt5 method of exporting properties and functions to QML, but it uses the new CMake API for Qt6.

Use context property when you want to export data from a C++ object to every available QML file.

Important reminders:

* Context properties are ~~evil~~ global, as if the type were exposed before the UI loads, avoid them if you can. Accessing them is an expensive operation too. See https://raymii.org/s/articles/Qt_QML_Integrate_Cpp_with_QML_and_why_ContextProperties_are_bad.html.
* `QQmlContext::setContextProperty()` must be set before the engine loads the entrypoint QML file, otherwise you'll get a "ReferenceError: X is not defined".
* Non-slots need `Q_INVOKABLE`.
