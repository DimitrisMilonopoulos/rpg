/*File: Spell.cpp*/

/********************/
#include <iostream>
#include "Spell.h"

using namespace std;

/********************/
//Functions for Spell

Spell::Spell(string name,int price,int minlevel,int mindamage,int maxdamage){
    cout <<"An instance os Spell has been created"<<endl;
    Name=name;
    MinLevel=minlevel;
    MinDamage=mindamage;
    MaxDamage=maxdamage;
}

Spell::~Spell(){
    cout <<"An instance of Spell has been destroyed"<<endl;
}
void Spell::printInfo(){
    cout <<"Price: "<<Price<<endl;
    cout <<"Level requiered: "<< MinLevel<<endl;
    cout <<"Damage range: "<<MinDamage<<"-"<<MaxDamage<<endl;
}


int  Spell::getPrice(){
    return Price;
}

string Spell::getName(){
    return Name;
}

int Spell::getMinlevel(){
    return MinLevel;
}

int Spell::getMindamage(){
    return MinDamage;
}

int Spell::getMaxdamage(){
    return MaxDamage;
}

int Spell::DealDamage(){
    return (rand()%(MaxDamage-MinDamage+1)+MinDamage);
}

//Functions for IceSpell
IceSpell::IceSpell(string name,int price,int minlevel,int mindamage, int maxdamage, int damagereduction,int rounds):Spell(name,price,minlevel,mindamage,maxdamage){
    cout <<"An instance of IceSpell has been created"<<endl;
    DamageReduction=damagereduction;
    NRounds=rounds;
}

IceSpell::~IceSpell(){
    cout <<"An instance of IceSpell has been destroyed"<<endl;
}
void IceSpell::printInfo(){
    cout<<"============================"<<endl;
    cout<<"Ice Spell properties"<<endl;
    Spell::printInfo();
    cout<<"Passive: "<<endl;
    cout<<"Reduce enemies Damage by "<<DamageReduction<<endl;
    cout<<"for "<<NRounds<<" rounds."<<endl;
    cout<<"============================="<<endl;
}

int IceSpell::getDamagereduction(){
    return DamageReduction;
}

int IceSpell::getRounds(){
    return NRounds;
}

//FireSpell functions
FireSpell::FireSpell(string name,int price,int minlevel,int mindamage, int maxdamage, int armorpenetration,int rounds):Spell(name,price,minlevel,mindamage,maxdamage){
    cout <<"An instance of IceSpell has been created"<<endl;
    ArmorPenetration=armorpenetration;
    NRounds=rounds;
}

FireSpell::~FireSpell(){
    cout<<"An instance of FireSpell has been destroyed"<<endl;
}
void FireSpell::printInfo(){
    cout<<"============================"<<endl;
    cout<<"Fire Spell properties"<<endl;
    Spell::printInfo();
    cout<<"Passive: "<<endl;
    cout<<"Reduce enemies armor by "<<ArmorPenetration<<endl;
    cout<<"for "<<NRounds<<" rounds."<<endl;
    cout<<"============================="<<endl;
}
int FireSpell::getArmorpenetration(){
    return ArmorPenetration;
}

int FireSpell::getRounds(){
    return NRounds;
}

//LightningSpell functions
LightningSpell::LightningSpell(string name,int price,int minlevel,int mindamage, int maxdamage, int agilityreduction,int rounds):Spell(name,price,minlevel,mindamage,maxdamage){
    cout <<"An instance of IceSpell has been created"<<endl;
    AgilityReduction=agilityreduction;
    NRounds=rounds;
}

LightningSpell::~LightningSpell(){
    cout <<"An instance of lightning spell has been destroyed"<<endl;
}

void LightningSpell::printInfo(){
    cout<<"============================"<<endl;
    cout<<"Lightning Spell properties"<<endl;
    Spell::printInfo();
    cout<<"Passive: "<<endl;
    cout<<"Reduce enemies Agility by "<<AgilityReduction<<endl;
    cout<<"for "<<NRounds<<" rounds."<<endl;
    cout<<"============================="<<endl;
}



int LightningSpell::getRounds(){
    return NRounds;
}

int LightningSpell::getAgilityreduction(){
    return AgilityReduction;
}

