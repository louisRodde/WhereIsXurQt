#include "WeaponList.h"
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>


WeaponList::WeaponList()
{

    //QStringList propertyNames;
    //QStringList propertyKeys;

    QFile file(QStringLiteral("weapons.json"));

    if (!file.open(QIODevice::ReadOnly)) {
            qWarning("Couldn't open save file.");
    }

    QByteArray json = file.readAll();


    // Lire le json pour remplir la liste
    QJsonDocument doc = QJsonDocument(QJsonDocument::fromJson(json));

    QJsonObject objet(doc.object());

    QJsonArray array(objet["weapons"].toArray());

    foreach (const QJsonValue & value, array) {
        QJsonObject obj = value.toObject();
        //propertyNames.append(obj["name"].toString());
        //propertyKeys.append(obj["effect"].toString());
        QTextStream(stdout) << obj["name"].toString()
                            << "coming from the json \n";
    }
}
