import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

// ApplicationWindow comes from Controls
// and has nice extras, like theme integration.
ApplicationWindow {
    title: "Minimum QML6 Context Property Example"
    visible: true

    Material.theme: Material.Dark

    ColumnLayout {
        anchors.fill: parent

        Button {
            Layout.alignment: Qt.AlignCenter

            text: MyCPPFunctions.normalString()
            onClicked: {
                MyCPPFunctions.normalMethod()
            }
        }

        Button {
            Layout.alignment: Qt.AlignCenter

            text: MyCPPFunctions.publicString()
            onClicked: {
                MyCPPFunctions.publicSlot()
            }
        }

        Button {
            Layout.alignment: Qt.AlignCenter

            text: {
                // JS ternary operator
                MyCPPFunctions.privateString
                ? MyCPPFunctions.privateString()
                : "This private string is inaccessible"
            }

            onClicked: {
                // JS ternary operator
                MyCPPFunctions.privateSlot
                ? MyCPPFunctions.privateSlot()
                : console.info("This private slot is inaccessible")
            }
        }
    }
}
