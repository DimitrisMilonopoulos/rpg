#include <iostream>
#include <string>
#include "Sorcerer.h"

using namespace std;
/*********************/

Sorcerer::Sorcerer(string name) : Hero(name, 550, 20, 25, 65, 55){
    cout << "A Sorcerer was created!" << endl;
}

void Sorcerer::levelUp(){
    Hero::levelUp();
    increaseStrength(5);
    increaseDexterity(10);
    increaseAgility(10);
}

Sorcerer::~Sorcerer(){
    cout << "A Sorcerer was destroyed!" << endl;
}
