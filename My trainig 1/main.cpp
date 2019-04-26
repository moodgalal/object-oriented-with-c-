#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;
    class gradeBook //Declaring the class
    {
    public:
        void setCourseName(string name){ // Method for taking the course name
          courseName=name;
        }

        string getCourseName (){ // Method for returning the course name
          return courseName;
        }

        void displayCourseName(){ // Method for printing message for the user included with the course name
           cout<<"Welcome to the course name : "<<getCourseName()<<endl;
        }

    private :string courseName; // Declaring a data member .
    } ;
int main()
{
 /*  string courseName;
    gradeBook myGradeBook;
  cout<<"The initial value of the nameOfCourse is "<<myGradeBook.getCourseName()<<endl;
    cout<<"Please enter the course name\n";
    getline(cin,courseName);

    myGradeBook.setCourseName(courseName);
    myGradeBook.displayCourseName();*/

 /*   int grade=275 ,counter=9;
    double average;
    average=static_cast<double>(grade)/counter;
    cout<<"The average is "<<setprecision(2)<<fixed<<average<<endl;*/

  /*  string s="mah" ;

    cout<<setw(4)<<s;
    cout << fixed << setprecision( 2 );*/

   /* double amount,principal=10000,rate=.05;

    cout << "Year" <<setw(21)<< "Amount on deposit" << endl;

    cout << fixed << setprecision( 2 ); // sticky settings

    // calculate amount on deposit for each of ten years
for ( int year = 1; year <= 10; ++year )
{
// calculate new amount for specified year
amount = principal * pow( 1.0 + rate, year );
// display the year and the amount
cout << setw( 4 ) << year << setw( 21 ) << amount << endl;
}*/

//cout<<time( 0 )<<endl;

  char x=4;
  cout<<x<<endl;
    return 0;

}
