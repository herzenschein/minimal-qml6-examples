import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Frame {
    property alias labelText: label.text
    property alias fieldPlaceholder: field.placeholderText
    RowLayout {
        anchors.fill: parent
        spacing: 30
        Label {
            id: label
        }
        TextField {
            Layout.fillWidth: true
            id: field
        }
    }
}
