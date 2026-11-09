/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 6 Part 1
* Description: This program asks for two numbers either to subtract or add, and then displays the result.
* Due Date: 11/16/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
using namespace std;

// Function Prototypes
int getChoice();
bool validateChoice(int);
void getNumbers(int&, int&);
int addition(int, int);
int subtraction(int, int);
void displayResult(int, int, int);


int main()
{
    int choice = 0, num1 = 0, num2 = 0, resultAdd = 0, resultSub = 0;

    do
    {
        choice = getChoice();

        if (validateChoice(choice))
        {
            cout << endl;

            cout << "Invalid choice. Try again!\n";
        }

    } while (validateChoice(choice));

    getNumbers(num1, num2); 

    if (choice == 1)
    {
        resultAdd = addition(num1, num2);
    }
    
    else if (choice == 2)
    {
        resultSub = subtraction(num1, num2);
    }

    displayResult(choice, resultAdd, resultSub);

    return 0;
}

int getChoice()
{
    int userChoice = 0;

    cout << endl;

    cout << "Enter your choice, 1 for Addition, 2 for Subtraction: ";
    cin >> userChoice;

    return userChoice;
}


bool validateChoice(int input)
{
    bool status;

    if (input <= 0 || input >= 3)
    {
        status = true;
    }

    else
    {
        status = false;
    }

    return status;
}

void getNumbers(int& num1, int& num2)
{
    cout << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

int addition(int value1, int value2)
{
    int resultAddition = value1 + value2;

    return resultAddition;
}

int subtraction(int value1, int value2)
{
    int resultSubtraction = value1 - value2;

    return resultSubtraction;
}

void displayResult(int userChoice, int result1, int result2)
{
    if (userChoice == 1)
    {
        cout << endl;
        cout << "The result of the operation is: " << result1 << endl;
    }

    else if (userChoice == 2)
    {
        cout << endl;
        cout << "The result of the operation is: " << result2 << endl;
    }
}