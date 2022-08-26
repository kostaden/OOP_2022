#include <iostream>
using namespace std;

string get_temp_phase(int temp){

    if(temp <= 273){
        cout << "ice";
    }
    else if(temp > 273 || temp <= 373){
        cout << "liquid";
    }
    
    else if(temp > 373 || temp < 4700){
        cout << "gas";
    
    }
    else if(temp > 4700){
        cout << "decomposed";
        return 0;
    }
return 0;
}