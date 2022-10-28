#include "Tesla.h"
#include "Car.h"

static int nextVinNumber = 100001;
Tesla::Tesla(){

nextVinNumber++;
};

Tesla::Tesla(char model, int price){
nextVinNumber++;
};



void Tesla::set_model(char m){
    model = m;
}

void Tesla::set_batteryPercentage(float bP){
    batteryPercentage = bP;
}

int Tesla::get_model(){
    return model;
}

int Tesla::get_batteryPercentage(){
    return batteryPercentage;
}

void Tesla::chargeBattery(int mins){
    while(batteryPercentage <= 100){
        for(int x =0; x < mins; x++){
            batteryPercentage = batteryPercentage + 0.5;
        }
    }
}

void Car::drive(int kms){
    kms = emissions;
}