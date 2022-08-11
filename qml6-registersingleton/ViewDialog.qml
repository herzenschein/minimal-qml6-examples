import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

import SingletonImport

Dialog {

    ColumnLayout {
        anchors.fill: parent

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "Your name is:"
        }

        TextField {
            Layout.alignment: Qt.AlignCenter
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your name"

            text: MySingleton.name
        }

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "Your age is:"
        }

        TextField {
            Layout.alignment: Qt.AlignCenter
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your age"

            text: MySingleton.age
        }

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "Your favorite thing is:"
        }

        TextField {
            Layout.alignment: Qt.AlignCenter
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your favorite thing"

            text: MySingleton.thing
        }
    }
}
