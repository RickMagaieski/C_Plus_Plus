#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << " \n";

    double const COST_PER_CUBIC_FOOT = 0.23, CHARGE_PER_CUBIC_FOOT = 0.5;
    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;

    cout << "Enter the length of the crate in feet: ";
    cin >> length;
    cout << "Enter the width of the crate in feet: ";
    cin >> width;
    cout << "Enter the height of the crate in feet: ";
    cin >> height;

    cout << " \n";

    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    cout << "The volume of the crate is: " << volume << " cubic feet." << endl;
    cout << "The cost to build the crate is: $" << cost << endl;
    cout << "The charge for the crate is: $" << charge << endl;
    cout << "The profit for the crate is: $" << profit << endl;

    cout << " \n";

    return 0;
}