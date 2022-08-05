//Function which given an array of integers, will decide if the elements are in ascending order or not.

bool is_ascending(int array[], int n){

    bool ascending = true;

        for(int i =0; i < n;i++){
            if(array[i] <= array[i + 1]){
                ascending = true;
                
            }
            else{
                ascending = false;
            }
            return ascending;
        }
        
    }
    
    
