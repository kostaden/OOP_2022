//Function which counts how many times the numbers 2, 5 and 9 appear in a array using a switch statement.
#include <iostream>

void two_five_nine(int array[], int n){

    int noTwos = 0;
    int noFives = 0;
    int noNines = 0;

    if (n <0){
        return;
    }
    else{
        for(int i = 0; i <n; i++){
            switch(array[i]){
                case 2:
                    noTwos = noTwos + 1;
                    break;
                case 5:
                    noFives = noFives + 1;
                    break;
                case 9:
                    noNines = noNines + 1;
                    break;
            }
        }
        std::cout << "2:" << noTwos << ";5:" << noFives << ";9:" << noNines << ";" << std::endl;
        return;
    }
}