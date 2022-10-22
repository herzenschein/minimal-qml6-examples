# QML6 FileChooser XDG Portal - Using a file picker

This is a minimal example to learn how to use the FileChooser portal to use the native Linux file picker using QtQuick's FileDialog.

This project uses the new CMake API for Qt6.

Important reminders:

* If the app isn't sandboxed, Qt6's FileDialog WON'T be able to use the native file picker just yet, unlike Qt5's, which CAN.
* If the app is sandboxed (e.g. flatpak or snap), Qt6's FileDialog calls the relevant implementation of xdg-desktop-portal to use the native file picker.
* At the time of writing (23/10/2022), xdg-desktop-portal-kde still uses a QtWidgets implementation, therefore using the FileChooser portal requires that you use QtWidget's QApplication instead of QtQuick's QGuiApplication.

In summary, in order to use the FileChooser portal via Qt6's FileDialog: 

* Use FileDialog
* Package it as a flatpak or similar
* Use QApplication

To package this as a flatpak:

```
flatpak remote-add --user --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo
flatpak-builder build --user --install-deps-from=flathub --force-clean --ccache --install org.kde.qml6-portaldialog.json
flatpak run org.kde.qml6-portaldialog.json
```
