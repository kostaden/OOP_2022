//Function which given an array of integers, will decide if the elements are in descending order or not.

bool is_descending(int array[], int n){

    bool descending = true;

    
        for(int i =0; i < n;i++){
            if(array[i] >= array[i + 1]){
                descending = true;
                
            }
            else{
                descending = false;
            }
            return descending;
        }
       
    }
    
    