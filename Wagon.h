#ifndef Wagon_H
#define Wagon_H
#include "Capybara.h"
#include <string>
using namespace std;

//Definition of a book
class Wagon
{
public:
//Constructor
    Wagon();

//Attributes
    Capybara capys[4];
    int count;

//Functions
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();

//Destructor
    ~Wagon();


};

#endif 

