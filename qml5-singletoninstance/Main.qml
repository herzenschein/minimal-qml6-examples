import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material

import com.example.singletoninstance.dialogs

ApplicationWindow {
    title: "Minimal QML6 Singleton Example"
    visible: true
    minimumWidth: 700
    width: 700
    height: 700

    Material.theme: Material.Dark

    ColumnLayout {
        anchors.left: parent.left
        anchors.right: parent.right

        Label {
            Layout.alignment: Qt.AlignCenter
            Layout.topMargin: height
            text: "Two different dialogs in two different modules accessing the same data via SingletonInstance."
        }

        Item {
            Layout.fillHeight: true
        }
        Button {
            Layout.alignment: Qt.AlignCenter
            text: "Click me to set the Singleton properties"

            onClicked: setDialog.open()
        }

        Button {
            Layout.alignment: Qt.AlignCenter
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
