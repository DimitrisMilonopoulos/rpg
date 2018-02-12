/*File: Armor.cpp*/

/********************/
#include "Armor.h"
#include <iostream>
#include <string>
/*******************/

Armor::Armor(string name,int price, int minlevel,int defence):Item(name,price,minlevel){
  cout << "An instance of Armor has been created."<<endl;
  Defence=defence;
}

Armor::~Armor(){
  cout <<"An instance of Armor has beeen destroyed."<<endl;
}

int Armor::getDefence(){
  return Defence;
}

void Armor::printInfo(){
  cout<<"===================="<<endl;
  cout<<"Armor properties: "<<endl;
  Item::printInfo();
  cout<<"Defence: "<<Defence<<endl;
  cout<<"===================="<<endl;

}