 # QML6 Singleton - Exporting a singleton to QML

This is a minimal example to learn how to export a singleton to QML using the new, easy way.

This project uses the new CMake API for Qt6.

Use a singleton when you need globally accessible data or enums.

Important reminders:

* Prefer this over setContextProperty.
* `Q_INVOKABLE` or slots apply here.
* Imports are mandatory. This allows to import only where necessary.
* The new macros QML_ELEMENT and QML_SINGLETON allow to ditch qmlRegisterSingletonInstance and qmlRegisterSingletonType entirely.
* QML singletons are not C++ singletons. This is normally not a problem since you'll probably only handle such a singleton via QML. If you want to hinder instantiation of a QML singleton in the C++ code, you should add a traditional C++ singleton design too: a static method to access a guaranteed-to-be single instance + constructor inaccessible externally by means of the `private` access modifier. Bonus points if you delete the copy constructor, as C++ singletons can be copied with something as simple as `SingletonClass copy = SingletonClass::getInstance()`.
