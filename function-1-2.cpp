//Function which returns the average of elements in an integer array.

double array_mean(int array[], int n){

    double sum = 0;
    double average = 0;

    if(n <0){
        return average;
    }
    else{ 
        for (int i = 0; i < n; i++){
            sum = sum + array[i];
        }
    
    average = sum/n;
    return average; 
    }
}   
