#include <iostream>

int *array_pad(int *vals, int len){

    int *pv;
    pv = new int[5];

    
    for(int i =0; i < len; i++){
        pv[i] = vals[i];
    }
    
    
    return pv;
}