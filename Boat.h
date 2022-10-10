#ifndef Boat_H
#define Boat_H
#include <iostream>
#include <string>
using namespace std;

class Boat{

int size;
char name;


public:
    Boat();

    void setBoat(int x, int y);
    void getBoat();
};
#endif