#define MAX 100

#include <iostream>
#include <string>
#include "Living.h"

using namespace std;
/*********************/

Living::Living(string name, unsigned int healthPower){
    Name = name;
    Level = 1;
    HealthPower = healthPower;
    MaxHealth = HealthPower;

    cout << "A Living Being was created!" << endl;
}

void Living::printInfo(){
    cout << "Name: " << Name << endl;
    cout << "Level: " << Level << endl;
    cout << "Health Power: " << HealthPower << endl; 
}

void Living::increaseMaxHealth(int amount){
    MaxHealth += amount;
}

void Living::increaseHealthPower(int amount){
    HealthPower += amount;
}

unsigned int Living::getLevel(){
    return Level;
}

unsigned int Living::getHealthPower(){
    return HealthPower;
}

unsigned int Living::getMaxHealth(){
    return MaxHealth;
}

void Living::faint(){
    cout << Name << " has fainted!" << endl;
}

Living::~Living(){
    cout << "A Living Being was destroyed!" << endl;
}