import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

// This comes from qmlRegisterSingletonType()
import SingletonImport

Dialog {

    ColumnLayout {
        anchors.fill: parent

        Label {
            text: "Type your name here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your name"

            onTextChanged: SingletonType.name = text
        }

        Label {
            text: "Type your age here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your age"

            onTextChanged: SingletonType.age = parseInt(text)
        }

        Label {
            text: "Type your favorite thing here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your favorite thing"

            onTextChanged: SingletonType.thing = text
        }
    }
}
