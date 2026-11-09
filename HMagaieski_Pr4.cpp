/*
* Programmer: Henrique Magaieski
* Course: CMSC140 - CRN 20808
* Semester: Fall 2026
* Project: MC File-Based Student Report Generator
* Description: It generates a student report based on storaged data in a txt file.
* Due Date: 11/16/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/

#include <iostream>
#include <fstream>

using namespace std;

void displayHeader ();
bool openInputFile (ifstream& inFile, string fileName);
bool openOutputFile (ofstream& outFile, string fileName);
bool readStudent (ifstream& inFile, string& name, int& credits, double& costPerCredit, 
    double& grade);
void computeStudentInfo (int credits, double costPerCredit, double grade, char& letter,
     string& standing, double& totalDue);
void writeStudentReport (string name, int credits, double costPerCredit, double grade, 
    char letter, string standing, double totalDue, ostream& out);
void writeSummary (int validCount, double totalGrades, double minGrade, double maxGrade, ostream& out);
void displayFooter();


int main()
{
    displayHeader();
}

void displayHeader()
{

    cout << endl;

    cout << "==========================================\n";
    cout << "  MC File-Based Student Report Generator";
    cout << "\n==========================================";

    cout << endl;

}

bool openInputFile (ifstream& inFile, string fileName)
{
    
}