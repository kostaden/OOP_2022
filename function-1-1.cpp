#include <iostream>

int *readNumbers(){
    int *num;
    num = new int[10];
    for(int i=0; i <10; i++){
        std::cout << "Enter a number: ";
        std::cin >> num[i];
    }
    return num;
}

void printNumbers(int *numbers, int length){
    for(int i = 0; i < length; i++){
        std::cout << i << " " << numbers[i] << std::endl;
        }
    return;
}