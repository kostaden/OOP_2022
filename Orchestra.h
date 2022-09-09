#ifndef Orchestra_H
#define Orchestra_H
#include "Musician.h"
#include <string>
using namespace std;

//Definition of a book
class Orchestra
{
public:
//Constructor
    Orchestra();
    Orchestra(int size);

//Attributes   
    int count_of_musicians;
    

//Functions
    void set_Instrument(std::string instrument);
    void set_Experience(int experience);
    std::string get_instrument();
    int get_experience();

//Destructor    
    ~Musician();


};

#endif 

