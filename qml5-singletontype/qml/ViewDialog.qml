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
            text: "Your name is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your name"

            text: SingletonType.name
        }

        Label {
            text: "Your age is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your age"

            text: SingletonType.age
        }

        Label {
            text: "Your favorite thing is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your favorite thing"

            text: SingletonType.thing
        }
    }
}
