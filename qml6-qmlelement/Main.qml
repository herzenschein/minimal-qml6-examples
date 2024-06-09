import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

import com.example.qmlelement.exports

ApplicationWindow {
    id: root
    title: normal.title()
    visible: true
    width: 600
    height: 300

    Material.theme: Material.Dark

    CppQml {
        id: normal
        text: "Look, this is exposed via QML_ELEMENT and set from QML!"
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
