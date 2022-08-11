import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

//  Import isn't needed here because the singleton QML file
//  was added in the same QML_FILES section in qt_add_qml_module.
//import PragmaSingletonExample

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

            text: PragmaSingleton.name
        }

        Label {
            text: "Your age is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your age"

            text: PragmaSingleton.age
        }

        Label {
            text: "Your favorite thing is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your favorite thing"

            text: PragmaSingleton.thing
        }
    }
}
