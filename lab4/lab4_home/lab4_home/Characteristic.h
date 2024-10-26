#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;

class Characteristic
{
	friend class Weapon;
private:
	float power;

public:
	
	
	Characteristic(float power);

	float getDamage(Weapon& weapon);

	float getPower();
		
};

