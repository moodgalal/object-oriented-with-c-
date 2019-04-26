#include <iostream>
#include "Target-Heart-Rate Class.h"
using namespace std;

int main()
{
            string firstName,lastName;
        int Month ,Day ,Year,cYear;
    HeartRates myHeartRate("Unknown","user",0,00,0000);

    cout<<"Enter your first name\n";
    cin>>firstName;
    myHeartRate.setFirstName(firstName);

    cout<<"Enter your last name\n";
    cin>>lastName;
    myHeartRate.setLastName(lastName);

    cout<<"Enter Your birth day\n";
    cin>>Day;
    myHeartRate.setDay(Day);

    cout<<"Enter Your birth Month\n";
    cin>>Month;
    myHeartRate.setMonth(Month);

    cout<<"Enter Your birth Year\n";
    cin>>Year;
    myHeartRate.setYear(Year);

    cout<<"Enter the current year\n";
    cin>>cYear;
    myHeartRate.getAge(cYear);

    cout<<"-------------------------------------------\n";
    cout<<"User "<<myHeartRate.getFirstName()<<" "<<myHeartRate.getLastName()<<endl;
    cout<<"Your maximum heart rate is: "<<myHeartRate.getMaxiumumHeartRate()<<" beats per minute"<<endl;
    cout<<"Your target heart rate is: "<<myHeartRate.getTargetHeartRate()<<" beats per minute"<<endl;
    return 0;
}
