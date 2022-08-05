//This function given two two-dimensonal arrays, prints out their sum.

#include <iostream>

void print_summed(int array[3][3], int array2[3][3]){
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(j == 0 || j == 1){
                std::cout << array[i][j] + array2[i][j] << " ";
            }
            else{
                std::cout << array[i][j] + array2[i][j];
            }

        }
        std::cout << std::endl;

    }
return;
}