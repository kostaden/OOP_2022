#include <iostream>
#include "Person.h"
#include "Airplane.h"
#include <string>
using namespace std;

//Implementation of book constructor
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot){

    theCallSign = callsign;
    Pilot = thePilot;
    CoPilot = theCoPilot;

}

void Airplane::setPilot(Person thePilot){
    Pilot = thePilot;
}

Person Airplane::getPilot(){
    return Pilot;
}

void Airplane::setCoPilot(Person theCoPilot){
    CoPilot = theCoPilot;
}

Person Airplane::getCoPilot(){
    return CoPilot;
}

void Airplane::printDetails(){
    cout << theCallSign << endl << Pilot.getName() << endl << CoPilot.getName() << endl;
}

Airplane::~Airplane()
{
    
}