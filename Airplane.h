#ifndef Airplane_H
#define Airplane_H
#include "Person.h"
#include <string>
using namespace std;

//Definition of a book
class Airplane
{
public:
//Constructor
    Airplane(string callsign, Person thePilot, Person theCoPilot);

//Attributes
    string theCallSign;
    Person Pilot;
    Person CoPilot;
//Functions
    void setPilot(Person thePilot);
    Person getPilot();
    void setCoPilot(Person theCoPilot);
    Person getCoPilot();
    void printDetails();

//Destructor
    ~Airplane();


};

#endif 

