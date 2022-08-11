 # QML6 Singleton - Exporting a singleton from QML to QML

This is a minimal example to learn how to export a QML singleton to QML.

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data or enums.

Important reminders:

* Note that the QML file needs to have a QT_QML_SINGLETON_TYPE property set via set_sources_files_properties(), otherwise the program hangs.
* Imports are not mandatory; they may be ignored if the singleton QML file is in the same context as the files where it's used.
* This allows to ditch qmlRegisterSingletonInstance and qmlRegisterSingletonType entirely.
* This sort of singleton is safer: the object is ensured to not be manually instantiable.
* To allow QML singletons to be used in C++, you'll need to use QQmlComponents. See https://doc.qt.io/qt-6/qtqml-cppintegration-interactqmlfromcpp.html.
