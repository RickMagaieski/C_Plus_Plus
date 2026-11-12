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
#include <string>
#include <iomanip>
#include <algorithm>

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
    ifstream readInfoUser;
    ofstream outputOpening;
    string inputFileName, outputFileName, name, gradeStanding;
    char letterGrade;
    int credits, validCount;
    double costCredit, grade, totalDue;    

    cout << setprecision(2) << fixed << showpoint;

    displayHeader();

    cout << endl;

    cout << "Enter input file name: ";
    getline(cin, inputFileName);

    cout << "\nEnter output file name: ";
    getline(cin, outputFileName);

    cout << endl;

    if (openInputFile(readInfoUser, inputFileName) 
    && openOutputFile(outputOpening, outputFileName))
    {
        cout << "---------------------------------------------";

        while (readStudent (readInfoUser, name, credits, costCredit, grade))
        {
        
            computeStudentInfo(credits, costCredit, grade, letterGrade, gradeStanding, totalDue);

            cout << left << setw(31) << "\nStudent Name: " << right << setw(1) << "| " << name << endl << left 
            << setw(30) << "Credits: " << right << setw(1) << "| " << credits << endl << left << setw(30) 
            << "Cost/Credit:" << right << setw(1) << "| $" << costCredit << endl << left << setw(30) 
            << "Grade: " << right << setw(1) << "| " << grade << " " << "(" << letterGrade << ")"
            << left << setw(31) << "\nStanding: " << right << setw(1) << "| " << gradeStanding 
            << left << setw(31) << "\nTotal Due: " << right << setw(1) << "| " << "$" << totalDue << endl;

            cout << "---------------------------------------------";
        }

        cout << endl;

        displayFooter();

        cout << endl;
    }

    else
    {
        cout << endl;

        cout << "Error: could not open input file " << inputFileName 
        << "\nProgram terminated due to input file error.\n";

        cout << endl;

        displayFooter();

        cout << endl;
    }

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
    bool status;

    inFile.open(fileName);

    if (inFile.is_open())
    {
        status = true;
    }

    else
    {
        status = false;
    }

    return status;
}

void displayFooter()
{
    cout << "Programmer Name: Henrique Magaieski\n" 
    << "Course: CMSC140 - CRN 20808\n" << "Semester: Fall 2026\n"
    << "Project: File-Based Report Generator\n" << "Due Date: 11/16/2026\n";
}

bool openOutputFile (ofstream& outFile, string fileName)
{
    bool status;

    outFile.open(fileName);

    if (outFile.is_open())
    {
        status = true;
    }

    else
    {
        status = false;
    }

    return status;
}

bool readStudent (ifstream& inFile, string& name, int& credits, double& costPerCredit, 
    double& grade)
    {
        bool status;
    
        if (inFile >> name >> credits >> costPerCredit >> grade)
        {
            status = true;
        }

        else
        {
            status = false;
        }

        return status;
    }
    
void computeStudentInfo (int credits, double costPerCredit, double grade, char& letter,
     string& standing, double& totalDue)
     {
        totalDue = (credits * costPerCredit) + 75.00;

        if (grade >= 0 && grade <= 100.00)
        {
            if (grade >= 90.00 && grade <= 100.00)
            {
                letter = 'A';
            }
            if (grade >= 80.00 && grade < 90.00)
            {
                letter = 'B';
            }
            if (grade >= 70.00 && grade < 80.00)
            {
                letter = 'C';
            }
            if (grade >= 60.00 && grade < 70.00)
            {
                letter = 'D';
            }
            if (grade >= 0 && grade < 60.00)
            {
                letter = 'F';
            }
        }
        
        else
        {
            cout << "Invalid Input";
        }

        if (grade >= 0 && grade <= 100.00)
        {
            if (grade >= 70.00 && grade <= 100.00)
            {
                standing = "Good Standing";
            }

            if (grade >= 60.00 && grade < 70.00)
            {
                standing = "Academic Warning";
            }

            if (grade >= 0 && grade < 60.00)
            {
                standing = "See Advisor";
            }
        }

        else 
        {
            cout << "Invalid Input";
        }

     }

void writeSummary (int validCount, double totalGrades, 
    double minGrade, double maxGrade, ostream& out)
{
    validCount++;
    totalGrades += totalGrades;


}