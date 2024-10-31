#pragma once
#include "Weapon.h"
class DisWeapon : public Weapon
{
public:

	DisWeapon(string name, float damage, float weight, weaponType type);



	void attack() override;

	bool isWeaponUsed() const;

private:
	bool isUsed = false;
};

