// Лабораторная 4



#include <iostream>
using namespace std;

class Weapon {
public:
    string name;
    float damage;
    float weight;

    Weapon(string name, float damage, float weight) {
        this->name = name;
        this->damage = damage;
        this->weight = weight;
    }

    Weapon() : Weapon("Weapon", 1, 1) {};
};



int main()
{
    Weapon pistol("Pistol", 10, 5);
    Weapon ak = Weapon();

    cout << pistol.name << " " << pistol.damage << " " << pistol.weight << endl;
    cout << ak.name << " " << ak.damage << " " << ak.weight << endl;
}

