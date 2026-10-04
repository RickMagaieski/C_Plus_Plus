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
#include <algorithm>

using namespace std;

int main ()
{

    const string GRADE_A_PLUS = "A+", GRADE_B_PLUS = "B+", GRADE_C_PLUS = "C+", GRADE_D_PLUS = "D+", 
    GRADE_A_MINUS = "A-", GRADE_B_MINUS = "B-", GRADE_C_MINUS = "C-", GRADE_D_MINUS = "D-", 
    GRADE_REMARK_A = "Excellent Perfomance", GRADE_REMARK_B = "Good Perfomance", GRADE_REMARK_C = "Satisfactory Performance",
    GRADE_REMARK_D = "Needs Improvement", GRADE_REMARK_F = "Unsatisfactory Perfomance",
    PROGRAMMER_NAME = "Henrique Magaieski", COURSE_NAME = "CMSC140 - CRN20808", SEMESTER = "Fall 2026", 
    PROJECT = "Project 2 - Grade Calculator", DUE_DATE = "10/12/2026";
    const char GRADE_A = 'A', GRADE_B = 'B', GRADE_C = 'C', GRADE_D = 'D', GRADE_F = 'F';
    
    string fullName1, fullName2;
    int studentId1,studentId2, studentAge1, 
    studentAge2, count;
    double averageScore, studentScore1, studentScore2;

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

    if (studentScore1 > 0 && studentScore1 <= 100)
    {
        if (studentScore1 <= 100 && studentScore1 >= 95)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_A_PLUS;

            count += 1;

            switch (GRADE_A)
            {
                case 'A':
                    {
                        cout << right << setw(30) << GRADE_REMARK_A << endl;
                    }
            }
        }

        else if (studentScore1 < 95 && studentScore1 >= 93)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1  
            << setw(16) << GRADE_A;

            count += 1;

            switch (GRADE_A)
            {
                case 'A':
                    {
                        cout << right << setw(30) << GRADE_REMARK_A << endl;
                    }
            }
        }

        else if (studentScore1 < 93 && studentScore1 >= 90)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_A_MINUS;
            
            count += 1;

            switch (GRADE_A)
            {
                case 'A':
                    {
                        cout << right << setw(30) << GRADE_REMARK_A << endl;
                    }
            }
        }

        else if (studentScore1 < 90 && studentScore1 >= 87)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1
            << setw(16) << GRADE_B_PLUS;

            count += 1;

            switch (GRADE_B)
            {
                case 'B':
                    {
                        cout << right << setw(30) << GRADE_REMARK_B << endl;
                    }
            }
        }

        else if (studentScore1 < 87 && studentScore1 >= 83)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_B;

            count += 1;

            switch (GRADE_B)
            {
                case 'B':
                    {
                        cout << right << setw(30) << GRADE_REMARK_B << endl;
                    }
            }
        }

        else if (studentScore1 < 83 && studentScore1 >= 80)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_B_MINUS;

            count += 1;

            switch (GRADE_B)
            {
                case 'B':
                    {
                        cout << right << setw(30) << GRADE_REMARK_B << endl;
                    }
            }
        }

        else if (studentScore1 < 80 && studentScore1 >= 77)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_C_PLUS;

            count += 1;

            switch (GRADE_C)
            {
                case 'C':
                    {
                        cout << right << setw(30) << GRADE_REMARK_C << endl;
                    }
            }
        }

        else if (studentScore1 < 77 && studentScore1 >= 73)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_C;

            count += 1;

            switch (GRADE_C)
            {
                case 'C':
                    {
                        cout << right << setw(30) << GRADE_REMARK_C << endl;
                    }
            }
        }

        else if (studentScore1 < 73 && studentScore1 >= 70)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_C_MINUS;

            count += 1;

            switch (GRADE_C)
            {
                case 'C':
                    {
                        cout << right << setw(30) << GRADE_REMARK_C << endl;
                    }
            }
        }

        else if (studentScore1 < 70 && studentScore1 >= 67)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D_PLUS;

            count += 1;

            switch (GRADE_D)
            {
                case 'D':
                    {
                        cout << right << setw(30) << GRADE_REMARK_D << endl;
                    }
            }
        }
        
        else if (studentScore1 < 67 && studentScore1 >= 63)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D;

            count += 1;

            switch (GRADE_D)
            {
                case 'D':
                    {
                        cout << right << setw(30) << GRADE_REMARK_D << endl;
                    }
            }
        }

        else if (studentScore1 < 63 && studentScore1 >= 60)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D_MINUS;

            count += 1;

            switch (GRADE_D)
            {
                case 'D':
                    {
                        cout << right << setw(30) << GRADE_REMARK_D << endl;
                    }
            }
        }

        else if (studentScore1 < 60 && studentScore2 > 0)
        {
            cout << left << setw(10) << studentId1 << left << setw(30) << 
            fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1 
            << setw(16) << GRADE_D_MINUS;

            count += 1;

            switch (GRADE_F)
            {
                case 'F':
                    {
                        cout << right << setw(30) << GRADE_REMARK_F << endl;
                    }
            }
        }
    }

    else 
    {   
        studentScore1 = 0.00;

        cout << left << setw(10) << studentId1 << left << setw(30) << 
        fullName1 << right << setw(10) << studentAge1 << setw(17) << studentScore1
        << setw(16) << "N/A" << right << setw(30) << "Invalid Score" << endl;
    }

    if (studentScore2 > 0 && studentScore2 <= 100)
    {
        if (studentScore2 <= 100 && studentScore2 >= 95)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_A_PLUS;

            count += 1;

            switch (GRADE_A)
            {
                case 'A':
                    {
                        cout << right << setw(30) << GRADE_REMARK_A << endl;
                    }
            }

        }

        else if (studentScore2 < 95 && studentScore2 >= 93)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2
            << setw(16) << GRADE_A;

            count += 1;

            switch (GRADE_A)
            {
                case 'A':
                    {
                        cout << right << setw(30) << GRADE_REMARK_A << endl;
                    }
            }
        }

        else if (studentScore2 < 93 && studentScore2 >= 90)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_A_MINUS;

            count += 1;

            switch (GRADE_A)
            {
                case 'A':
                    {
                        cout << right << setw(30) << GRADE_REMARK_A << endl;
                    }
            }
        }

        else if (studentScore2 < 90 && studentScore2 >= 87)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_B_PLUS;

            count += 1;

            switch (GRADE_B)
            {
                case 'B':
                    {
                        cout << right << setw(30) << GRADE_REMARK_B << endl;
                    }
            }
        }

        else if (studentScore2 < 87 && studentScore2 >= 83)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_B;

            count += 1;

            switch (GRADE_B)
            {
                case 'B':
                    {
                        cout << right << setw(30) << GRADE_REMARK_B << endl;
                    }
            }
        }

        else if (studentScore2 < 83 && studentScore2 >= 80)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_B_MINUS;

            count += 1;

            switch (GRADE_B)
            {
                case 'B':
                    {
                        cout << right << setw(30) << GRADE_REMARK_B << endl;
                    }
            }
        }

        else if (studentScore2 < 80 && studentScore2 >= 77)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_C_PLUS;

            count += 1;

            switch (GRADE_C)
            {
                case 'C':
                    {
                        cout << right << setw(30) << GRADE_REMARK_C << endl;
                    }
            }
        }

        else if (studentScore2 < 77 && studentScore2 >= 73)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_C;

            count += 1;

            switch (GRADE_C)
            {
                case 'C':
                    {
                        cout << right << setw(30) << GRADE_REMARK_C << endl;
                    }
            }
        }

        else if (studentScore2 < 73 && studentScore2 >= 70)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_C_MINUS;

            count += 1;

            switch (GRADE_C)
            {
                case 'C':
                    {
                        cout << right << setw(30) << GRADE_REMARK_C << endl;
                    }
            }
        }

        else if (studentScore2 < 70 && studentScore2 >= 67)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D_PLUS;
            
            count += 1;

            switch (GRADE_D)
            {
                case 'D':
                    {
                        cout << right << setw(30) << GRADE_REMARK_D << endl;
                    }
            }
        }

        else if (studentScore2 < 67 && studentScore2 >= 63)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D;

            count += 1;

            switch (GRADE_D)
            {
                case 'D':
                    {
                        cout << right << setw(30) << GRADE_REMARK_D << endl;
                    }
            }
        }

        else if (studentScore2 < 63 && studentScore2 >= 60)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D_MINUS;

            count += 1;

            switch (GRADE_D)
            {
                case 'D':
                    {
                        cout << right << setw(30) << GRADE_REMARK_D << endl;
                    }
            }
        }

        else if (studentScore2 < 60 && studentScore2 > 0)
        {
            cout << left << setw(10) << studentId2 << left << setw(30) << 
            fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2 
            << setw(16) << GRADE_D_MINUS;

            count += 1;

            switch (GRADE_F)
            {
                case 'F':
                    {
                        cout << right << setw(30) << GRADE_REMARK_F << endl;
                    }
            }
        }
    }

    else 
    {
        studentScore2 = 0.00;

        cout << left << setw(10) << studentId2 << left << setw(30) << 
        fullName2 << right << setw(10) << studentAge2 << setw(17) << studentScore2
        << setw(16) << "N/A" << right << setw(30) << "Invalid Score" << endl;
    }

    cout << " \n";

    averageScore = (static_cast<double>(studentScore1) + static_cast<double>(studentScore2)) / count;

    cout << "========================= CLASS SUMMARY ========================= \n";

    if ((studentScore1 > 0 && studentScore1 <= 100) or (studentScore2 > 0 && studentScore2 <= 100))
    {
        if (studentScore1 > 0 && studentScore2 > 0)
        {
            cout << left << setw(24) << "Number of valid scores" << right <<": 2\n";
        }

        else if (studentScore1 > 0)
        {
            cout << left << setw(24) << "Number of valid scores" << right <<": 1\n";
        }

        else if (studentScore2 > 0)
        {
            cout << left << setw(24) << "Number of valid scores" << right <<": 1\n";
        }

        cout << left << setw(24) << "Average Score" << left << setw(1) << ": " << averageScore << endl;
        cout << left << setw(24) << "Maximum Score" << left << setw(1) << ": " 
        << max(static_cast<double>(studentScore1), static_cast<double>(studentScore2)) << endl;
        cout << left << setw(24) << "Minimum Score" << left << setw(1) << ": " 
        << min(static_cast<double>(studentScore1), static_cast<double>(studentScore2)) << endl;
    }

    else
    {
        cout << "No valid scores entered. Average, max, and min cannot be computed. \n";
    }

    cout << " \n";

    cout << "Programmer Name: " << PROGRAMMER_NAME << endl;
    cout << "Course: " << COURSE_NAME << endl;
    cout << "Semester: " << SEMESTER << endl;
    cout << "Project: " << PROJECT << endl;
    cout << "Due Date: " << DUE_DATE << endl;

    cout << " \n";

    return 0;
}