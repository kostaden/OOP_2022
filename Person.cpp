#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

//Implementation of book constructor
Person::Person(){
    
}
Person::Person(int mySalary, string myName){


name = myName;
salary = mySalary;

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