#include <iostream>
#include <string>
#include "Spirit.h"

using namespace std;
/*********************/

Spirit::Spirit(string name, unsigned int healthPower, unsigned int attackDamage, unsigned int defence, float chance) : Monster(name, healthPower, attackDamage, defence, chance){
    cout << "A Spirit was created!" << endl;
}

Spirit::~Spirit(){
    cout << "A Spirit was destroyed!" << endl;
}