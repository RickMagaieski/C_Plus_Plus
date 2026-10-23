#include <iostream>
using namespace std;

int main()
{

    for (int number = 2; number <= 6; number++)
    {
        for (int number2 = 1; number2 <= 7 - number; number2++)
        {
            cout << number << " ";
        }

        cout << endl;
    }
}