//Function which finds the largest number in a given array.

int max_element(int array[], int n){

    int largest = array[0];

    if(n < 0){
        return 0;

    }
    else{
        for(int i = 0; i < n; i++){
            if(largest < array[i]){
                largest = array[i];
            }
        }
        return largest;
    }
}