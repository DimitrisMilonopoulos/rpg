#ifndef HERO_H
#define HERO_H
/********************/
#include <iostream>
#include "Living.h"
//#include "Item.h"
#include "Weapon.h"
#include "Potion.h"
#include "Spell.h"
#include <string>
#include <vector>

using namespace std;
/********************/

class Hero : public Living{

private:
    unsigned int MagicPower;
    unsigned int Strength;
    unsigned int Dexterity;
    unsigned int Agility;
    unsigned int Money;
    unsigned int Experience;
    vector<Item*> Inventory;

public:
    Hero(string, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    virtual void print_info();
    virtual void levelUp();
    /*while in market*/
    void buy(Item*);
    void sell(Item*);
    /*when in fight*/
    virtual void attack();
    virtual int castSpell();
    /*when inactive*/
    void checkInventory();
    void displayMap();
    /*at any time*/
    void equip();
    virtual void use(Potion* );
    int quitGame();
    /*miscellaneous*/
    //void showOptions();
    void showOptionInMarket();//
    void increaseStrength(int);//
    void increaseAgility(int);//
    void increaseDexterity(int);//
    ~Hero();//
};

#endif