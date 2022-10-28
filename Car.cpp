#include "Car.h"
using namespace std;

Car::Car(){


};

Car::Car(int price){

    price = price;
};

void Car::set_price(int price){
    price = price;
}

void Car::set_vinNumber(int vinNumber){
    vinNumber = vinNumber;
}

int Car::get_price(){
    return price;
}

int Car::get_vinNumber(){
    return vinNumber;
}

void Car::drive(int kms){
    kms = emissions;
}