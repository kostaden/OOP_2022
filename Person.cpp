#include <iostream>
#include "Person.h"
using namespace std;

//Implementation of book constructor
Person::Person(int mySalary, string myName){

mySalary = 19000;
myName = "Kosta";
}

void Person::setName(string myName){
    name = myName;
}

void Person::setSalary(int mySalary){
    salary = mySalary;
}

string Person::getName(){
    return name;
}

int Person::getSalary(){
    return salary;
}

Person::~Person()
{
    
}