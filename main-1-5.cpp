#include <stdlib.h>

#include <iostream>

extern void print_summed(int array[3][3], int array2[3][3]);

int main() {
  int array[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};
  int array2[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

  print_summed(array, array2);

  return 0;
}