#include <iostream>
#include <stdlib.h>

extern double sum_even(double array[], int n);

int main(){
    double array[] = {1,3,5,6,1};
    int n = 5;
    
    std::cout << "The sum of the even positioned numbers is: " << sum_even(array,n) <<std::endl;


    return 0;
}