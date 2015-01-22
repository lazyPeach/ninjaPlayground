#include "header.h"

int main() {
  int noElem = 3;
  int* arr = new int[noElem];

  arr[0] = 10;
  arr[1] = 18;
  arr[2] = 23;

  Computation c(arr, noElem);

  int sum = c.sumArray();

  return 0;
}