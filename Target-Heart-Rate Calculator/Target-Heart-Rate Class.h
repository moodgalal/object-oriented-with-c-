#include <string>

using namespace std;

class HeartRates
{
    public:
    HeartRates(string first ,string last ,int mon ,int day ,int year);

   void setFirstName(string first);
   void setLastName(string last);
   void setMonth(int month);
   void setDay(int day);
   void setYear(int year);

   string getFirstName();
   string getLastName();
   int getMonth();
   int getDay();
   int getYear();

   void getAge(int year);
   int getMaxiumumHeartRate();
   float getTargetHeartRate();

    private:
        string firstName,lastName;
        int Month ,Day ,Year ,age, maximum;
};
