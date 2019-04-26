using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace inheritance
{
  class Employee
  {
        public DateTime birthDate;
        public string Name;
      // Proberty for the date of birth  
        public DateTime dateOfBirth { 
            set { birthDate = value; }
            get { return birthDate; }
        }
       
        public string name { get { return Name; } set { Name = value; } }
        public ushort Age()
        {
            return (ushort)(DateTime.Now.Year - birthDate.Year); // We must use the explicit conversion as the DateTime.year variables consists of integer values 
        }                                                        // and we can not implicitly convert from int to ushort
    }
   class Manager : Employee
   {
        public Employee[] Supordinates { 
         set 
         {
                Supordinates[0] = new Employee();
                Supordinates[1] = new Employee();
                Supordinates[2] = new Employee();
                Supordinates[3] = new Employee();
                Supordinates[4] = new Employee();
            }
    }
    class Program
    {
        static void Main ( string[] args )
        {
        }
    }
}
