using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyExam
{
    // Start the rectangle class
    class rectangle
    {
       public  void setValues(double length, double width)
       {
            rectangle.length = length;
            rectangle.width = width;
       }
        protected static double length;
        protected static double width;

        public virtual double GetArea()
        {
            return length * width;
        }

        public virtual double GetPerimeter() 
        {
            return (length + width) * 2;
        }
    }
// End od class rectangle
// Start of class cube
    class cube:rectangle
    {
       public  void setValues(double height)
       {
            this.height = height;
       }
        private double height;

        public override double GetArea ()
        {
            return rectangle.length * rectangle.width * height;

        }

        public override double GetPerimeter ()
        {
            return (rectangle.length + rectangle.width) * 2 * 6;
        }
    }
    //End of class cube
    class Program
    {
        static void Main ( string[] args )
        {
            rectangle n1 = new rectangle();
            cube n2 = new cube();
            Console.WriteLine("Enter the length please");
            double length = double.Parse(Console.ReadLine());

            Console.WriteLine("Enter the width please");
            double width = double.Parse(Console.ReadLine());

            Console.WriteLine("Enter the height please");
            double height = double.Parse(Console.ReadLine());

            n1.setValues(length, width);

            n2.setValues(height);

            Console.WriteLine("The rectangle area"+n1.GetArea());
            Console.WriteLine("The rectangle perimeter" + n1.GetPerimeter());

            Console.WriteLine("The cube area" + n2.GetArea());
            Console.WriteLine("The cube perimeter" + n2.GetPerimeter());
        }
    }
}
