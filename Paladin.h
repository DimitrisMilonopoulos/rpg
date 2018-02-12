#ifndef PALADIN_H
#define PALADIN_H
/********************/
#include <iostream>
#include "Hero.h"
#include <string>

using namespace std;
/********************/

class Paladin : public Hero{

public:
    Paladin(string);
    void levelUp();
    ~Paladin();
};

#endif