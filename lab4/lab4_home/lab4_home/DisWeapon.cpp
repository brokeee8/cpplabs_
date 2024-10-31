#include "DisWeapon.h"

DisWeapon::DisWeapon(string name, float damage, float weight, weaponType type) {
	this->name = name;
	this->damage = damage;
	this->weight = weight;
	this->type = type;
}

void DisWeapon::attack()
{
	if (!isUsed) {
		cout << "������ " << name << " �������������!" << endl;
		isUsed = true;
	}
	else {
		cout << "������ " << name << " ��� ���� ������������!" << endl;
	}
}



bool DisWeapon::isWeaponUsed() const
{
	return isUsed;
}
