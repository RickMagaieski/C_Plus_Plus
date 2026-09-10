#include <iostream>
#include <string>

using namespace std;

int main()
{

    const string courseName = "Introduction to Programming (CMSC140)";
    const string programmingLanguage = "C++";

    string classLocation = "Room SW213"; 
    string classTime = "TTR 2:00 PM - 3:15 PM";

    cout << " " << endl;

    cout << "Course Name: " << courseName << endl
     << "Programming Language: " << programmingLanguage << endl 
     << "Class Room Location: " << classLocation << endl 
     << "Class Time: " << classTime << endl;

    cout << " " << endl;

    return 0;
}