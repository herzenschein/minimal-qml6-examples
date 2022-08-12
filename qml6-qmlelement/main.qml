import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

import QmlFromCpp

ApplicationWindow {
    id: root
    title: normal.title()
    visible: true
    Material.theme: Material.Dark

    NormalCppQml {
        id: normal
        text: "Look, this is exposed via QML_ELEMENT and set from QML"
    }

    // Note the type name
    NamedQml {
        id: named
    }

    ColumnLayout {
        anchors.fill: parent

        Frame {
            Layout.alignment: Qt.AlignCenter
            Label {
                text: normal.text
            }
        }
        Frame {
            Layout.alignment: Qt.AlignCenter
            Label {
                text: named.text
            }
        }
    }
}
