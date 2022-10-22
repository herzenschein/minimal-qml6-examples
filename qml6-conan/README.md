# QML6 with Conan - Qt shipped via package management

This is a minimal example to learn how to set up Conan so as to fetch and build Qt.

This project uses the new CMake API for Qt6.

Use this whenever you want to automatically manage your app's dependencies.

Requirements:

* conanfile.txt
* installing Qt's build dependencies
* no manual library linking to Qt, use the convenience variable ${CONAN_LIBS} instead
* conan_basic_setup()
* find_package is still needed for the new CMake Qt6 API

Using Conan requires minimal changes to code, but some preparation before building your project.

How to run it:

```
# Best practice: do all of this in a Python VENV
python3 -m venv .
source bin/active.sh

pip install conan

# If using anything over C++11, set this
conan profile update settings.compiler.libcxx=libstdc++11 default
# Set the install folder to our future out-of-tree build/ folder
# Allow Conan to query your system to install needed dependencies
# Let Conan use sudo to install needed dependencies
# Whatever cannot be installed, build it
conan install . --install-folder build --build missing -c tools.system.package_manager:mode=install -c tools.system.package_manager:sudo=True
cmake -B build
cmake --build build
DESTDIR=appdir cmake --install build
```

To build with ninja instead of make, use `CONAN_CMAKE_GENERATOR=Ninja`.

Compiling Qt6 from scratch should probably take half an hour, depending on your hardware.

If you see the following error:

`Can't locate xxxx in @INC`

Then a package is missing and, in the case of Qt, it's likely a Perl module, install it from your distro manually if needed.
