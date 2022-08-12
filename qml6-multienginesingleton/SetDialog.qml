import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

// This import is required to use RegisterSingleton
import SingletonExample

Dialog {

    ColumnLayout {
        anchors.fill: parent

        Label {
            text: "Type your name here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your name"

            onTextChanged: RegisterSingleton.name = text
        }

        Label {
            text: "Type your age here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your age"

            onTextChanged: RegisterSingleton.age = parseInt(text)
        }

        Label {
            text: "Type your favorite thing here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your favorite thing"

            onTextChanged: RegisterSingleton.thing = text
        }
    }
}
