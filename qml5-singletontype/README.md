# QML5 SingletonType - Exporting a C++ singleton to QML

This is a minimal example to learn how to export a singleton to QML.

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data with a type you do not need to explicitly instantiate.

* Prefer the new `QML_SINGLETON` method over this.
* Prefer this over `setContextProperty()`.
* `Q_INVOKABLE` or slots apply here.
* Imports are mandatory. This allows to import only where necessary.
* Singletons made this way require a static factory function.
* It is not possible to hide the constructor this way because it is used by the callback, so this isn't truly a C++ singleton.
