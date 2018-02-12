#ifndef LIVING_H
#define LIVING_H
/********************/
#include <iostream>
#include <string>

using namespace std;
/********************/

class Living{

private:
    string Name;
    unsigned int Level;
    unsigned int MaxHealth;
    unsigned int HealthPower;

public:
    Living(string, unsigned int);
    virtual void printInfo();
    unsigned int getMaxHealth();
    unsigned int getHealthPower();
    void increaseMaxHealth(int);
    void increaseHealthPower(int);
    unsigned int getLevel();
    virtual void faint();
    ~Living();
};

#endif

