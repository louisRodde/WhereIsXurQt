#ifndef LISTITEM_H
#define LISTITEM_H

#include <QObject>

class Weapon;

class WeaponList : public QObject
{
    Q_OBJECT
    QList<Weapon*> m_files;
public:
    WeaponList();
    bool append(Weapon);

    Weapon *at(int place) const;
    int count() const;
    void createWeaponDetail(QString name, QString classe, QString type, QString effects);
    void removeWeapon(int position);

signals:
    void preWeaponAppended();
    void postWeaponAppended();

    void preWeaponRemoved(int index);
    void postWeaponRemoved();

    void WeaponChanged(int row);
};

#endif // LISTITEM_H
