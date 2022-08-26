#include <iostream>
using namespace std;

extern string get_temp_phase(int temp);

int main(){

    int temp = 10;
    cout << "phase at" << temp << "K is: " << get_temp_phase(temp) << endl;
    temp = 1000;
    cout << "phase at" << temp << "K is: " << get_temp_phase(temp) << endl;
    temp = 273;
    cout << "phase at" << temp << "K is: " << get_temp_phase(temp) << endl;
    temp = 373;
    cout << "phase at" << temp << "K is: " << get_temp_phase(temp) << endl;
    
    return 0;
    
}