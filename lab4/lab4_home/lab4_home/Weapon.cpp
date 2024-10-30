#include "Weapon.h"
#include <iostream>
using namespace std;

Weapon::Weapon(string name, float damage, float weight, weaponType type) {
    this->damage = damage;
    this->weight = weight;
    this->name = name;
    this->type = type;
}

Weapon::Weapon()
{
}



Weapon::~Weapon() {
    cout << "Объект " << this->name << " удалился" << endl;
}

string Weapon::getName()
{
    return name;
}

float Weapon::getDamage()
{
    return damage;
}

float Weapon::getWeight()
{
    return weight;
}

void Weapon::setDamage(float newDamage)
{
    damage = newDamage;
}

weaponType Weapon::getWeaponType()
{
    return type;
}

void Weapon::print()
{
    cout << "Name: " << name << endl;
    cout << "Damage: " << damage << endl;
    cout << "Weight: " << weight << endl;
}



bool Weapon::weightCheck(int maxWeight)  {
    return this->weight > maxWeight;
}

float Weapon::weightSum(const Weapon& other)  {
    return weightSum(other.weight);
}
float Weapon::weightSum(float otherWeight)  {
    return weight + otherWeight;
}

bool Weapon::operator>(Weapon& other) 
{
    return this->getDamage() > other.getDamage();
}

bool Weapon::operator<(Weapon& other)
{
    return this->getDamage() < other.getDamage();
}
