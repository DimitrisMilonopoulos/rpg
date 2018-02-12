#include <iostream>
#include <string>
#include "Dragon.h"

using namespace std;
/*********************/

Dragon::Dragon(string name, unsigned int healthPower, unsigned int attackDamage, unsigned int defence, float chance) : Monster(name, healthPower, attackDamage, defence, chance){
    cout << "A Dragon was created!" << endl;
}

Dragon::~Dragon(){
    cout << "A Dragon was destroyed!" << endl;
}