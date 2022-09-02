#ifndef Capybara_H
#define Capybara_H
#include <string>
using namespace std;

//Definition of a book
class Capybara
{
public:
//Constructor
    Capybara();

//Attributes
    string name;
    int age;

//Functions
    void setName(string capyName);
    void setAge(int capyAge);
    string getName();
    int getAge();

//Destructor
    ~Capybara();


};

#endif 

