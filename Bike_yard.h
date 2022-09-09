#ifndef Bike_yard_H
#define Bike_yard_H
#include "Bike.h"
using namespace std;

class Bike_yard{
    public: 
        Bike_yard();
        Bike_yard(int capacity);
        

        int count;
        int max_size;
        Bike *stock;

        int get_total_stock_count();
        int get_stock_quantity(int code);
        Bike *get_current_stock_list();
        bool add_stock(Bike b);



        ~Bike_yard();

};

#endif