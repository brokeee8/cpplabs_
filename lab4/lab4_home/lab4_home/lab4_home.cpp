#include <iostream>
#include <Windows.h>
using namespace std;

class Weapon {
public:
    string name;
    float damage;
    float weight;

    Weapon(string name, float damage, float weight) : name(name), damage(damage), weight(weight) {}

    Weapon() : Weapon("Weapon", 1, 1) {};

    ~Weapon() {
        cout << "Объект " << name << " удаляется." << endl;
    }

    bool weightCheck(int maxWeight) const {
        return weight > maxWeight;
    }
    
    float weightSum(const Weapon& other) const{
        return weightSum(other.weight);
    }
    float weightSum(float otherWeight) const {
        return weight + otherWeight;
    }
};




int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    //Weapon pistol("Pistol", 10, 5);
    //Weapon w = Weapon();

    //cout << pistol.name << " " << pistol.damage << " " << pistol.weight << endl;
    //cout << w.name << " " << w.damage << " " << w.weight << endl;


    Weapon shotgun("Shotgun", 25, 10);
    cout << shotgun.name << " " << shotgun.damage << " " << shotgun.weight << endl;

    Weapon* sword = new Weapon("Sword", 8, 6);
    cout << sword->name << " " << sword->damage << " " << sword->weight << endl;

    int maxWeight = 7;

    if (shotgun.weightCheck(maxWeight)) {
        cout << "Не сможет поднять оружие " << shotgun.name << endl;
    }
    else {
        cout << "Сможет поднять оружие" << shotgun.name << endl;
    }

    if (sword->weightCheck(maxWeight)) {
        cout << "Не сможет поднять оружие " << sword->name << endl;
    }
    else {
        cout << "Сможет поднять оружие " << sword->name << endl;
    }
    
    cout << "Суммарный вес Shotgun и Sword " << shotgun.weightSum(*sword) << endl;
    cout << "Суммарный вес Shotgun и ... " << shotgun.weightSum(15) << endl;
    
    delete sword;
}

