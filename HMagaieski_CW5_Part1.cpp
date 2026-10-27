/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 5 Part 1
* Description: This program demonstrates the functionality of `for` loops and what we can do with them.
* Due Date: 11/02/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    cout << "(I)\n";

    cout << endl;

    while (count <= 10)
    {
        cout << "*";
        count++;
    }

    cout << endl;
    cout << endl;

    int count2 = 1;

    cout << "(II)\n";

    cout << endl;

    do
    {
        cout << "*";
        count2++;

    } while (count2 <= 20);

    cout << endl;
    cout << endl;

    cout << "(III)\n";

    cout << endl;

    for (int rows = 1; rows <= 10; rows++)
    {
        for (int columns = 1; columns <= rows; columns++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "(IV)\n";

    cout << endl;

    for (int rows = 1; rows <= 20; rows++)
    {
        for (int columns = 1; columns <= rows; columns++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "(V)\n";

    cout << endl;

    for (int rows = 10; rows > 0; rows--)
    {
        for (int columns = 1; columns <= rows; columns++)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "(VI)\n";

    cout << endl;

    for (int rows = 20; rows > 0; rows--)
    {
        for (int columns = 1; columns <= rows; columns++)
        {
            cout << "*";
        }

        cout << endl;
    }

}