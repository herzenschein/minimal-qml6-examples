# QML6 QML_ELEMENT - Exporting C++ data to QML

This is a minimal example to learn how to export functions and properties from C++ to QML using `QML_ELEMENT` and `QML_NAMED_ELEMENT`.

Important reminders:

* Prefer this over `setContextProperty` and `qmlRegisterType`.
* The macros `QML_ELEMENT` and `QML_NAMED_ELEMENT` require the `Qml` dependency.
* Properties and functions exported via this method require at least one instantiation to be used.
