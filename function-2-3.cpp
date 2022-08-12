#include <iostream>

using namespace std;

bool is_array_palindrome(int integers[], int length){

    bool facts = true;
    if(length <= 0){
        return -1;
    }
    else{
        for(int i = 0; i < length; i++){
            if(integers[i] != integers[length-i-1]){
                facts = true;
                break;
            }
        }
        return facts;
    }
}



int sum_integers(int integers[], int length){
    int sum = 0;
    if(length <= 0){
        return -1;
    }
    else{
        for(int i = 0; i < length; i++){
            sum += integers[i];
        }
    }
    return sum;
}

int palindrome_sum(int integers[], int length){

    bool x = is_array_palindrome(integers, length);
    if(x = 1){
        return sum_integers(integers, length);

    }
    else{
        return -2;
    }
}
