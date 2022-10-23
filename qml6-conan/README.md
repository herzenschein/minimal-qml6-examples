# QML6 with Conan - Qt shipped via package management

STILL A PROTOTYPE - DOESN'T WORK CURRENTLY

This is a minimal example to learn how to set up Conan so as to fetch and build Qt.

This project uses the new CMake API for Qt6 and Conan.

Use this whenever you want to automatically manage your app's dependencies.

Requirements:

* time to compile
* dependencies for Qt's dependencies

Using Conan requires minimal changes to code, but some preparation before building your project.

How to run it:

```
# Best practice: do all of this in a Python VENV
python3 -m venv .
source bin/active.sh

pip install conan

cmake -B build
cmake --build build
DESTDIR=appdir cmake --install build
```

To build with ninja instead of make for improved compilation times, use `-D CMAKE_GENERATOR=Ninja`.

Compiling Qt6 from scratch typically lasts half an hour, but with QtQuick (qtdeclarative) it takes longer.

If you see the following error:

`Can't locate xxxx in @INC`

Then a package is missing and, in this case, it's likely a Perl module, install it from your distro manually if needed.
