using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CppWrapper;

//c# project that uses c++ objects. It must be compiled as unsafe.
namespace CSTestApp
{
  class Program
  {
    static void Main(string[] args)
    {
      int noElements = 1000;
      int[] array = new int[noElements];

      for (int i = 0; i < noElements; ++i)
      {
        array[i] = i * 10;
      }

      unsafe
      {
        fixed (int* arr = &array[0])
        {
          CppWrapperClass c = new CppWrapperClass(arr, noElements);
          int sumOfArray = c.sum;
        }
      }
    }
  }
}
