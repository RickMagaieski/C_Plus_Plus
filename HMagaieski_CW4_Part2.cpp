/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 4 Part 2
* Description: (Give a brief description for Project)
* Due Date: 10/12/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

    double totalPrice;
    int colorNumber;
    char lightedSign, signRemoval;

    cout << "Enter the number of colors in the sign: ";
    cin >> colorNumber;
    
    cout << "Do you want a lighted sign (y/n)? ";
    cin >> lightedSign;

    cout << "Do you need an old sign removed (y/n)? ";
    cin >> signRemoval;

    switch (colorNumber)
    {
    
        case 1:
        {
            const double COLOR_PRICE1 = 250;
            
            
        }
        case 2:
        {
            const double COLOR_PRICE2 = 325;

        }
        case 3:
        {
            const double COLOR_PRICE3 = 450;

        }
        case 4:
        {
            const double COLOR_PRICE4 = 625;

        }
        case 5: 
        {
           const double COLOR_PRICE5 = 850;

        }

    }

    return 0;

}