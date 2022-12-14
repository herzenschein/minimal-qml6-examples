# QML6 QML_SINGLETON - Exporting a C++ singleton to QML

This is a minimal example to learn how to export a singleton to QML.

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data with a type you do not need to explicitly instantiate.

Important reminders:

* Prefer this over `setContextProperty()` and any `qmlRegister*()` functions.
* `Q_INVOKABLE` or slots apply here.
* Imports are mandatory. This allows to import only where necessary.
* Singletons made this way require either a defaulted constructor or a static factory function, as they serve as entrypoints for the singleton. Remove both, and the singleton is inaccessible from QML.
* If you use a defaulted constructor, the constructor must be public (it is not truly a C++ singleton, only a QML singleton).
* If you use a static factory function, you may hide/delete special member functions and make it a safe C++ singleton in addition to a QML one.
