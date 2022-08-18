import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

// This comes from qmlRegisterSingletonInstance()
import SingletonImport

Dialog {

    ColumnLayout {
        anchors.fill: parent

        Label {
            text: "Your name is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your name"

            text: SingletonInstance.name
        }

        Label {
            text: "Your age is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your age"

            text: SingletonInstance.age
        }

        Label {
            text: "Your favorite thing is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your favorite thing"

            text: SingletonInstance.thing
        }
    }
}
