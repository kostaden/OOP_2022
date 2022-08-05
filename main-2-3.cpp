#include <iostream>
#include <stdlib.h>

extern void two_five_nine(int array[], int n);

int main(){
    int array[] = {2,2,3,4,5,10,1,9,9,9,2,2,5,5,10};
    int n = 15;
    
    two_five_nine(array, n);

    return 0;
}