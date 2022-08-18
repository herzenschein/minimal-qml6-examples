# QML6 Pragma Singleton - QML-exclusive singleton

This is a minimal example to learn how to use [pragma singleton](https://doc.qt.io/QtForMCUs-2.2/qtul-qml-singleton.html).

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data with a type you do not need to explicitly instantiate.

Important reminders:

* Prefer `QML_ELEMENT` singletons from C++ over this.
* Prefer this over `setContextProperty()`, `qmlRegisterSingletonInstance()` and `qmlRegisterSingletonType()`.
* Note that the QML file needs to have a `QT_QML_SINGLETON_TYPE` property set via `set_source_files_properties()`, otherwise the program hangs after importing the singleton.
* Imports are not mandatory; they may be ignored if the singleton QML file is in the same context as the files where it's used. They are mandatory, however, if we were to put them in a different qt_add_qml_module with its own URI.
* This sort of singleton is arguably safer: it is a pure QML singleton, so there's no C++ singleton to worry about.
* To allow QML singletons to be used from C++, you'll need to use QQmlComponents. See https://doc.qt.io/qt-6/qtqml-cppintegration-interactqmlfromcpp.html.
