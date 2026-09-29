/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 4 Part 1
* Description: This program calculates the final prices (including discounts, if applicable) for Walt Disney World tickets.
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

    const double THREE_TO_FOUR_DAYS = 0.10, FIVE_TO_SIX_DAYS = 0.25, 
    SEVEN_TO_NINE_DAYS = 0.33, TEN_PLUS_DAYS = 0.42, TICKET_PRICE = 109.00;

    cout << fixed << showpoint << setprecision(2);

    double ticketsSold, grossTotal, discountOne, discountTwo, discountThree, discountFour;

    cout << " \n";

    cout << "How many days of tickets were sold? ";
    cin >> ticketsSold;
    cout << endl;

    grossTotal = ticketsSold * TICKET_PRICE;

     if (ticketsSold == 0)
    {

        cout << "Tickets sold must be greater than zero. \n";

    }

    if (ticketsSold > 0 && ticketsSold < 3)
    {

        cout << "The total cost of the purchase is $" << grossTotal << endl;

    }
    

    if (ticketsSold >= 3 && ticketsSold <= 4)
    {

        discountOne = grossTotal - (grossTotal * THREE_TO_FOUR_DAYS);
        cout << "The total cost of the purchase is $" << discountOne << endl;
        
    }

    if (ticketsSold >= 5 && ticketsSold <=6) 
    {

        discountTwo = grossTotal - (grossTotal * FIVE_TO_SIX_DAYS);
        cout << "The total cost of the purchase is $" << discountTwo << endl;

    }

    if (ticketsSold >= 7 && ticketsSold <=9)
    {

        discountThree = grossTotal - (grossTotal * SEVEN_TO_NINE_DAYS);
        cout << "The total cost of the purchase is $" << discountThree << endl;

    }

    if (ticketsSold >= 10)
    {

        discountFour = grossTotal - (grossTotal * TEN_PLUS_DAYS);
        cout << "The total cost of the purchase is $" << discountFour << endl;

    }

    cout << " \n";

    return 0;
}
