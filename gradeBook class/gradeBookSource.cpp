#include <iostream>
#include "gradeBookHeader.h"

using namespace std;

    gradeBook::gradeBook(string Name1 , string Name2){
        setInfo(Name1,Name2);
}

 void gradeBook::setInfo(string name1,string name2 ){
    if(name1.size()<=25){
    courseName=name1;
    teacherName=name2;
    }
    else
    {
      courseName=name1.substr(0,25);
        teacherName=name2;
    }
}

 string gradeBook::getInfo(){
       return courseName;
       cout<<endl;
       return teacherName;
       }
void gradeBook::displayMessage(){
cout<<"The course name is "<<courseName<<endl<<"This course is presented by: "<<teacherName<<endl;
    }

