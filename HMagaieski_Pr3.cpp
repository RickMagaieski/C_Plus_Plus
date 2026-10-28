/*
* Programmer: Henrique Magaieski
* Course: CMSC140 - CRN 20808
* Semester: Fall 2026
* Project: Statistics Calculator
* Description: Calculates the total, average, highest, and lowest scores entered by the user.
* Due Date: 11/1/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name;

    cout << endl;

    cout << "Welcome to the Statistics Calculator!\n";

    cout << endl;

    do 
        {
            cout << "Please enter your name: ";
            getline(cin, name);

            if (name == "" or name == " " or name == "  " or name == "   " or name == "    ")
            {
                cout << "Name cannot be empty. Please try again.\n";
            }

        } while (name == "" or name == " " or name == "  " or name == "   " or name == "    ");

        cout << endl;

        cout << "Hello, " << name << "!" << endl;

        cout << endl;

    while (true)
    {
        char question;
        int scoreQuantity = 0, count;
        float total = 0, highest = 0, lowest = 0, score = 0, average = 0;
        
        cout << setprecision(2) << fixed << showpoint;
        
        do
        {    
            cout << "How many scores will you enter (1 - 30)? ";
            cin >> scoreQuantity;

            if (scoreQuantity < 1 or scoreQuantity > 30)
            {
                cout << "Invalid count. Please enter a value between 1 and 30.\n";
            }

            cout << endl;

        } while (scoreQuantity < 1 or scoreQuantity > 30);

        for(count = 1; count <= scoreQuantity; count++)
        {
            cout << "Enter score #" << count << " (0.00 - 100.00): ";
            cin >> score;

            if (score < 0.00 or score > 100.00)
            {
                cout << "Invalid score. Please enter a value between 0.00 and 100.00.\n";
                count--;
            }

            else
            {
                total += score;

                if (count == 1 && (score >= 0.00 && score <= 100.00))
                {
                    highest = score;
                    lowest = score;
                }
            }
            
            if (score > highest && (score >= 0.00 && score <= 100.00))
            {
                highest = score;
            }

            if (score < lowest && (score >= 0.00 && score <= 100.00))
            {
                lowest = score;
            }
        }

        cout << endl;

        cout << "----- Statistics Report -----\n";
        cout << left << setw(9) << "User: " << right << name << endl;
        cout << left << setw(9) << "Count: " << right << (count - 1) << endl;
        cout << left << setw(9) << "Total: " << right << total << endl;
        cout << left << setw(9) << "Average: " << right << (total/(count - 1)) << endl;
        cout << left << setw(9) << "Highest: " << right << highest << endl;
        cout << left << setw(9) << "Lowest: " << right << lowest << endl;
        cout << "-----------------------------\n";

        cout << endl;

        cout << "Do you want to process another set? (Y/N): ";
        cin >> question;

        cin.ignore();
        cout << endl;

        if (question == 'N' or question == 'n')
        {
            cout << "Thank you for using the Statistics Calculator. Goodbye!\n";

            cout << endl;

            cout << "Programmer Name: Henrique Magaieski\n" 
            << "Course: CMSC140 - CRN 20808\n" << "Semester: Fall 2026\n"
            << "Project: Statistics Calculator\n" << "Due Date: 11/01/2026\n";

            cout << endl;

            break;
        }
    }

    return 0;
}