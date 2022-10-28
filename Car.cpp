#include "Car.h"
using namespace std;

Car::Car(){

};

Car::Car(int price){
    price = price;
};

void Car::set_price(int p){
    price = p;
}

void Car::set_vinNumber(int vN){
    vinNumber = vN;
}

void Car::set_emissions(int em){
    emissions = em;
}

int Car::get_price(){
    return price;
}

int Car::get_vinNumber(){
    return vinNumber;
}

int Car::get_emissions(){
    return emissions;
}

