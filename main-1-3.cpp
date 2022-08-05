#include <iostream>
#include <stdlib.h>

extern void count_digits(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4}, {1,3,5,6}, {2,1,3,4}, {9,8,7,6}};
    
    count_digits(array);

    return 0;
}