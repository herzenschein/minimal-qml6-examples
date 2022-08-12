import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

import TextRow
import Strings

ApplicationWindow {
    title: "Minimal QML6 Subdirectories Example"
    visible: true
    Material.theme: Material.Dark

    ColumnLayout {
        anchors.fill: parent

        Label {
            Layout.alignment: Qt.AlignCenter
            Layout.topMargin: 15
            text: "This window comes from <i>sub1/main.qml</i>"
        }

        Item {
            Layout.alignment: Qt.AlignCenter
            Layout.fillHeight: true
        }

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "This framed section comes from <i>sub1/sub2/TextRow.qml</i>"
        }

        TextRow {
            Layout.alignment: Qt.AlignCenter
            labelText: Strings.textForLabel
            fieldPlaceholder: Strings.textForField
        }

        Item {
            Layout.alignment: Qt.AlignCenter
            Layout.fillHeight: true
        }
    }
}
