#include <iostream>
#include <string>
#include "Exoskeleton.h"

using namespace std;
/*********************/

Exoskeleton::Exoskeleton(string name, unsigned int healthPower, unsigned int attackDamage, unsigned int defence, float chance) : Monster(name, healthPower, attackDamage, defence, chance){
    cout << "A Exoskeleton was created!" << endl;
}

Exoskeleton::~Exoskeleton(){
    cout << "A Exoskeleton was destroyed!" << endl;
}