 # QML6 Singleton - Exporting a C++ singleton to QML - multiengine method

This is a minimal example to learn how to export a singleton to QML.

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data with a type you do not need to explicitly instantiate.

Use this method to be able to instantiate the same singleton in multiple Qml engines. This means: the C++ code is not a singleton, the exported QML is.

Important reminders:

* Prefer this over setContextProperty.
* Prefer the new macros `QML_ELEMENT` and `QML_SINGLETON` over `qmlRegisterSingletonInstance` and `qmlRegisterSingletonType`.
* `Q_INVOKABLE` or slots apply here.
* Imports are mandatory. This allows to import only where necessary.
* This is not a C++ singleton, only a QML singleton, which slightly makes it easier to use. This is normally not a problem since you'll probably only handle such a singleton via QML. If you want to hinder instantiation of a QML singleton in the C++ code and allow only one engine to create a single instance of your singleton, you should use the single engine method.
