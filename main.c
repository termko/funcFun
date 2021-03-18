#include "main.h"

int main(void) {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("%d\n", sum(arr, 10));
  printf("%d\n", sumSquares(arr, 10));
  printf("%d\n", sumCubes(arr, 10));
}