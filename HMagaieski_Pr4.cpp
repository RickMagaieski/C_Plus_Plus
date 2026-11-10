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
    string inputFileName, outputFileName, name;
    int credits;
    double costCredit, grade;    

    cout << setprecision(2) << fixed << showpoint;

    displayHeader();

    cout << endl;

    cout << "Enter input file name: ";
    getline(cin, inputFileName);

    cout << "\nEnter output file name: ";
    getline(cin, outputFileName);

    cout << endl;

    if (openInputFile(readInfoUser, inputFileName))
    {
        cout << "---------------------------------------------";

        while (readStudent (readInfoUser, name, credits, costCredit, grade))
        {
            cout << left << setw(36) << "\nStudent Name: " << right << setw(1) << "| " << name << endl << left 
            << setw(35) << "Credits: " << right << setw(1) << "| " << credits << endl << left << setw(35) 
            << "Cost/Credit:" << right << setw(1) << "| $" << costCredit << endl << left << setw(35) 
            << "Grade: " << right << setw(1) << "| " << grade << " " << endl;

            cout << "---------------------------------------------";
        }

        openOutputFile(outputOpening, outputFileName);
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

    void writeSummary (int validCount, double totalGrades, double minGrade, double maxGrade, ostream& out)
    {
        cout << "Ai ze da manga!";
    }
    