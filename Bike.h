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
        
        void set_brand(std::string brand);
        void set_code(int code);
        std::string get_brand();
        int get_code();

        

        ~Bike();

};

#endif