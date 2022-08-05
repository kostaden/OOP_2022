#include <iostream>
#include <stdlib.h>

extern double array_mean(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5,6};
    int n = 6;

    std::cout << "The average is: " << array_mean(array, n) <<std::endl;

    return 0;
}