/*
* Programmer: Henrique Magaieski
* Course: CMSC140 - CRN 20808
* Semester: Fall 2026
* Project: Grade Calculator
* Description: 
* Due Date: 10/12/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{

    const string GRADE_A_PLUS = "A+", GRADE_B_PLUS = "B+", GRADE_C_PLUS = "C+", GRADE_D_PLUS = "D+", 
    GRADE_A_MINUS = "A-", GRADE_B_MINUS = "B-", GRADE_C_MINUS = "C-", GRADE_D_MINUS = "D-", 
    GRADE_REMARK_A = "Excellent Performance", GRADE_REMARK_B = "Good Performance", GRADE_REMARK_C = "Satisfactory Performance",
    GRADE_REMARK_D = "Needs Improvement", GRADE_REMARK_F = "Unsatisfactory Performance";

    const char GRADE_A = 'A', GRADE_B = 'B', GRADE_C = 'C', GRADE_D = 'D', GRADE_F = 'F';
    char letterGradeRemark1, letterGradeRemark2;
    
    string fullName1, fullName2;

    int studentId1,studentId2, studentAge1, 
    studentAge2, count = 0;

    double averageScore, studentScore1, studentScore2;
    bool validScore1 = false, validScore2 = false;

    cout << fixed << setprecision(1) << showpoint;


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

    cout << "================================================ Grade Report (UMD) =============================================== \n";

    cout << left << setw (10) << "ID" << left << setw(30) << "NAME" << right << setw(10) << "AGE" << setw(18) << "SCORE" 
    << setw(20) << "LETTER GRADE" << setw(20) << "GRADE REMARK" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------- \n";

    if (studentScore1 >= 0.0 && studentScore1 <= 100.0)
    {
        validScore1 = true;

        if (studentScore1 <= 100.0 && studentScore1 >= 95.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_A_PLUS << left << setw(12) << "";

            letterGradeRemark1 = 'A';

            count += 1;
        }

        else if (studentScore1 < 95.0 && studentScore1 >= 93.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1  
            << setw(16) << GRADE_A << left << setw(12) << "";

            letterGradeRemark1 = 'A';

            count += 1;
        }

        else if (studentScore1 < 93.0 && studentScore1 >= 90.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_A_MINUS << left << setw(12) << "";

            letterGradeRemark1 = 'A';
            
            count += 1;
        }

        else if (studentScore1 < 90.0 && studentScore1 >= 87.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1
            << setw(16) << GRADE_B_PLUS << left << setw(12) << "";

            letterGradeRemark1 = 'B';

            count += 1;
        }

        else if (studentScore1 < 87.0 && studentScore1 >= 83.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_B << left << setw(12) << "";

            letterGradeRemark1 = 'B';

            count += 1;
        }

        else if (studentScore1 < 83.0 && studentScore1 >= 80.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_B_MINUS << left << setw(12) << "";

            letterGradeRemark1 = 'B';

            count += 1;
        }

        else if (studentScore1 < 80.0 && studentScore1 >= 77.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_C_PLUS << left << setw(12) << "";

            letterGradeRemark1 = 'C';

            count += 1;
        }

        else if (studentScore1 < 77.0 && studentScore1 >= 73.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_C << left << setw(12) << "";

            letterGradeRemark1 = 'C';

            count += 1;
        }

        else if (studentScore1 < 73.0 && studentScore1 >= 70.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_C_MINUS << left << setw(12) << "";
            
            letterGradeRemark1 = 'C';

            count += 1;
        }

        else if (studentScore1 < 70.0 && studentScore1 >= 67.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D_PLUS << left << setw(12) << "";

            letterGradeRemark1 = 'D';

            count += 1;
        }
        
        else if (studentScore1 < 67.0 && studentScore1 >= 63.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D << left << setw(12) << "";

            letterGradeRemark1 = 'D';

            count += 1;
        }

        else if (studentScore1 < 63.0 && studentScore1 >= 60.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D_MINUS << left << setw(12) << "";

            letterGradeRemark1 = 'D';

            count += 1;
        }

        else if (studentScore1 < 60.0 && studentScore1 >= 0.0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_F << left << setw(12) << "";

            letterGradeRemark1 = 'F';

            count += 1;
        }

        switch (letterGradeRemark1)
        {
            case 'A':
            {
                cout << left << setw(1) << GRADE_REMARK_A << endl;
                break;
            }

            case 'B':
            {
                cout << left << setw(1) << GRADE_REMARK_B << endl;
                break;
            }

            case 'C':
            {
                cout << left << setw(1) << GRADE_REMARK_C << endl;
                break;
            }

            case 'D':
            {
                cout << left << setw(1) << GRADE_REMARK_D << endl;
                break;
            }

            case 'F':
            {
                cout << left << setw(1) << GRADE_REMARK_F << endl;
                break;
            }
        }
    }

    else 
    {   
        studentScore1 = 0.0;

        cout << left << setw(10) << studentId1 << left << setw(30) << 
        fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1
        << setw(16) << "N/A" << right << setw(30) << "Invalid Score" << endl;
    }

    if (studentScore2 >= 0.0 && studentScore2 <= 100.0)
    {
        validScore2 = true;

        if (studentScore2 <= 100.0 && studentScore2 >= 95.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_A_PLUS << left << setw(12) << "";

            letterGradeRemark2 = 'A';

            count += 1;
        }

        else if (studentScore2 < 95.0 && studentScore2 >= 93.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2
            << setw(16) << GRADE_A << left << setw(12) << "";

            letterGradeRemark2 = 'A';

            count += 1;
        }

        else if (studentScore2 < 93.0 && studentScore2 >= 90.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_A_MINUS << left << setw(12) << "";

            letterGradeRemark2 = 'A';

            count += 1;
        }

        else if (studentScore2 < 90.0 && studentScore2 >= 87.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_B_PLUS << left << setw(12) << "";

            letterGradeRemark2 = 'B';

            count += 1;
        }

        else if (studentScore2 < 87.0 && studentScore2 >= 83.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_B << left << setw(12) << "";

            letterGradeRemark2 = 'B';

            count += 1;
        }

        else if (studentScore2 < 83.0 && studentScore2 >= 80.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_B_MINUS << left << setw(12) << "";

            letterGradeRemark2 = 'B';

            count += 1;
        }

        else if (studentScore2 < 80.0 && studentScore2 >= 77.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_C_PLUS << left << setw(12) << "";

            letterGradeRemark2 = 'C';

            count += 1;
        }

        else if (studentScore2 < 77.0 && studentScore2 >= 73.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_C << left << setw(12) << "";

            letterGradeRemark2 = 'C';

            count += 1;
        }

        else if (studentScore2 < 73.0 && studentScore2 >= 70.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_C_MINUS << left << setw(12) << "";

            letterGradeRemark2 = 'C';

            count += 1;
        }

        else if (studentScore2 < 70.0 && studentScore2 >= 67.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D_PLUS << left << setw(12) << "";

            letterGradeRemark2 = 'D';
            
            count += 1;
        }

        else if (studentScore2 < 67.0 && studentScore2 >= 63.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D << left << setw(12) << "";

            letterGradeRemark2 = 'D';

            count += 1;
        }

        else if (studentScore2 < 63.0 && studentScore2 >= 60.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D_MINUS << left << setw(12) << "";

            letterGradeRemark2 = 'D';

            count += 1;
        }

        else if (studentScore2 < 60.0 && studentScore2 >= 0.0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_F << left << setw(12) << "";

            letterGradeRemark2 = 'F';

            count += 1;
        }

        switch (letterGradeRemark2)
        {
            case 'A':
            {
                cout << left << setw(1) << GRADE_REMARK_A << endl;
                break;
            }

            case 'B':
            {
                cout << left << setw(1) << GRADE_REMARK_B << endl;
                break;
            }

            case 'C':
            {
                cout << left << setw(1) << GRADE_REMARK_C << endl;
                break;
            }

            case 'D':
            {
                cout << left << setw(1) << GRADE_REMARK_D << endl;
                break;
            }

            case 'F':
            {
                cout << left << setw(1) << GRADE_REMARK_F << endl;
                break;
            }
        }
    }

    else 
    {
        studentScore2 = 0.0;

        cout << left << setw(10) << studentId2 << left << setw(30) << 
        fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2
        << setw(16) << "N/A" << right << setw(30) << "Invalid Score" << endl;
    }

    cout << " \n";

    cout << "========================= CLASS SUMMARY ========================= \n";

    if (validScore1 && validScore2)
    {
        averageScore = (studentScore1 + studentScore2) / 2.0;

        cout << left << setw(24) << "Number of valid scores" << ": 2\n";
        cout << left << setw(24) << "Average Score" << ": " << averageScore << endl;
        cout << left << setw(24) << "Maximum Score" << ": " << max(studentScore1, studentScore2) << endl;
        cout << left << setw(24) << "Minimum Score" << ": " << min(studentScore1, studentScore2) << endl;
    }

    else if (validScore1)
    {
        averageScore = studentScore1;

        cout << left << setw(24) << "Number of valid scores" << ": 1\n";
        cout << left << setw(24) << "Average Score" << ": " << studentScore1 << endl;
        cout << left << setw(24) << "Maximum Score" << ": " << studentScore1 << endl;
        cout << left << setw(24) << "Minimum Score" << ": " << studentScore1 << endl;
    }

    else if (validScore2)
    {
        averageScore = studentScore2;

        cout << left << setw(24) << "Number of valid scores" << ": 1\n";
        cout << left << setw(24) << "Average Score" << ": " << studentScore2 << endl;
        cout << left << setw(24) << "Maximum Score" << ": " << studentScore2 << endl;
        cout << left << setw(24) << "Minimum Score" << ": " << studentScore2 << endl;
    }

    else
    {
        cout << "No valid scores entered. Average, max, and min cannot be computed.\n";
    }

    cout << " \n";

    cout << "Programmer Name: Henrique Magaieski \n"; 
    cout << "Course: CMSC140 - CRN20808 \n"; 
    cout << "Semester: Fall 2026 \n";
    cout << "Project: Project 2 - Grade Calculator \n";
    cout << "Due Date: 10/12/2026";

    cout << " \n";

    return 0;
}