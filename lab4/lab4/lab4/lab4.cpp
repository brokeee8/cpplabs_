

#include <iostream>
#include <Windows.h>
#include "Monster.h"
using namespace std;


void test(const Monster& mLink) {
    cout << mLink.maxHealth << endl;

}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Monster m = Monster("Goblin", 4, 6, 90);
    Monster m2 = Monster("attack", 20, 6, 90);
    m.attack(m2);
    cout << m2.getHealth() << endl;
    m2.setHealth(928);
    cout << m2.getHealth() << endl;
    test(m);
}
