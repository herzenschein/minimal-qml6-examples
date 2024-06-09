import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

// ApplicationWindow comes from Controls
// and has nice extras, like theme integration.
ApplicationWindow {
    title: _windowtitle
    visible: true

    width: 500
    height: 500

    Material.theme: Material.Dark

    ColumnLayout {
        anchors.fill: parent

        Button {
            Layout.alignment: Qt.AlignCenter

            text: MyCppFunctions.normalString()
            onClicked: {
                MyCppFunctions.normalMethod()
            }
        }

        Button {
            Layout.alignment: Qt.AlignCenter

            text: MyCppFunctions.publicString()
            onClicked: {
                MyCppFunctions.publicSlot()
            }
        }

        Button {
            Layout.alignment: Qt.AlignCenter

            text: {
                // JS ternary operator
                MyCppFunctions.privateString
                ? MyCppFunctions.privateString()
                : "This private string is inaccessible"
            }

            onClicked: {
                // JS ternary operator
                MyCppFunctions.privateSlot
                ? MyCppFunctions.privateSlot()
                : console.info("This private slot is inaccessible")
            }
        }
    }
}
