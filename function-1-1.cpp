//This function copies the values of a two-dimensional string array of 3 by 2 to a second array of the same size without using pointers.

#include <iostream>
using namespace std;

void string_2d_copy(std::string first[][2], std::string second[][2], int n ){

    for(int i=0; i < 2; i++){
        for(int j=0; j < 2; j++){
            second[i][j] = first[i][j];
        }
    
    }
    return;
}