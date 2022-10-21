import QtQuick
import QtCore
import QtQuick.Controls
import QtQuick.Dialogs

ApplicationWindow {
    visible: true
    width: 300
    height: 300
    title: "QML6 File Dialog using XDG portals"
    Button {
        text: "This opens a dialog."
        anchors.centerIn: parent
        onClicked: dialog.open()
    }
    FileDialog {
        id: dialog
    }
}
