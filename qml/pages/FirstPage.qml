import QtQuick 2.0
import Sailfish.Silica 1.0
import FileModel 1.0

Page {
    id: page

    // The effective value will be restricted by ApplicationWindow.allowedOrientations
    allowedOrientations: Orientation.All

    SilicaListView {
        id: listView
        anchors.fill: parent
        header: PageHeader { title: qsTr("My Weapons")   }

        model: WeaponModel { list: filesFromTmp }
        VerticalScrollDecorator {}
    }
}
