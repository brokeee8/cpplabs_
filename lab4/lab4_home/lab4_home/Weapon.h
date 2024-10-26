#pragma once
#include <iostream>
#include "Characteristic.h"
using namespace std;


class Weapon
{
    friend class Characteristic;
private:
    string name;
    float damage;
    float weight;
    
public:


    Weapon(string name, float damage, float weight);
    ~Weapon();
    
    string getName();
    float getDamage();
    float getWeight();
    void setDamage(float newDamage);


    bool weightCheck(int maxWeight);
    float weightSum(const Weapon& other);
    float weightSum(float otherWeight);
};


