using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace CSTestApp
{
  class Program
  {
    [DllImport("F:\\gitHubStuff\\microsoftStuff\\unmanagedDll\\CppDll\\Debug\\CppDll.dll", CallingConvention = CallingConvention.Cdecl)]
    public static extern double Add(double a, double b);

    static void Main(string[] args)
    {
      double c = Add(2.3, 4.5);
      Console.WriteLine("Test");
      Console.ReadLine();
    }
  }
}
