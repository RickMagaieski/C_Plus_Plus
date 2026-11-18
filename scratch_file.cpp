#include <iostream>
using namespace std;

int main()
{
    const int NUMBERS = 5;
    int values[NUMBERS];

    for (int count = 0; count < NUMBERS; count++)
    {
        cout << "Type a value for [" << count << "] : ";
        cin >> values[count];
    }

    cout << endl;

    for (int count2 = 0; count2 < NUMBERS; count2++)
    {
        cout << "The value at ["<< count2 << "] is: " << values[count2] << endl;
    }

    return 0;
}