// This function checks if a given matrix is an identity matrix. (An identiy
// matrix is a matrix with 1's down the main diagonal and 0's elsewhere)

#include <iostream>

int is_identity(int array[10][10]) {
  int facts = 1;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (i == j && array[i][j] != 1) {
        return 0;
      }
      if (i != j && array[i][j] != 0) {
        return 0;
      }
    }
  }
  if (facts == true) {
    return 1;
  } else {
    return 0;
  }
}
