#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double joggingMinutes, joggingCalories, 
    cyclingMinutes, cyclingCalories, swimmingMinutes, swimmingCalories;
    int choice;

    cout << "Fitness Activity Tracker\n";

    cout << "\n";

    cout << "1. Jogging\n2. Cycling\n3. Swimming\n4. Quit\n";

    cout << "\n";

    cout << "Enter you choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
        case 1: 
        {
            cout << "\nEnter the time spent jogging in minutes: ";
            cin >> joggingMinutes;
            
            cout << fixed << showpoint << setprecision(2);
            joggingCalories = 0.75 * joggingMinutes;

            cout << "\nCalories burned: " << joggingCalories << endl;

            break;
        }

        case 2:
        {
            cout << "\nEnter the time spent cycling in minutes: ";
            cin >> cyclingMinutes;
            
            cout << fixed << showpoint << setprecision(1);
            cyclingCalories = 0.5 * cyclingMinutes;

            cout << "\nCalories burned: " << cyclingCalories << endl;

            break;
        }

        case 3:
        {
            cout << "\nEnter the time spent swimming in minutes: ";
            cin >> swimmingMinutes;
            
            swimmingCalories = 0.8 * swimmingMinutes;

            cout << "\nCalories burned: " << static_cast<int>(swimmingCalories) << endl;

            break;
        }

        case 4:
        {
            cout << "\nProgram ending.\n";

            break;
        }

        default:
        {
            cout << "\nValid choices are 1 through 4. Try again.\n";
            
            break;
        }
    }

    return 0;
}