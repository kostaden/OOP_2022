//Function which finds the smallest number in a given array.

int min_element(int array[], int n){

    int smallest = array[0];

    if(n < 0){
        return 0;

    }
    else{
        for(int i = 0; i < n; i++){
            if(smallest > array[i]){
                smallest = array[i];
            }
        }
        return smallest;
    }
}