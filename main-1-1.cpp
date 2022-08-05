#include <iostream>
#include <stdlib.h>

extern int array_sum(int array[], int n);

int main(){
    int array[] = {10,20,30,40,50};
    int n = 5;

    std::cout << "The sum is: " << array_sum(array, n) <<std::endl;

    return 0;
}
