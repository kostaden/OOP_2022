#include <iostream>
#include "Capybara.h"
using namespace std;

//Implementation of book constructor
Capybara::Capybara(){

name = "";
age = 0;
}

void Capybara::setName(string capyName){
    name = capyName;
}

void Capybara::setAge(int capyAge){
    age = capyAge;
}

string Capybara::getName(){
    return name;
}

int Capybara::getAge(){
    return age;
}

Capybara::~Capybara()
{

}