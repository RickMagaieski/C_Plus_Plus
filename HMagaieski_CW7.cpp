/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 6 Part 2
* Description: This program prints the numbers tha are bigger than the user's name based on the numbers inside the array
* Due Date: 11/30/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
using namespace std;

void largerThanN(int array[], int counter, int user);

int main ()
{
    cout << endl;

    int numbers[10] = {30, 20, 50, 2, -1, 44, 3, 12, 90, 32}, userInput = 0, count = 0;

    cout << "Enter a number: ";
    cin >> userInput;

    cout << endl;

    cout << "The numbers that are larger than " << userInput << " are: ";

    largerThanN(numbers, count, userInput);

    cin.ignore();

    cout << "\nPess any key to continue . . . ";
    cin.get();

    cout << endl;

    return 0;
}

void largerThanN(int array[], int counter, int user)
{
    for (counter; counter < 10; counter++)
    {
        if (array[counter] > user)
        {
            cout << array[counter] << " ";
        }
        else if (user > array[counter] && counter == 10)
        {
            cout << "The numbers that are larger than 100 are: ";
        }
    }
}