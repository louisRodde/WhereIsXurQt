import QtQuick 2.0
import Sailfish.Silica 1.0
import "../pages"


ListItem {
    id: weaponItem
    width: listView.width
    Label {
        text: name    
    }
    Label {
        id: label
        text: size
        anchors.right: parent.right
        anchors.rightMargin: Theme.paddingMedium
    }
    menu: ContextMenu {
        MenuItem {
            text: "Remove from Weapon"
            onClicked: listView.model.removeRow(index)
        }
        MenuItem {
            text: "Delete Weapon"
            onClicked: remorse.remorseDelete()

            RemorseItem {
                id: remorse
                function remorseDelete() {
                    var idx = index
                    remorse.execute(fileItem, "Deleting Weapon", function() { listView.model.removeRow(idx) }, 2000 )
                }
            }
        }
    }
    onClicked: pageStack.push( FirstPage, { weapon: weapon }  )
    Component {
        id: filePage
        FirstPage {}
    }
}
