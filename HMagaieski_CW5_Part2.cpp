/*
* Class: CMSC140 CRN 20808
* Instructor: Mr. Huseyin Aygun
* Project: Classwork 5 Part 2
* Description: This is a program that asks, storages and displays the user's personal information.
* Due Date: 11/02/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
* Print your Name here: Henrique Magaieski
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name, phoneNumber, address, city, state;
    int zipCode;
    ofstream userInfo;

    userInfo.open("D:\\List.txt");

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);

    cout << "Enter your street: ";
    getline(cin, address);

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your state: ";
    getline(cin, state);

    cout << "Enter your zip code: ";
    cin >> zipCode;

    userInfo << name << endl;
    userInfo << phoneNumber << endl;
    userInfo << address << endl;
    userInfo << city << endl;
    userInfo << state << endl;
    userInfo << zipCode << endl;

    cout << endl;

    cout << "This is your information: \n";

    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Address: " << address << endl;
    cout << setw(9) << " " << city << ", " << state << ", " << zipCode;
    
    return 0;
}