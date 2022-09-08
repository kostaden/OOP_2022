#ifndef Person_H
#define Person_H
#include <string>
using namespace std;

//Definition of a book
class Person
{
public:
//Constructor
    Person();
    Person(int mySalary, string myName);

//Attributes
    string name;
    int salary;

//Functions
    void setName(string myName);
    void setSalary(int mySalary);
    string getName();
    int getSalary();

//Destructor    
    ~Person();


};

#endif 

