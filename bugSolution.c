#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  //Corrected:  Access within the array bounds
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
} 