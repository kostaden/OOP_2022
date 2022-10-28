#ifndef TESLA_H
#define TESLA_H
#include "Car.h"
using namespace std;

class Tesla: public Car{

    private:

    static int nextVinNumber;

    public:

    char model;
    float batteryPercentage = 100;

    Tesla();
    Tesla(char model, int price);

    void set_model(char m);
    void set_batteryPercentage(float bP);
  

    int get_model();
    int get_batteryPercentage();

    void chargeBattery(int mins);

};
#endif