#include "Characteristic.h"
#include "Weapon.h"
#include <iostream>
using namespace std;

Characteristic::Characteristic(float power)
{
	this->power = power;
}

float Characteristic::getDamage(Weapon& weapon)
{
	return power + weapon.damage;
}

float Characteristic::getPower()
{
	return power;
}
