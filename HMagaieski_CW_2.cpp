#include <iostream>
using namespace std;

int main()
{

    const string COURSE_NAME = "Introduction to Programming (CMSC140)";
    const string PROGRAMMING_LANGUAGE = "C++";
    string classLocation = "Room SW213"; 
    string classTime = "TTR 2:00 PM - 3:15 PM";


    cout << "Course Name: " << COURSE_NAME << endl
     << "Programming Language: " << PROGRAMMING_LANGUAGE << endl 
     << "Class Room Location: " << classLocation << endl 
     << "Class Time: " << classTime << endl;

    return 0;
}