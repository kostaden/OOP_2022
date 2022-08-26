#include <iostream>
#include <string>
using namespace std;

string get_temp_phase(int temp){

    string temp_phase = "";

    if(temp <= 273){
        temp_phase = "ice";
        return temp_phase;
    }
    else if(temp > 273 || temp <= 373){
        temp_phase = "liquid";
        return temp_phase;
    }
    else if(temp > 373 || temp <= 4700){
        temp_phase = "gas";
        return temp_phase;
    }
    else if(temp > 4700){
        temp_phase = "decomposed";
        return temp_phase;
    }
    return 0;
}