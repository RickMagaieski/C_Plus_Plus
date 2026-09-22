/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun 
* Project: Classwork 3
* Description: This program will print some pertinent information about my course.
* Due Date: 09/28/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    string studentName;
    double syllabusQuizScore, chapter1QuizScore, chapter2QuizScore, classwork1Score, classwork2Score, totalScore, averageScore;
    
    cout << setprecision(2) << fixed << showpoint;

    cout << " \n";

    cout << "Enter Student's Name: \n";
    getline(cin, studentName);

    cout << " \n";

    cout << "Enter Syllabus Quiz Score ranging from 0 to 100: \n";
    cin >> syllabusQuizScore;

    cout << "Enter Chapter 1 Quiz Score ranging from 0 to 100: \n";  
    cin >> chapter1QuizScore;

    cout << "Enter Chapter 2 Quiz Score ranging from 0 to 100: \n";
    cin >> chapter2QuizScore;

    cout << "Enter Classwork 1 Score ranging from 0 to 100: \n";
    cin >> classwork1Score;

    cout << "Enter Classwork 2 Score ranging from 0 to 100: \n";
    cin >> classwork2Score;

    totalScore = syllabusQuizScore + chapter1QuizScore + chapter2QuizScore + classwork1Score + classwork2Score;
    averageScore = totalScore / 5;

    cout << " \n";

    cout << "****************************************************\n";
    cout << "Student's Final Summary: " << setw(5) << studentName << endl;

    cout << " \n";

    cout << "Final Score: " << setw(6) << static_cast<int>(totalScore) << endl;
    cout << "Average Score: " << setw(6) << averageScore << endl;
    cout << "****************************************************\n";

    cout << " \n";
    
    return 0;
}