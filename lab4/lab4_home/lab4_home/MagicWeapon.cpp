#include "MagicWeapon.h"
#include "Weapon.h"

MagicWeapon::MagicWeapon(string name, float damage, float weight, weaponType type, float addDamage) {
	this->name = name;
	this->damage = damage;
	this->weight = weight;
	this->type = type;
	this->addDamage = addDamage;
}

MagicWeapon::MagicWeapon()
{
}

float MagicWeapon::getAddDamage()
{
	return addDamage;
}

void MagicWeapon::print()
{
	Weapon::print();
	cout << "AddDamage: " << addDamage << endl;
}

float MagicWeapon::getDamage()
{
	return (damage+addDamage);
}


void MagicWeapon::attack()
{
	cout << "Атакуем магическим оружием" << endl;
}
