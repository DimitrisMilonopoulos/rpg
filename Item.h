/*File: Item.h*/
#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item{
    string Name;
    unsigned int Price;
    unsigned int MinLevel;

  public:
    Item();
    Item(string,int,int);
    ~Item();
    //general functions
    virtual void printInfo();
    int getPrice();
    int getMinlevel();
    string getName();
};

#endif
