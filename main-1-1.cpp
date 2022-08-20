#include <iostream>
using namespace std;

extern void string_2d_copy(std::string first[][2], std::string second[][2], int n);

int main(){

    int n = 3;
    std::string first[n][2] = {{"one", "two"}, {"three", "four"}, {"five", "six"}};
    std::string second[3][2] = {{},{},{}};

    string_2d_copy(first, second, n);
    return 0;
}