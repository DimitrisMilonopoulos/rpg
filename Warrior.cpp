#include <iostream>
#include <string>
#include "Warrior.h"

using namespace std;
/*********************/

Warrior::Warrior(string name) : Hero(name, 550, 15, 65, 20, 55){
    cout << "A Warrior was created!" << endl;
}

void Warrior::levelUp(){
    Hero::levelUp();
    increaseStrength(10);
    increaseDexterity(5);
    increaseAgility(10);
}

Warrior::~Warrior(){
    cout << "A Warrior was destroyed!" << endl;
}
