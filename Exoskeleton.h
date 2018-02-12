#ifndef EXOSKELETON_H
#define EXOSKELETON_H
/********************/
#include <iostream>
#include "Monster.h"
#include <string>

using namespace std;
/********************/

class Exoskeleton : public Monster{

public:
    Exoskeleton(string, unsigned int, unsigned int, unsigned int, float);
    ~Exoskeleton();
};

#endif