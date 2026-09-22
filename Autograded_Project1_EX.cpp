#include <iostream>
using namespace std;

int main ()
{

    const double YEAR_0 = 25000;
    double year1, year2, year3, year4;

    year1 = YEAR_0 * 2;
    year2 = year1 * 2;
    year3 = year2 * 2;
    year4 = year3 * 2;


    cout << "The profit for year 1 was: " << year1 << " dollars\n" 
    << "The profit for year 2 was: " << year2 << " dollars\n"
    << "The profit for year 3 was: " << year3 << " dollars\n"
    << "The profit for year 4 was: " << year4 << " dollars\n";
 
    return 0;

}