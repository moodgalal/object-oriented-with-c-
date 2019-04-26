#include <iostream>

using namespace std;

class Gradebook
{
public:
   void sayMood()
    {
        cout<<"mood from class"<<endl;
    }
    void setCourseName(string name)
    {
        courseName = name;
    }
    string getCourseName()
    {
        return courseName;
    }

private:
    string courseName;
};

int main()
{
    Gradebook myGradeBook;
    string courseName;
    myGradeBook.sayMood();
   cout<<"mood " << endl << " galal";

   cout<<"Enter the course name please"<<endl;
   getline(cin, courseName);

   myGradeBook.setCourseName(courseName);
   cout<<myGradeBook.getCourseName()<<endl;
   return 0;
}
