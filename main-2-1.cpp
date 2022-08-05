#include <iostream>
#include <stdlib.h>

extern int min_element(int array[], int n);

int main(){
    int array[] = {2,2,3,4,5,10,1};
    int n = 7;
    

    std::cout << "The smallest number in the array: " << min_element(array, n) <<std::endl;

    return 0;
}