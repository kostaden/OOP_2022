extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main(){
    int length = 5;
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();

    equalsArray(numbers1, numbers2, length);

}