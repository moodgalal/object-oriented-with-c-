using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace virtualAndOverriding
{
    class baseClass
    {
      public baseClass()
      {
            Console.WriteLine("You are in the base class");
      }
    }
    class derivedClass:baseClass
    {
      public derivedClass()
      {
            Console.WriteLine("You are in the derived class");
      }
    }
    class Program
    {
        static void Main ( string[] args )
        {
            baseClass d1 = new derivedClass();
        }
    }
}
