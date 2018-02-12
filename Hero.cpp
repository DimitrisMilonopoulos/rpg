#include <iostream>
#include <string>
#include "Hero.h"
#define MAX 100
#define XP 20
#define MAXSIZE 10

using namespace std;
/*********************/

Hero::Hero(string name, unsigned int healthPower, unsigned int magicPower, unsigned int strength, unsigned int dexterity, unsigned int agility): Living(name, healthPower){

    MagicPower = magicPower;
    Strength = strength;
    Dexterity = dexterity;
    Agility = agility;
    Money = 500;
    Experience = 0;

    cout << "A Hero was created!" << endl;
}

void Hero::print_info(){
    
    Living::printInfo();
    cout << "Magic Power: " << MagicPower << endl;
    cout << "Strength: " << Strength << endl;
    cout << "Dexterity: " << Dexterity << endl;
    cout << "Agility: " << Agility << endl;
    cout << "Money: " << Money << endl;
    cout << "Experience: " << Experience << endl;
}

void Hero::levelUp(){
    increaseMaxHealth(10);
}

void Hero::buy(Item* Bought){
    Money -= Bought->getPrice();
    if(Inventory.size() < MAXSIZE){
        if(getLevel() >= Bought->getMinlevel()){
            Inventory.push_back(Bought);
            cout << "One " << Bought->getName() << " was bought!" << endl;
        }
        else{
            cout << "This Item needs a higher Level!" << endl;
        }
    }
    else{
        cout << "No free slots in Inventory!" << endl;
    }
}

void Hero::sell(Item* Sold){
    Money += (Sold->getPrice() / 2);
    for (vector<Item*>::iterator it = Inventory.begin(); it != Inventory.end(); it++){
        if( Sold->getName() == (*it)->getName()){
            Inventory.erase(it);
        }
    }
}

int Hero::use(Potion* Used){

}


void Hero::checkInventory(){
    for(vector<Item*>::iterator it = Inventory.begin(); it != Inventory.end(); it++){
        cout << (*it)->getName() << endl;
    }
}


int Hero::quitGame(){
    cout << "Are you sure you want to quit? Any unsaved progress will be lost!(Y/N)" << endl;
    char answer;
    cin >> answer;

    if(answer == 'N' || answer == 'n'){
        return 0;
    }
    else if(answer == 'Y' || answer == 'y'){
        return 1;
    }
    else{
        cout << "Wrong input!" << endl;
        return -1;
    }
}
void Hero::increaseStrength(int amount){
    Strength += amount;
}

void Hero::increaseAgility(int amount){
    Agility += amount;
}

void Hero::increaseDexterity(int amount){
    Dexterity += amount;
}

Hero::~Hero(){
    cout << " A Hero was destroyed!" << endl;
}