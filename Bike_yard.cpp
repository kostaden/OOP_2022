#include "Bike_yard.h"
#include "Bike.h"


Bike_yard::Bike_yard(){
    count = 0;
    code_count = 0;
    stock = new Bike;

}

Bike_yard::Bike_yard(int capacity){
    size = capacity;
    count = 0;
    code_count = 0;
    sel_code = 10;
    stock = new Bike[capacity];
}

int Bike_yard::get_total_stock_count(){
    return count;

}

int Bike_yard::get_stock_quantity(int code){
    for(int i = 0; i < size; i++){
        if(stock[i].get_code() == sel_code){
            code_count++;
        }
    }
    return code_count;
}

Bike *Bike_yard::get_current_stock_list(){
    return stock;

}

bool Bike_yard::add_stock(Bike b){
    if(count < size){
        stock[count] = b;
        count++;
    }
    return true;
}

Bike_yard::~Bike_yard(){
    
}