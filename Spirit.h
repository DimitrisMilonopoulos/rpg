#ifndef SPIRIT_H
#define SPIRIT_H
/********************/
#include <iostream>
#include "Monster.h"
#include <string>

using namespace std;
/********************/

class Spirit : public Monster{

public:
    Spirit(string, unsigned int, unsigned int, unsigned int, float);
    ~Spirit();
};

#endif