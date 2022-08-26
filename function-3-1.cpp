#include <iostream>

bool is_more_positive(int vals[], int length){
    
    int posNo = 0;
    int negNo = 0;
    bool check = true;
    for(int i=0; i <length; i++){
        if(vals[i] >= 1){
            posNo = posNo + 1;
        }
        else if(vals[i] <= -1){
            negNo = negNo + 1;
        }
        else{
            posNo = posNo;
            negNo = negNo;
        }
    }
    if(posNo > negNo){
        return check;
    }
    else{
        check = false;
        return check;
    }

    std::cout << check;
    return check;
}