#include <iostream>
#include <stdlib.h>

extern int count_evens(int number);

int main(){
    int number = 50;

    std::cout << "The number of evens values are: " << count_evens(number) <<std::endl;

    return 0;
}