#ifndef Musician_H
#define Musician_H
#include <string>
using namespace std;

//Definition of a book
class Musician
{
public:
//Constructor
    Musician();
    Musician(std::string instrument, int experience);

//Attributes
    string the_instrument;
    int the_experience;

//Functions
    void set_Instrument(std::string instrument);
    void set_Experience(int experience);
    std::string get_instrument();
    int get_experience();

//Destructor    
    ~Musician();


};

#endif 

