#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    ifstream wheater;
    float initialValue = 0, finalValueHot = 0, totalSum = 0, finalValueCold = 0;
    int dayHot = 0, dayCold = 0, num = 1;

    cout << setprecision(3) << fixed << showpoint;
    
    wheater.open("D:\\Text.txt");

    wheater >> initialValue;
    totalSum = initialValue;

    finalValueHot = initialValue;
    finalValueCold = initialValue;


    for (; num <= 359; num++)
    {
        wheater >> initialValue;
        totalSum += initialValue;

        if (initialValue > finalValueHot)
        {
            finalValueHot = initialValue;
            dayHot = num + 1;
        }
        
        if (initialValue < finalValueCold)
        {
            finalValueCold = initialValue;
            dayCold = num + 1; 
        }
    }

    wheater.close();

    cout << " \n";

    cout << "Average yearly temperature: " << (totalSum/360) << endl;
    cout << "Day "<< dayHot << " was the hottest, with a temperature of " << finalValueHot << " degrees Celsius." << endl;
    cout << "Day " << dayCold << " was the coldest, with a temperature of " << finalValueCold << " degrees Celsius." << endl;

    cout << " \n";

    return 0;