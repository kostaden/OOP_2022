#include <iostream>


extern bool is_more_positive(int vals[], int length);

int main(){

    int vals[] = {1,2,3,4,5,-5,-4,-3,-2,-1,-6};
    int vals_length = 10;
    bool res=is_more_positive(vals, vals_length);

}