/*
* Programmer: Henrique Magaieski
* Course: CMSC140 - CRN 20808
* Semester: Fall 2026
* Project: 
* Description: 
* Due Date: 11/1/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    do 
    {
        cout << "Enter your name: ";
        getline(cin, name);

        if (name == "" or name == " " or name == "  " or name == "   " or name == "    ")
        {
            cout << "Name cannot be empty. Please try again.\n";
        }

    } while (name == "" or name == " " or name == "  " or name == "   " or name == "    ");

    cout << name;
}