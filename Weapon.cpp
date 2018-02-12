/*File: Weapon.cpp*/

/******************/
#include "Weapon.h"
#include <iostream>

using namespace std;
/******************/

//Counstructor of Weapon
Weapon::Weapon(string name, int price, int minlevel,int damage, bool singlehanded):Item(name,price,minlevel){
  cout << "An instance weapon has been created."<<endl;
  //Set the values for the weapon
  Damage=damage;
  SingleHanded=singlehanded;
}

Weapon::~Weapon(){
  cout <<"An instance weapon has been destroyed."<<endl;
}

/****************************************************/
void Weapon::printInfo(){
  Item::printInfo();
  cout<<"Damage: "<<Damage<<endl;
  cout<<"Use: ";
  if (SingleHanded==true)
    cout <<"One-handed"<<endl;
  else
    cout <<"Two-handed"<<endl;
  cout<<"===================="<<endl;
}

int Weapon::getDamage(){
  return Damage;
}

bool Weapon::getHands(){
  return SingleHanded;
}
