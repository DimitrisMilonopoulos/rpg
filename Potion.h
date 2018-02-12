/*File: Potion.h*/

/**************/
#ifndef POTION_H
#define POTION_H
#include "Item.h"
#include <string>
/**************/

class Potion: public Item{
  unsigned int Amount;
  string Type;

public:
  Potion(string,int,int,string,int);
  ~Potion();
  virtual int getAmount();
  virtual string getType();
  void printInfo();

};
#endif