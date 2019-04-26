#include <iostream>
#include "Target-Heart-Rate Class.h"

using namespace std;

HeartRates::HeartRates(string first ,string last ,int mon ,int day ,int year)
{
    setFirstName(first);
    setLastName(last);
    setMonth(mon);
    setDay(day);
    setYear(year);
}

   void HeartRates::setFirstName(string first)
   {
       firstName=first;
   }

   void HeartRates::setLastName(string last)
   {
       lastName=last;
   }

    void HeartRates::setMonth(int month)
    {
      Month=month;
    }

   void HeartRates::setDay(int day)
   {
       Day=day;
   }

   void HeartRates::setYear(int year)
   {
       Year=year;
   }

   string HeartRates::getFirstName()
   {
       return firstName;
   }

   string HeartRates::getLastName()
   {
       return lastName;
   }

   int HeartRates::getMonth()
   {
       return Month;
   }

    int HeartRates::getDay()
    {
        return Day;
    }

    int HeartRates::getYear()
    {
        return Year;
    }

   void HeartRates::getAge(int year)
   {
       age=year-Year;
   }

    int HeartRates::getMaxiumumHeartRate()
    {
         maximum=220-age;
        return maximum;
    }

    float HeartRates::getTargetHeartRate()
    {
      float target=maximum*85/100;
        return target;
    }




