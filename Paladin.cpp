#include <iostream>
#include <string>
#include "Paladin.h"

using namespace std;
/*********************/

Paladin::Paladin(string name) : Hero(name, 550, 15, 65, 55, 25){
    cout << "A Paladin was created!" << endl;
}

void Paladin::levelUp(){
    Hero::levelUp();
    increaseStrength(10);
    increaseDexterity(10);
    increaseAgility(5);
}

Paladin::~Paladin(){
    cout << "A Paladin was destroyed!" << endl;
}