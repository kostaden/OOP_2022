#include <iostream>
using namespace std;

void print_matrix(int array[10][10]){

    for(int i = 0; i < 10; i++){
        for(int a = 0; a < 10; a++){
            if(a == 0 || a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7 || a == 8 || a == 9){
            cout << array[i][a]<< " ";
            }
            else{
            cout << array[i][a];
            }

        }
        cout << endl;
        
    }
    return;
}