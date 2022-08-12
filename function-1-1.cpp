#include <iostream>
using namespace std;

void print_matrix(int array[10][10]){

    for(int i = 0; i < 10; i++){
        for(int a = 0; a < 10; a++){
            cout << " " << array[i][a];

        }
        cout << endl;
        
    }
    return;
}
