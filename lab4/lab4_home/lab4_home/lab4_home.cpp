﻿#include <iostream>
#include <Windows.h>
#include "Characteristic.h"
#include "Weapon.h"
#include "MyMath.h"
#include "MagicWeapon.h"
using namespace std;





struct player {
    int id;
    string login;
    string password;

    
};
void getData(player& player) {
        cout << "ID: " << player.id << endl;
        cout << "Login: " << player.login << endl;
        cout << "Password: " << player.password << endl;
    }
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    //Weapon pistol("Pistol", 10, 5);
    //Weapon w = Weapon();

    //cout << pistol.name << " " << pistol.damage << " " << pistol.weight << endl;
    //cout << w.name << " " << w.damage << " " << w.weight << endl;


    /*Weapon shotgun("Shotgun", 25, 10, weaponType::TWOHANDED);
    cout << shotgun.getName() << " " << shotgun.getDamage() << " " << shotgun.getWeight() << endl;

    Weapon* sword = new Weapon("Sword", 8, 6, weaponType::ONEHANDED);
    cout << sword->getName() << " " << sword->getDamage() << " " << sword->getWeight() << endl;

    int maxWeight = 7;

    if (shotgun.weightCheck(maxWeight)) {
        cout << "Не сможет поднять оружие " << shotgun.getName() << endl;
    }
    else {
        cout << "Сможет поднять оружие" << shotgun.getName() << endl;
    }

    if (sword->weightCheck(maxWeight)) {
        cout << "Не сможет поднять оружие " << sword->getName() << endl;
    }
    else {
        cout << "Сможет поднять оружие " << sword->getName() << endl;
    }
    
    cout << "Суммарный вес Shotgun и Sword " << shotgun.weightSum(*sword) << endl;
    cout << "Суммарный вес Shotgun и ... " << shotgun.weightSum(15) << endl;
    
    cout << "Shotgun damage: " << shotgun.getDamage() << endl;
    shotgun.setDamage(12);
    cout << "Shotgun new damage: " << shotgun.getDamage() << endl;

    Weapon crossbow("Crossbow", 7, 2, weaponType::CROSSBOW);
    Characteristic charac(3);

    cout << "Sword урон: " << sword->getDamage() << endl;
    float newDamage = charac.getDamage(*sword);
    cout << "Суммарный урон: " << newDamage << endl;


    float z = 34;
    float y = 21;
    cout << "Z = " << z << " Y = " << y << endl;
    cout << "Add: " << MyMath::Add(z, y) << endl;
    cout << "Sub: " << MyMath::Sub(z, y) << endl;
    cout << "Mult: " << MyMath::Mult(z, y) << endl;
    cout << "Div: " << MyMath::Div(z, y) << endl;
    cout << "Всего операций: " << MyMath::getOperation() << endl;

    if (crossbow.getWeaponType() == weaponType::ONEHANDED) {
        cout << "Одноручное оружие" << endl;
    }
    else if (crossbow.getWeaponType() == weaponType::TWOHANDED) {
        cout << "Двуручное оружие" << endl;
    }
    else if (crossbow.getWeaponType() == weaponType::CROSSBOW) {
        cout << "Арбалет" << endl;
    }
    else if (crossbow.getWeaponType() == weaponType::BOW) {
        cout << "Лук" << endl;
    }


    MagicWeapon m1;

    player dima = { 213, "dima123", "124124" };
    getData(dima);




    MagicWeapon staff("Wizard staff", 12, 2, weaponType::ONEHANDED, 3);
    cout << staff.getName() << endl;
    cout << staff.getAddDamage() << endl;
    cout << "Переписанная функция getDamage: " << staff.getDamage() << endl;
    if (staff > shotgun) {
        cout << staff.getDamage() << " > " << shotgun.getDamage() << endl;
    }
    else {
        cout << staff.getDamage() << " <= " << shotgun.getDamage() << endl;
    }


    delete sword;*/
    MagicWeapon staff("Wizard staff", 12, 2, weaponType::ONEHANDED, 3);
    cout << staff.getName() << endl;
    staff.attack();
}

