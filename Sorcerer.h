#ifndef SORCERER_H
#define SORCERER_H
/********************/
#include <iostream>
#include "Hero.h"
#include <string>

using namespace std;
/********************/

class Sorcerer : public Hero{

public:
    Sorcerer(string);
    void levelUp();
    ~Sorcerer();
};

#endif