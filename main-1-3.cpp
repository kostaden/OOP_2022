#include <iostream>
#include <stdlib.h>

extern int num_count(int array[], int n, int number);

int main(){
    int array[] = {10,20,30,40,50,50,50,50};
    int n = 9;
    int number = 50;

    std::cout << "The amount of times 50 is found in the array is: " << num_count(array, n, number) <<std::endl;

    return 0;
}