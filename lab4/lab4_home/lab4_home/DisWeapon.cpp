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
		cout << "Оружие " << name << " использоваено!" << endl;
		isUsed = true;
	}
	else {
		cout << "Оружие " << name << " уже было использовано!" << endl;
	}
}



bool DisWeapon::isWeaponUsed() const
{
	return isUsed;
}
