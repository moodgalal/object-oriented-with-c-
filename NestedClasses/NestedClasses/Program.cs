using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NestedClasses
{
 //Start of the outer class
  class OuterClass
  {
     static string fromOutClass = "Outer Field";
     
     // Start of the inner class
     public class InSideClass
     {
         public static string fromInnerClass = "Inner field";

            public InSideClass() // Inner class constructor
            {
                Console.WriteLine(" -= Inside =-");
                Console.WriteLine(OuterClass.fromOutClass); //The inner can access the outer's private static members
            }                                               //because they are in the same scope
     }
     //End of the inner class
     
     public OuterClass()
     {
            Console.WriteLine(" -= Outside =-");
            Console.WriteLine(InSideClass.fromInnerClass); //In order to access the inner members from the outer class
     }                                                //We should declare the members as public static members
  }
  //End of the outer class
    class Program
    {
        static void Main ( string[] args )
        {
            var outs = new OuterClass();  // Calling the outer constructor
            OuterClass.InSideClass ins = new OuterClass.InSideClass(); // Calling the inner constructor

        }
    }
}
