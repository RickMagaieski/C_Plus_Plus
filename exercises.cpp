#include <iostream>

using namespace std;

int main()
{

    double regularWages,
          basePayRate,
          regularHours,
          overtimeWages,
          overtimePayRate,
          overtimeHours,
          totalWages;      

    cout << "Enter the base pay rate: \n";
    cin >> basePayRate;

    cout << "Enter the hours worked (regular): \n";
    cin >> regularHours;

    cout << "Enter the overtime pay rate: \n";
    cin >> overtimePayRate;

    cout << "Enter the overtime hours worked: \n";
    cin >> overtimeHours;

   regularWages = basePayRate * regularHours; 
   overtimeWages = overtimePayRate * overtimeHours;
   totalWages = regularWages + overtimeWages;
   
   cout << "Wages for this week are $" << totalWages << endl;

   return 0;
   
}