import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

// Unlike context properties, an import is required
import SingletonImport

Dialog {

    ColumnLayout {
        anchors.fill: parent

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "Type your name here:"
        }

        TextField {
            Layout.alignment: Qt.AlignCenter
            Layout.fillWidth: true
            placeholderText: "Your name"

            onTextChanged: MySingleton.name = text
        }

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "Type your age here:"
        }

        TextField {
            Layout.alignment: Qt.AlignCenter
            Layout.fillWidth: true
            placeholderText: "Your age"

            onTextChanged: MySingleton.age = parseInt(text)
        }

        Label {
            Layout.alignment: Qt.AlignCenter
            text: "Type your favorite thing here:"
        }

        TextField {
            Layout.alignment: Qt.AlignCenter
            Layout.fillWidth: true
            placeholderText: "Your favorite thing"

            onTextChanged: MySingleton.thing = text
        }
    }
}
