#ifndef DRAGON_H
#define DRAGON_H
/********************/
#include <iostream>
#include "Monster.h"
#include <string>

using namespace std;
/********************/

class Dragon : public Monster{

public:
    Dragon(string, unsigned int, unsigned int, unsigned int, float);
    ~Dragon();
};

#endif