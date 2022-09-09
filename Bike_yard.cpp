#include "Bike_yard.h"
#include "Bike.h"


Bike_yard::Bike_yard(){
    max_size = 0;
    count = 0;
    stock = new Bike;

}   

Bike_yard::Bike_yard(int capacity){
    max_size = capacity;
    count = 0;
    stock = new Bike[capacity];
}

int Bike_yard::get_total_stock_count(){
    return count;

}

int Bike_yard::get_stock_quantity(int code){
    int code_count = 0;
    for(int i = 0; i < count; i++){
        if(stock[i].get_code() == code){
            code_count++;
        }
    }
    return code_count;
}

Bike *Bike_yard::get_current_stock_list(){
    return stock;

}

bool Bike_yard::add_stock(Bike b){
    if(count != max_size){
        stock[count] = b;
        count++;
        return true;
    }
    return false;
}

Bike_yard::~Bike_yard(){
    
}