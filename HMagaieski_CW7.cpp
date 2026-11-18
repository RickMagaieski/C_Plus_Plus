/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 7
* Description: This program prints the numbers from an array that are greater than the number entered by the user.
* Due Date: 11/30/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
using namespace std;

void largerThanN(int array[], int arraySize, int user);

int main ()
{
    cout << endl;

    int numbers[10] = {30, 20, 50, 2, -1, 44, 3, 12, 90, 32}, userInput = 0;

    cout << "Enter a number: ";
    cin >> userInput;

    cout << endl;

    cout << "The numbers that are larger than " << userInput << " are: ";

    largerThanN(numbers, 10, userInput);

    cin.ignore();

    cout << "\nPress any key to continue . . . ";
    cin.get();

    cout << endl;

    return 0;
}

void largerThanN(int array[], int arraySize, int user)
{
    for (int counter = 0; counter < arraySize; counter++)
    {
        if (array[counter] > user)
        {
            cout << array[counter] << " ";
        }
    }
}
