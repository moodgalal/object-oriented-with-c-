#include <string>
using namespace std;

class gradeBook{
public:
    gradeBook(string Name1 , string Name2);
    void setInfo(string name1,string name2 );
    string getInfo();
    void displayMessage();

private:
    string courseName ,teacherName;
};
