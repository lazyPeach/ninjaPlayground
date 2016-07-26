#include "../../CppComputing/CppComputing/header.h"
#include "../../CppComputing/CppComputing/body.cpp"

#pragma once

using namespace System;

namespace CppWrapper {

  typedef struct _simpleStruct {
    int x;
    double y;
  } simpleStruct;

  public ref class CppWrapperClass {
  public:
    CppWrapperClass(int* arr, int size);
    ~CppWrapperClass();
    int sumArray();
    int sum; // make it public in order to see this value from c#
  private:
    Computation* c;
  };
}
