#include <iostream>
using namespace std;

int main()
{
    int const PIN_NUMBER[4] = {0, 3, 4, 1};
    int userInput;
    bool verification = true;

    cout << endl;

    cout << "Type your PIN number: ";

    for (int count = 0; count < 4; count++)
    {
        cin >> userInput;

        if (PIN_NUMBER[count] != userInput)
        {
            verification = false;
        }
    }

    if (verification == false)
    {
        cout << "Wrong PIN Number. Transaction Declined.";
    }

    else
    {
        cout << "Transaction Approved!";
    }

    cout << endl;

    return 0;
}
