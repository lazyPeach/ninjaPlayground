#pragma once
#include "header.h"

Computation::Computation(int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    vec.push_back(arr[i]);
  }
}

int Computation::sumArray() {
  int sum = 0;

  for (int i = 0; i < vec.size(); ++i) {
    sum += vec[i];
  }

  return sum;
}
