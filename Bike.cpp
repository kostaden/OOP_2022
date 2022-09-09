#include "Bike.h"

Bike::Bike(){
    theBrand = "";
    theCode = 0;

}

Bike::Bike(std::string brand, int code){
    
    theBrand = brand;
    theCode = code;
}

std::string Bike::set_brand(std::string brand){
    theBrand = brand;
}

int Bike::set_code(int code){
    theCode = code;
}

std::string Bike::get_brand(){
    return theBrand;
}

int Bike::get_code(){
    return theCode;
}


Bike::~Bike(){
    
}