#include "weaponmodel.h"

WeaponModel::WeaponModel(QObject *parent)
    : QAbstractListModel(parent)
{

}

int WeaponModel::rowCount(const QModelIndex &parent) const
{

}

QVariant WeaponModel::data(const QModelIndex &index, int role) const
{

}

bool WeaponModel::setData(const QModelIndex &index, const QVariant &value, int role)
{

}

Qt::ItemFlags WeaponModel::flags(const QModelIndex &index) const
{

}

QHash<int, QByteArray> WeaponModel::roleNames() const
{

}

void WeaponModel::newElement()
{

}

void WeaponModel::removeRow(int index)
{

}

WeaponList *WeaponModel::name() const
{
    return m_weaponList;
}

void WeaponModel::setweaponList(WeaponList *weaponList)
{
    if (m_weaponList == weaponList)
        return;

    m_weaponList = weaponList;
    emit weaponListChanged(m_weaponList);
}
