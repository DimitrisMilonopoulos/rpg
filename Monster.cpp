#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;
/*********************/

Monster::Monster(string name, unsigned int healthPower, unsigned int attackDamage, unsigned int defence, float chance) : Living(name, healthPower){
    AttackDamage = attackDamage;
    Defence = defence;
    DodgeChance = chance;

    cout << "A Monster was created!" << endl;
}

void Monster::printInfo(){
    Living::printInfo();
    cout << "Attack Damage: " << AttackDamage << endl;
    cout << "Defence Reduction: " << Defence << endl;
    cout << "Chance of dodging: " << DodgeChance << endl;
}

Monster::~Monster(){
    cout << "A Monster was destroyed!" << endl;
}