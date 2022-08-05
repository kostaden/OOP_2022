#include <iostream>
#include <stdlib.h>

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4] = {{1,2,3,4}, {5,6,7,8}, {10,15,20,25}, {50,100,45,5}};

    std::cout << "The sum of the main diagonal elements is: " << sum_diagonal(array) <<std::endl;

    return 0; 
}