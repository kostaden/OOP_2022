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

int Car::get_price(){
    return price;
}

void Car::set_vinNumber(int vN){
    vinNumber = vN;
}

int Car::get_vinNumber(){
    return vinNumber;
}

void Car::set_emissions(int em){
    emissions = em;
}

int Car::get_emissions(){
    return emissions;
}




void Car::drive(int kms){

}

