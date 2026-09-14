#include <iostream> 
using namespace std;

int main()
{

    const int DAYS = 3, SECONDS_PER_MINUTE = 60, MINUTES_PER_HOUR = 60, HOURS_PER_DAY = 24; 

    int hourDays = HOURS_PER_DAY * DAYS;
    int minutes = hourDays * MINUTES_PER_HOUR;
    int seconds = minutes * SECONDS_PER_MINUTE;

    cout << "The number of seconds in 3 days is: " << seconds << endl 
    << "The number of minutes in 3 days is: " << minutes << endl
    << "The number of hours in 3 days is: " << hourDays << endl;

    return 0;


}