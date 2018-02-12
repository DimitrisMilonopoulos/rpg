/*File: Potion.cpp*/

////////////////////
#include <iostream>
#include "Potion.h"
#include <string>
///////////////////

Potion::Potion(string name, int price, int minlevel,string type, int amount):Item(name,price,minlevel){
  cout <<"An instance of Potion has been created."<<endl;
  Amount=amount;
  Type=type;
}

Potion::~Potion(){
  cout<<"An instance of Potion has been destroyed"<<endl;
}

int Potion::getAmount(){
  return Amount;
}

string Potion::getType(){
  return Type;
}

void Potion::printInfo(){
  cout<<"===================="<<endl;
  cout<<"Potion Properties: "<<endl;
  Item::printInfo();
  cout<<"Amount: "<<Amount<<endl;
  cout<<"===================="<<endl;
}
