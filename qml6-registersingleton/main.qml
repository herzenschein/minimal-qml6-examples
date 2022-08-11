import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

//  The singleton import is not required here
//  because main.qml is not using it directly.
//import SingletonImport

// ApplicationWindow comes from Controls
// and has nice extras, like theme integration.
ApplicationWindow {
    title: "Minimum QML6 Register Singleton Example"
    visible: true

    Material.theme: Material.Dark

    ColumnLayout {
        anchors.fill: parent

        Item {
            Layout.fillHeight: true
        }

        Button {
            Layout.fillWidth: true
            Layout.fillHeight: false
            Layout.alignment: Qt.AlignCenter | Qt.AlignBottom
            text: "Click me to set the Singleton properties"

            onClicked: setDialog.open()
        }

        Button {
            Layout.fillWidth: true
            Layout.fillHeight: false
            Layout.alignment: Qt.AlignCenter | Qt.AlignBottom
            text: "Click me to view the Singleton properties"

            onClicked: viewDialog.open()
        }
    }

    // Two different dialogs in two different modules
    // accessing the same data via MySingleton
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
