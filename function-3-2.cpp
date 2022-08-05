//Function which returns the median of a sorted specified array. Eg. the array {3,5,2,1,4} after sorting becomes {1,2,3,4,5} and the median is 3.
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int median_array(int array[], int n){


    int temp = 0;
    
    if(n % 2 ==0){
        return 0;

    }
    for(int i =0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[n/2];

    
    return 0;
}