#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double area, length, width;

    cout << setprecision (2) << fixed << showpoint;

    cout << "Enter the length of the rectangle in meters: \n";
    cin >> length;

    cout << "Enter the width of the rectangle in meters: \n";
    cin >> width;

    area = length * width;

    cout << "The area of the rectangle is: " << area << " square meters." << endl;

    return 0;
}