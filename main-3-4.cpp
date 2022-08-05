#include <iostream>
#include <stdlib.h>

extern void print_pass_fail(char grade);

int main(){
    char grade = 'G';
    
    print_pass_fail(grade);


    return 0;
}