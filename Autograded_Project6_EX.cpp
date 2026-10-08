#include <iostream>
using namespace std;

int main()
{
    char hemisphere;
    int month = 0;

    cout << "Enter a hemisphere (N - S): ";
    hemisphere = cin.get();

    cin.ignore();

    if (hemisphere == 'N' || hemisphere == 'S')
    {
        cout << "Enter a month number (1 - 12): ";
        cin >> month;

        if (month >= 1 && month <= 12)
        {   
            switch (hemisphere)
            {
                case 'N':
                {
                    if (month >= 3 && month <=5)
                    {
                        cout << "The season is Spring.";
                    }
                    else if (month >= 6 && month <= 8)
                    {
                        cout << "The season is Summer.";
                    }
                    else if (month >= 9 && month <= 11)
                    {
                        cout << "The season is Fall.";
                    }
                    else if (month == 12 && month >= 1 && month <= 2)
                    {
                        cout << "The season is Winter.";
                    }

                    break;
                }
                
                case 'S':
                {
                    if (month >= 3 && month <= 5)
                    {
                        cout << "The season is Fall.";
                    }
                    else if (month >= 6 && month <= 8)
                    {
                        cout << "The season is Winter.";
                    }
                    else if (month >= 9 && month <= 11)
                    {
                        cout << "The season is Spring.";
                    }
                    else if (month == 12 && month >= 1 && month <= 2)
                    {
                        cout << "The season is Summer.";
                    }

                    break;
                }
            }
        }

        else 
        {
            cout << "Please ente a valid month number (1 - 12).";
        }
    }

    else
    {
        cout << "Please enter a valid hemisphere (N - S).";
    }

    return 0;
}