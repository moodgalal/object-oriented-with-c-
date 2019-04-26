using System;                  

namespace program_21
{
class circle
{
      public  double radius;  // vaRIABLE FOR store the radius
      const double pi = 3.14; // const variable to store the pi value

      public double setRadius
      {
         set { radius = value; }
      }
        public double circumference()
        {
            return 2 * pi * radius;
        }

        public double area ()
        {
            return  pi * Math.Pow(radius,2);
        }

        public double diameter ()
        {
            return 2 * radius;
        }
    }
    class Program
    {
        static void Main ( string[] args )
        {
            double radius = double.Parse(Console.ReadLine());

            circle c1 = new circle();

            c1.setRadius= (radius);
            Console.WriteLine("Result Area = " + c1.area());
             }
    }
}
