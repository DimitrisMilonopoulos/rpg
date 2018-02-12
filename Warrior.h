#ifndef WARRIOR_H
#define WARRIOR_H
/********************/
#include <iostream>
#include "Hero.h"
#include <string>

using namespace std;
/********************/

class Warrior : public Hero{

public:
    Warrior(string);
    void levelUp();
    ~Warrior();
};

#endif