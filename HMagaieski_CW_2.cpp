/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun 
* Project: Classwork 2
* Description: This program will print some pertinent information about my course.
* Due Date: 09/14/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

    const string COURSE_NAME = "Introduction to Programming (CMSC140)";
    const string PROGRAMMING_LANGUAGE = "C++";

    string classLocation = "Room SW213"; 
    string classTime = "TTR 2:00 PM - 3:15 PM";

    cout << " " << endl;

    cout << "Course Name: " << COURSE_NAME << endl
     << "Programming Language: " << PROGRAMMING_LANGUAGE << endl 
     << "Classroom Location: " << classLocation << endl 
     << "Class Time: " << classTime << endl;

    cout << " " << endl;

    return 0;
}