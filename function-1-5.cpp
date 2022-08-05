//Loop which counts the number of even numbers etween 1 and the number which is supplied.

int count_evens(int number){

    int count = 0;

    if (number <0){
        return 0;

    }
    else{
        for(int i =1; i <= number; i++){
            if(i % 2 == 0){
                count = count + 1;
            }
        }
        return count;
    }
}