// Functions which returns sum of elements in even positions of an array.
#include <cmath>
double sum_even(double array[], int n) {
  int sum = 0;

  if (n < 0) {
    return 0;
  } else {
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        sum = sum + array[i];
      }
    }
  }
  return sum;
}