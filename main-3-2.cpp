#include <iostream>
#include <stdlib.h>

extern int median_array(int array[], int n);

int main(){
    int array[] = {1,2,3,4,5,6,7};
    int n = 7;
    
    std::cout << "The median of the sorted array is: " << median_array(array, n) <<std::endl;


    return 0;
}