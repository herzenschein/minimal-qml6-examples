import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

ApplicationWindow {
    title: "Minimal QML6 Pragma Singleton Example"
    visible: true
    minimumWidth: 600

    Material.theme: Material.Dark

    ColumnLayout {
        anchors.fill: parent

        Item {
            Layout.fillHeight: true
        }

        Label {
            Layout.fillWidth: true
            Layout.fillHeight: false
            horizontalAlignment: Qt.AlignHCenter
            text: "Two different dialogs in two different modules accessing the same data via MySingleton."
        }

        Button {
            Layout.fillWidth: true
            Layout.fillHeight: false
            text: "Click me to set the Singleton properties"

            onClicked: setDialog.open()
        }

        Button {
            Layout.fillWidth: true
            Layout.fillHeight: false
            text: "Click me to view the Singleton properties"

            onClicked: viewDialog.open()
        }
    }

    SetDialog {
        id: setDialog
        parent: Overlay.overlay
        anchors.centerIn: parent
        width: parent.width / 2
        height: parent.height / 2
    }

    ViewDialog {
        id: viewDialog
        parent: Overlay.overlay
        anchors.centerIn: parent
        width: parent.width / 2
        height: parent.height / 2
    }
}
