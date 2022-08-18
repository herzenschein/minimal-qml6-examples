# QML5 Singleton Instance - Exporting a C++ singleton to QML

This is a minimal example to learn how to use [qmlRegisterSingletonInstance()](https://doc.qt.io/qt-6/qqmlengine.html#qmlRegisterSingletonInstance).

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data with a type you do not need to explicitly instantiate.

* Prefer the new `QML_SINGLETON` method over this.
* Prefer this over `setContextProperty()`.
* `Q_INVOKABLE` or slots apply here.
* Imports are mandatory. This allows to import only where necessary.
* Singletons made this way require a static factory function.
* When:
  * The static function is in-class, it is possible to hide the constructor, so it can be made to be a true C++ singleton, in addition to a QML one.
  * The static function is out-of-class, it is not possible to hide the constructor, so it is not a true C++ singleton, just a QML one.
