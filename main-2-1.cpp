extern int *readNumbers();
extern void hexDigits(int *numbers, int length);

int main(){

    int length = 15;
    int *numbers = readNumbers();
    hexDigits(numbers, length);
    delete[] numbers;

}
