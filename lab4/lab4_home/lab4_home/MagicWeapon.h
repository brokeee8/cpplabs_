#pragma once
#include "Weapon.h"

class MagicWeapon : public Weapon
{
private:
	float addDamage;
public:
	MagicWeapon(string name, float damage, float weight, weaponType type, float addDamage);
	MagicWeapon();
	float getAddDamage();
	void print() override;
	float getDamage() override;
};					

