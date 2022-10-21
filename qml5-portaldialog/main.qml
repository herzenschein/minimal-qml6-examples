import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Dialogs 1.3

ApplicationWindow {
    visible: true
    width: 300
    height: 300
    title: "QML5 File Dialog using XDG portals"
    Button {
        text: "This opens a dialog."
        anchors.centerIn: parent
        onClicked: dialog.open()
    }
    FileDialog {
        id: dialog
    }
}
