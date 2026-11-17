#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void order(char& value1, char& value2);
void order(int& value1, int& value2);
void order(double& value1, double& value2);

int main()
{
    string userInput;
    char variableChar1, variableChar2;
    int variableInt1, variableInt2;
    double variableDouble1, variableDouble2;

    cout << "Select a data type among char, int, and double: ";
    cin >> userInput;

    if (userInput == "char")
    {
        cout << "\nEnter the first value: ";
        cin >> variableChar1;

        cout << "Enter the second value: ";
        cin >> variableChar2;

        order(variableChar1, variableChar2);
    }

    if (userInput == "int")
    {
        cout << "\nEnter the first value: ";
        cin >> variableInt1;

        cout << "Enter the second value: ";
        cin >> variableInt2;

        order(variableInt1, variableInt2);
    }

    if (userInput == "double")
    {
        cout << "\nEnter the first value: ";
        cin >> variableDouble1;

        cout << "Enter the second value: ";
        cin >> variableDouble2;

        order(variableDouble1, variableDouble2);
    }

    if (userInput != "int" || userInput != "char" || userInput != "double")
    {
        cout << "Invalid Option";

        exit(0);
    }

    return 0;
}

void order(char& value1, char& value2)
{
    if (value1 > value2)
    {
        char swap1 = value1;
        char swap2 = value2;

        cout << swap2 << " " << swap1;
    }
    else
    {
        cout << value1 << " " << value2;
    }
}

void order(int& value1, int& value2)
{
    if (value1 > value2)
    {
        int swap1 = value1;
        int swap2 = value2;

        cout << swap2 << " " << swap1;
    }
    else
    {
        cout << value1 << " " << value2;
    }
}

void order (double& value1, double& value2)
{
    if (value1 > value2)
    {
        double swap1 = value1;
        double swap2 = value2;

        cout << swap2 << " " << swap1;
    }
    else
    {
        cout << value1 << " " << value2;
    }
}