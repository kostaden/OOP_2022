//Function that when given a positive decimal, will transform into binary and print result.

#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number){
    int a = stoi(decimal_number);

    int array[10];
    for (int i = 0; a >0; i++){
        array[i] = a % 2;
        a /= 2;
    }

    for(int i = i-1; i >=0;i--){
        cout << array[i];

    }
    cout << endl;
    return;
}