#include <iostream>
#include <iomanip>

using namespace std;


int main()

{
    int colorNumber;
    char lightSign, removalSign;

    cout << fixed << setprecision (2) << showpoint;

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

            const double COLOR_PRICE1 = 250;
            double totalPrice = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                totalPrice = (COLOR_PRICE1 * 0.25) + COLOR_PRICE1;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = totalPrice + ((COLOR_PRICE1 * 0.10) + COLOR_PRICE1);
            }

            cout << "The price is: " << totalPrice << endl;

        }

        case 2:
        {
            const double COLOR_PRICE2 = 325;
            double totalPrice = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                totalPrice = (COLOR_PRICE2 * 0.25) + COLOR_PRICE2;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = totalPrice + ((COLOR_PRICE2 * 0.10) + COLOR_PRICE2);
            }

            cout << "The price is: " << totalPrice << endl;

        }

        case 3:
        {
            const double COLOR_PRICE3 = 450;
            double totalPrice = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                totalPrice = (COLOR_PRICE3 * 0.25) + COLOR_PRICE3;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = totalPrice + ((COLOR_PRICE3 * 0.10) + COLOR_PRICE3);
            }

            cout << "The price is: " << totalPrice << endl;
        }

        case 4:
        {
            const double COLOR_PRICE4 = 625;
            double totalPrice = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                totalPrice = (COLOR_PRICE4 * 0.25) + COLOR_PRICE4;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = totalPrice + ((COLOR_PRICE4 * 0.10) + COLOR_PRICE4);
            }

            cout << "The price is: " << totalPrice << endl;
        }

        case 5: 
        {
            const double COLOR_PRICE5 = 850;
            double totalPrice = 0.00;

            if (lightSign == 'y' or 'Y')
            {
                totalPrice = (COLOR_PRICE5 * 0.25) + COLOR_PRICE5;
            }

            if (removalSign == 'y' or 'Y')
            {
                totalPrice = totalPrice + ((COLOR_PRICE5 * 0.10) + COLOR_PRICE5);
            }

            cout << "The price is: " << totalPrice << endl;
        }
    }

    return 0;
}
