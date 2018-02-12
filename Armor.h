/*File: Armor.h*/

/**********************/
#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include "Item.h"
/**********************/

class Armor: public Item{
  unsigned int Defence;

public:
  Armor(string,int,int,int);
  ~Armor();
  int getDefence();
  void printInfo();
};
#endif
