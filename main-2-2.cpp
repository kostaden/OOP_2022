#include <iostream>
#include <stdlib.h>

extern int max_element(int array[], int n);

int main(){
    int array[] = {2,2,3,4,5,10,1};
    int n = 7;
    

    std::cout << "The largest number in the array: " << max_element(array, n) <<std::endl;

    return 0;
}