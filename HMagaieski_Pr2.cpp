/*
* Programmer: Henrique Magaieski
* Course: CMSC140 - CRN 20808
* Semester: Fall 2026
* Project: Grade Calulator
* Description: 
* Due Date: 10/12/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{

    string fullName1, fullName2;
    int studentId1,studentId2, studentAge1, 
    studentAge2, studentScore1, studentScore2;

    cout << fixed << setprecision(2) << showpoint;


    cout << " \n";

    cout << "***************************************************************\n";
    cout << "Montgomery College\n" << "CMSC140 - Project 2: Grade Calculator\n";
    cout << "***************************************************************\n";

    cout << " \n";

    cout << "Enter information for two students: \n";

    cout << " \n";

    cout << "Student 1 ID: ";
    cin >> studentId1; 
    cout << endl;

    cin.ignore();

    cout << "Student 1 full name: ";
    getline(cin, fullName1);
    cout << endl;

    cout << "Student 1 age: ";
    cin >> studentAge1;
    cout << endl;

    cout << "Student 1 exam score (0 - 100): ";
    cin >> studentScore1;
    cout << endl;

    cout << " \n";

    cout << "Student 2 ID: ";
    cin >> studentId2;
    cout << endl;

    cin.ignore();

    cout << "Student 2 full name: ";
    getline(cin, fullName2);
    cout << endl;

    cout << "Student 2 age: ";
    cin >> studentAge2;
    cout << endl;

    cout << "Student 2 exam score (0 - 100): ";
    cin >> studentScore2;
    cout << endl;

    cout << " \n";

    cout << "=========================== Grade Report (UMD) =========================== \n";


    cout << " \n";

    if (studentScore1 <= 100 && studentScore1 >= 95)
    {
        cout << "A+";
    }

    cout << " \n";

    if (studentScore2 <= 100 && studentScore2 >= 95)
    {
        cout << "A+";
    }
    return 0;
}