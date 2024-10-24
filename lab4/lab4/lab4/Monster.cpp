#include "Monster.h"
#include <iostream>
using namespace std;


void Monster::printWarning(string msg) {
    cout << "Warning " << msg << endl;
}

Monster::Monster(string name, float health, float damage, float maxHealth) {
        this->damage = damage;
        this->health = health;
        this->name = name;
        this->maxHealth = maxHealth;
    }

Monster::~Monster() {
        cout << "Объект " << this->name << " уничтожается" << endl;
    }

string Monster::getName()
{
    return this->name;
}

float Monster::getHealth() {
    if (health > maxHealth) this->health = maxHealth;
    else if (health >= 0) this->health = health;
    else (printWarning("health<0"));
    return this->health;
}

float Monster::getMaxHealth() {
    return this->maxHealth;
}

float Monster::getDamage() {
    return this->damage;
}

void Monster::setName(string name) {
    this->name = name;
}

void Monster::setHealth(float health) {

    this->health = health;
}

void Monster::setMaxHealth(float maxHealth) {
    this->maxHealth = maxHealth;
}

void Monster::setDamage(float damage) {
    this->damage = damage;
}



    float Monster::getLevel() {
        return this->maxHealth / 5;
    }

    void Monster::applyDamage(float damage) {
        this->health -= damage;
    }

    void Monster::recovery() {
        this->health = maxHealth;
    }

    void Monster::attack(Monster& m) {
        m.applyDamage(damage);
    }


