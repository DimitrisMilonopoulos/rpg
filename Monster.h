#ifndef MONSTER_H
#define MONSTER_H
/********************/
#include <iostream>
#include "Living.h"
#include <string>

using namespace std;
/********************/

class Monster : public Living{

private:
    unsigned int AttackDamage;
    unsigned int Defence;
    float DodgeChance;

public:
    Monster(string, unsigned int, unsigned int, unsigned int, float);
    void printInfo();
    ~Monster();
};

#endif