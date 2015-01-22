#pragma once

#include <vector>

using namespace std;

// this class will be used in the wrapper that will be further used by c#
class Computation {
public:
  Computation(int* arr, int size);
  int sumArray();

private:
  vector<int> vec;
};