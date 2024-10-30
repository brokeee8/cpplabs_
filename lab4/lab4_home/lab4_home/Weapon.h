#pragma once
#include <iostream>
#include "Characteristic.h"
enum class weaponType { ONEHANDED, TWOHANDED, BOW, CROSSBOW };
using namespace std;


class Weapon
{
    friend class Characteristic;
protected:
    string name;
    float damage;
    float weight;
    weaponType type;
    
public:


    Weapon(string name, float damage, float weight, weaponType type);
    Weapon();
    ~Weapon();
    
    string getName();
    virtual float getDamage();
    float getWeight();
    void setDamage(float newDamage);
    weaponType getWeaponType();
    virtual void print();

    bool weightCheck(int maxWeight);
    float weightSum(const Weapon& other);
    float weightSum(float otherWeight);


    bool operator>(Weapon& other);
    bool operator<(Weapon& other);
};


