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


int main()

{
    int colorNumber;
    char lightSign, removalSign;

    cout << fixed << setprecision (2) << showpoint;

    cout << " \n";

    cout << "Enter the number of colors in the sign: ";
    cin >> colorNumber;

    cout << "Do you want a lighted sign (y/n)? ";
    cin >> lightSign;

    cout << "Do you need an old sign removed (y/n)? ";
    cin >> removalSign;

    switch (colorNumber)
    {
        case 1:
        {

            const double COLOR_PRICE1 = 250.00;
            double totalPrice = 0.00, answer1 = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                answer1 = (COLOR_PRICE1 * 0.25) + COLOR_PRICE1;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = COLOR_PRICE1 * 0.10;
            }

            cout << "The price is: " << totalPrice + answer1 << endl;

            break;
        }

        case 2:
        {
            const double COLOR_PRICE2 = 325.00;
            double totalPrice = 0.00, answer2 = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                answer2 = (COLOR_PRICE2 * 0.25) + COLOR_PRICE2;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = COLOR_PRICE2 * 0.10;
            }

            cout << "The price is: " << totalPrice + answer2 << endl;
            
            break;
        }

        case 3:
        {
            const double COLOR_PRICE3 = 450.00;
            double totalPrice = 0.00, answer3 = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                answer3 = (COLOR_PRICE3 * 0.25) + COLOR_PRICE3;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = COLOR_PRICE3 * 0.10;
            }

            cout << "The price is: " << totalPrice + answer3 << endl;
            
            break;
        }

        case 4:
        {
            const double COLOR_PRICE4 = 625.00;
            double totalPrice = 0.00, answer4 = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                answer4 = (COLOR_PRICE4 * 0.25) + COLOR_PRICE4;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = COLOR_PRICE4 * 0.10;
            }

            cout << "The price is: " << totalPrice + answer4 << endl;

            break;
        }

        case 5: 
        {
            const double COLOR_PRICE5 = 850.00;
            double totalPrice = 0.00, answer5 = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                answer5 = (COLOR_PRICE5 * 0.25) + COLOR_PRICE5;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = COLOR_PRICE5 * 0.10;
            }

            cout << "The price is: " << totalPrice + answer5 << endl;

            break;
        }
    }

    cout << " \n";

    return 0;
}