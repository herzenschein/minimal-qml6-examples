# QML5 Singleton Type - Exporting a C++ singleton to QML

This is a minimal example to learn how to use [qmlRegisterSingletonType()](https://doc.qt.io/qt-6/qqmlengine.html#qmlRegisterSingletonType-1).

This project uses the new CMake API for Qt6.

* Prefer the new `QML_SINGLETON` method over this.
* Prefer this over `setContextProperty()`.
* `Q_INVOKABLE` or slots apply here.
* Imports are mandatory. This allows to import only where necessary.
* Singletons made this way require an out-of-class static factory function.
* It is not possible to hide the constructor this way because it is used by the callback, so this isn't truly a C++ singleton, only a QML one.
