#include <iostream>

int *readNumbers(){
    int *num;
    num = new int[5];
    for(int i=0; i <5; i++){
        std::cout << "Enter a number: ";
        std::cin >> num[i];
    }
    return num;
}

bool check = true;
bool equalsArray(int *numbers1, int *numbers2, int length){
    if(length < 0){
        return false;
    }
    else{
        for(int i=0; i < length; i++){
                if(numbers1[i] = numbers2[i]){
            }
                else{
                    check = false;
                    return check;
                }

        }
    }
    std::cout << check << std::endl;
    return check;
}


