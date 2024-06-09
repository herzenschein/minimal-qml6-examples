import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material

import com.example.pragmasingleton.singletons

Dialog {
    id: root
    ColumnLayout {
        anchors.fill: parent

        Label {
            text: "Type your name here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your name"

            onTextChanged: PragmaSingleton.name = text
        }

        Label {
            text: "Type your age here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your age"

            onTextChanged: PragmaSingleton.age = parseInt(text)
        }

        Label {
            text: "Type your favorite thing here:"
        }

        TextField {
            Layout.fillWidth: true
            placeholderText: "Your favorite thing"

            onTextChanged: PragmaSingleton.thing = text
        }
        Button {
            Layout.alignment: Qt.AlignCenter
            text: "Confirm"
            onClicked: root.close()
        }
    }
}
