/*
* Programmer: Henrique Magaieski
* Course: CMSC140 - CRN 20808
* Semester: Fall 2026
* Project: Personal Finance Calculator - Project 1
* Description: This is a Personal Finance Calculator to help with a financial summary.
* Due Date: 09/28/2026
* I pledge that I have completed the programming assignment independently.
* I have not copied the code from a student or any source.
* I have not given my code to any student.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    const double TAX_RATE = 0.15; // 15% tax rate
    const string COURSE = "CMSC140 CRN 20808", PROGRAMMER_NAME = "Henrique Magaieski", 
    SEMESTER = "Fall 2026", PROJECT = "Personal Finance Calculator", DUE_DATE = "09/28/2026"; 

    string fullName;
    double monthlyIncome, monthlyGrocery, monthlyUtilities, monthlyRent, 
    estimatedTax, netIncome, amountSavings, savingsPercentage, monthlyExpenses;

    cout << setprecision(2) << fixed << showpoint;

    cout << " \n";

    cout << "***************************************************************************************\n";

    cout << "Personal Finance Calculator\n" << "Welcome! This program will help you analyze your monthly finances.\n";

    cout << "***************************************************************************************\n";

    cout << " \n";

    cout << "Please enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your monthly gross income: ";
    cin >> monthlyIncome;

    cout << "Enter your monthly grocery expenses: ";
    cin >> monthlyGrocery;

    cout << "Enter your monthly utilities expenses: ";
    cin >> monthlyUtilities;

    cout << "Enter your monthly rent: ";
    cin >> monthlyRent;

    monthlyExpenses = monthlyGrocery + monthlyUtilities + monthlyRent;
    estimatedTax = monthlyIncome * TAX_RATE;
    netIncome = monthlyIncome - estimatedTax; 
    amountSavings = netIncome - monthlyExpenses; 
    savingsPercentage = (amountSavings / monthlyIncome) * 100;

    cout << " \n";

    cout << "***************************************************************************************\n";

    cout << "FINANCIAL SUMMARY:\n";

    cout << " \n";

    cout << left << setw(32) << "Name: " << " " << right << setw(10) << fullName << endl;
    cout << left << setw(32) << "Monthly Gross Income: " << "$" << right << setw(10) << monthlyIncome << endl;
    cout << left << setw(32) << "Monthly Expenses: " << "$" << right << setw(10) << monthlyExpenses << endl;
    cout << left << setw(32) << "Estimated Tax (15%): " << "$" << right << setw(10) << estimatedTax << endl;
    cout << left << setw(32) << "Net Monthly Income: " << "$" << right << setw(10) << netIncome << endl;
    cout << left << setw(32) << "Amount Available for Savings: " << "$" << right<< setw(10)<< amountSavings<< endl;
    cout << left << setw(32) << "Savings Percentage: " << " " << right << setw(10) << savingsPercentage << "%"<< endl;

    cout << "***************************************************************************************\n";

    cout << " \n";

    cout << "Thank you for using the Personal Finance Calculator. Goodbye!\n";

    cout << " \n";

    cout << "Programmer: " << PROGRAMMER_NAME << endl;
    cout << "Course: " << COURSE << endl;
    cout << "Semester: " << SEMESTER << endl;
    cout << "Project: " << PROJECT << endl;
    cout << "Due Date: " << DUE_DATE << endl;

    cout << " \n";

    return 0;
}