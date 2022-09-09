#ifndef Bike_H
#define Bike_H
#include <string>
using namespace std;

class Bike{
    public: 
        Bike();
        Bike(std::string brand, int code);
        

        std::string theBrand;
        int theCode;
        
        std::string set_brand(std::string brand);
        int set_code(int code);
        std::string get_brand();
        int get_code();

        

        ~Bike();

};

#endif