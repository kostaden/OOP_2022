#include <iostream>
#include <stdlib.h>

extern bool is_descending(int array[], int n);

int main(){
    int array[] = {2,2,3,4,5,10,1,9,9,9,2,2,5,5,10};
    int n = 15;
    
    is_descending(array, n);


    return 0;
}