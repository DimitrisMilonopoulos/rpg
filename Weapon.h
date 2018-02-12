/*File: Weapon.h*/
#ifndef WEAPON_H
#define WEAPON_H

/*****************/
#include "Item.h"
#include <string>
/*****************/

class Weapon: public Item{
    unsigned int Damage;
    bool SingleHanded;

  public:
    Weapon(string,int,int,int,bool);
    ~Weapon();
    //general functions
    virtual void printInfo();
    int getDamage();
    bool getHands();
};
#endif
