import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

import com.example.singleton.singletons

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

            text: MySingleton.name
        }

        Label {
            text: "Your age is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your age"

            text: MySingleton.age
        }

        Label {
            text: "Your favorite thing is:"
        }

        TextField {
            Layout.fillWidth: true
            readOnly: true
            placeholderText: "Your favorite thing"

            text: MySingleton.thing
        }
    }
}
