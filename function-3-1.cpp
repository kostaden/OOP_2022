#include <iostream>

int *readNumbers(){
    int *num;
    num = new int[15];
    for(int i=0; i <15; i++){
        std::cout << "Enter a number: ";
        std::cin >> num[i];
    }
    return num;
}

#include <iostream>

int *readNumbers2(){
    int *num2;
    num = new int[15];
    for(int i=0; i <15; i++){
        std::cout << "Enter a number: ";
        std::cin >> num2[i];
    }
    return num2;
}

bool equalsArray(int *numbers1, int *numbers2, int length){
    if(length < 0){
        for(int i=0; i < length; i++){
                if(numbers1[i] = numbers2[i])
                return true;
            }
        }
    }

