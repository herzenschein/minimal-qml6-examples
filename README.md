# minimal-qml6-examples

A collection of minimal QML examples.

This repository serves as a learning tool for myself and as easy-to-understand documentation for others.

## Current examples:

QML5:

* [QML5 Context Property - Exporting C++ data to QML](qml5-contextproperty)
  * Avoid this.
* [QML5 Singleton Type - Exporting a C++ singleton to QML](qml5-singletontype)
  * Prefer Singleton Instance instead of this.
    *  Prefer QML_SINGLETON instead of Singleton Instance.
* [QML5 Singleton Instance - Exporting a C++ singleton to QML](qml5-singletoninstance)
  * Prefer QML_SINGLETON.
* [QML5 using the Flatpak portal dialog](qml5-portaldialog)

QML6:

* [QML6 QML_ELEMENT - Exporting C++ data to QML](qml6-qmlelement)
* [QML6 QML_SINGLETON - Exporting a C++ singleton to QML](qml6-singleton)
* [QML6 Pragma Singleton - QML-exclusive singleton](qml6-pragmasingleton)
* [QML6 Subdirectories - Handle QML modules over subdirectories](qml6-subdirectories)
* [QML6 using the Flatpak portal dialog](qml6-portaldialog)
* [QML6 using Conan]

Planned:

* Add more information about OUTPUT_DIRECTORY in qml6-subdirectories
* Create qml6-defaultresource based on https://doc.qt.io/qt-6/qt-cmake-policies.html
* Update qml6-conan with Conan 2.0
* Create qml6-cmakeconan
* Create qml6-vcpkg
* Create qml6-portalscreencast

