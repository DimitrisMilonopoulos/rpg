/*File: Item.cpp*/
#include <iostream>
#include <string>
#include "Item.h"

Item::Item(string name, int price, int minlevel){
  cout<<"An instance item has been created."<<endl;
  Name=name;
  Price=price;
  MinLevel=minlevel;

}

Item::~Item(){
  cout<<"An instance item has been destroyed."<<endl;
}

void Item::printInfo(){
  cout<<"Name: "<<Name<<endl;
  cout<<"Price: "<<Price<<endl;
  cout<<"Level Required: "<<MinLevel<<endl;
}

int Item::getPrice(){
  return Price;
}

int Item::getMinlevel(){
  return MinLevel;
}

string Item::getName(){
  return Name;
}