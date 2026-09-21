#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    double const PI = 3.14;
    double radius, area;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Enter the radius of the circle (m): ";
    cin >> radius;

    area = PI * pow(radius, 2);

    cout << "The area of the circle is: " << area << " square meters." << endl;

    return 0;
}
