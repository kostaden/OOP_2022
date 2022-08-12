#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length){
    bool check = true;

    if(length <=0){
        return -1;
    }
    else{
        for(int i = 0; i <length; i++){
            if(integers[i] != integers[length-i-1]){
                check = false;
                break;
            }
        }
    return check;
    }

}

int sum_array_elements(int integers[], int length){

    int sum = 0;


    if(length <=0){
        return -1;
    }
    else{
        for(int i = 0; i <length; i++){
            sum += integers[i];

        }
    }
    return sum;
    
}

int sum_if_palindrome(int integers[], int length){
    bool a = is_palindrome(integers, length);
    

    if(a =1){
        return sum_array_elements(integers, length);

    }
    else{
        return -2;
    }
}