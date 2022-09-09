#include <iostream>
#include "Musician.h"
using namespace std;

//Implementation of book constructor
Musician::Musician(){

}
Musician::Musician(std::string instrument, int experience){

the_instrument = instrument;
the_experience = experience;
}

void Musician::set_Instrument(std::string instrument){
    the_instrument = instrument;
}

void Musician::set_Experience(int experience){
    the_experience = experience;
}
std::string Musician::get_instrument(){
    return the_instrument;
}
int Musician::get_experience(){
    return the_experience;
}
Musician::~Musician()
{

}