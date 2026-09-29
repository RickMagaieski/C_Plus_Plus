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

    if (colorNumber > 0)
    {
            cout << " \n";

            cout << "Do you want a lighted sign (y/n)? ";
            cin >> lightSign;

            cout << "Do you need an old sign removed (y/n)? ";
            cin >> removalSign;

            cout << " \n";

        switch (colorNumber)
        {
            case 1:
            {

                const double COLOR_PRICE = 250.00;
                double colorCharge25, colorCharge10;

                if (lightSign == 'y' or lightSign == 'Y')
                {
                    colorCharge25 = COLOR_PRICE * 0.25;
                }

                if (removalSign == 'y' or removalSign == 'Y')
                {
                    colorCharge10 = COLOR_PRICE * 0.10;
                }

                cout << "The price is: " << (colorCharge25 + colorCharge10) + COLOR_PRICE<< endl;

                break;
            }

            case 2:
            {
                const double COLOR_PRICE2 = 325.00;
                double colorCharge25, colorCharge10;

                if (lightSign == 'y' or lightSign == 'Y')
                {
                    colorCharge25 = COLOR_PRICE2 * 0.25;
                }

                if (removalSign == 'y' or removalSign == 'Y')
                {
                    colorCharge10 = COLOR_PRICE2 * 0.10;
                }

                cout << "The price is: " << (colorCharge25 + colorCharge10) + COLOR_PRICE2 << endl;
                
                break;
            }

            case 3:
            {
                const double COLOR_PRICE3 = 450.00;
                double colorCharge25, colorCharge10;

                if (lightSign == 'y' or lightSign == 'Y')
                {
                    colorCharge25 = (COLOR_PRICE3 * 0.25) + COLOR_PRICE3;
                }

                if (removalSign == 'y' or removalSign == 'Y')
                {
                    colorCharge10 = COLOR_PRICE3 * 0.10;
                }

                cout << "The price is: " << (colorCharge25 + colorCharge10) + COLOR_PRICE3 << endl;
                
                break;
            }

            case 4:
            {
                const double COLOR_PRICE4 = 625.00;
                double colorCharge25, colorCharge10 ;

                if (lightSign == 'y' or lightSign == 'Y')
                {
                    colorCharge25 = COLOR_PRICE4 * 0.25;
                }

                if (removalSign == 'y' or removalSign == 'Y')
                {
                    colorCharge10 = COLOR_PRICE4 * 0.10;
                }

                cout << "The price is: " << (colorCharge25 + colorCharge10) + COLOR_PRICE4 << endl;

                break;
            }

            case 5: 
            {
                const double COLOR_PRICE5 = 850.00;
                double  colorCharge25, colorCharge10;

                if (lightSign == 'y' or lightSign == 'Y')
                {
                    colorCharge25 = COLOR_PRICE5 * 0.25;
                }

                if (removalSign == 'y' or removalSign == 'Y')
                {
                    colorCharge10 = COLOR_PRICE5 * 0.10;
                }

                cout << "The price is: " << (colorCharge25 + colorCharge10) + COLOR_PRICE5 << endl;

                break;
            }

            default:
            {
                const double COLOR_PRICE5 = 850.00;
            double  colorCharge25, colorCharge10;

            if (lightSign == 'y' or lightSign == 'Y')
            {
                colorCharge25 = COLOR_PRICE5 * 0.25;
            }

            if (removalSign == 'y' or removalSign == 'Y')
            {
                colorCharge10 = COLOR_PRICE5 * 0.10;
            }

            cout << "The price is: " << (colorCharge25 + colorCharge10) + COLOR_PRICE5 << endl;
            }
        }
    }

    else
    {
        cout << "Invalid number of colors; it must be greater than zero.\n";
    }

    cout << " \n";

    return 0;
}