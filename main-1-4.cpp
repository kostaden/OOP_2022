#include <stdlib.h>

#include <iostream>

extern void print_scaled(int array[3][3], int scale);

int main() {
  int scale = 3;
  int array[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

  print_scaled(array, scale);

  return 0;
}