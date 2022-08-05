#include <iostream>
#include <stdlib.h>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[] = {10,20,30,40,50};
    int secondarray[] = {1,2,3,4,5};
    int n = 5;
    

    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array, secondarray, n) <<std::endl;

    return 0;
}