#include <iostream>
#include "Wagon.h"
#include "Capybara.h"
#include <string>
using namespace std;

//Implementation of book constructor
Wagon::Wagon(){

count = 0;
}

bool Wagon::addCapybara(Capybara newCapy){
    if(count >= 4){
        return false;

    }
    else{
        capys[count] = newCapy;
        count++;
        return true;
    }
}

void Wagon::emptyWagon(){
    count = 0;
    } 

void Wagon::printCapybaras(){
    for(int i = 0; i < count; i++){
        cout << capys[i].getName() << " " << capys[i].getAge() << endl;
    }
}

Wagon::~Wagon()
{
    
}