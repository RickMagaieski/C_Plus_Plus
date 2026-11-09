/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 6 Part 2
* Description: 
* Due Date: 11/16/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
using namespace std;

// Function Prototypes
void showMenu();
int getChoice();
double getPrice(int price);
double takePurchase(double itemPrice);
double takePayment();
void displayInfo(double purchase, double payment);

int main()
{
    int choice = 0;
    double itemPrice = 0, purchase = 0, payment = 0;

    showMenu();

    choice = getChoice();

    if (choice == 5)
    {
        return 0;
    }

    if (choice >= 1 && choice <= 4)
    {
        itemPrice = getPrice(choice);

        purchase = takePurchase(itemPrice);

        payment = takePayment();

        displayInfo(purchase, payment);
    }

    else
    {
        cout << "Invalid choice. Try again!\n";
    }

    return 0;
}

void showMenu()
{
    cout << endl;

    cout << "***** Vending Machine *****\n";
    cout << "1. Coke   $1.25\n";
    cout << "2. Pepsi  $1.00\n";
    cout << "3. Water  $2.00\n";
    cout << "4. Coffee $1.50\n";
    cout << "5. Exit Menu\n";
}

int getChoice()
{
    int userChoice = 0;

    cout << endl;

    cout << "Enter your choice: ";
    cin >> userChoice;

    return userChoice;
}

double getPrice(int choice)
{
    double price = 0;

    switch (choice)
    {
        case 1:
            price = 1.25;
            break;

        case 2:
            price = 1.00;
            break;

        case 3:
            price = 2.00;
            break;

        case 4:
            price = 1.50;
            break;

        default:
            price = 0;
            break;
    }

    return price;
}

double takePurchase(double itemPrice)
{
    int quantity = 0;
    double purchase = 0;

    cout << "How many do you want? ";
    cin >> quantity;

    purchase = itemPrice * quantity;

    return purchase;
}

double takePayment()
{
    double payment = 0;

    cout << "How much is your payment? ";
    cin >> payment;

    return payment;
}

void displayInfo(double purchase, double payment)
{
    double tax = 0, totalPurchase = 0, change = 0;

    tax = purchase * 0.06;
    totalPurchase = purchase + tax;
    change = payment - totalPurchase;

    cout << endl;

    cout << "Tax Amount: $" << tax << endl;
    cout << "Total Purchase: $" << totalPurchase << endl;
    cout << "Change: $" << change << endl;

    cout << endl;
}
