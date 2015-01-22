#include "stdafx.h"

#include "CppWrapper.h"

// Wrapper class of Computation that will be used in C#
namespace CppWrapper {
  CppWrapperClass::CppWrapperClass(int* arr, int size) {
    c = new Computation(arr, size);
    sum = c->sumArray();
  }

  CppWrapperClass::~CppWrapperClass() {
    delete c;
  }

  int CppWrapperClass::sumArray() {
    return c->sumArray();
  }
}
