#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENT = 3;
    const int NUM_SCORES = 5; 

    int numbers[NUM_STUDENT][NUM_SCORES] = {{2, 7, 9, 6, 4}, 
                                    {6, 1, 8, 9, 4}, 
                                    {4, 3, 7, 2, 9},}; 

    for (int count = 0; count < NUM_STUDENT; count++) 
    { 
        int total = 0;

        for (int count2 = 0; count2 < NUM_SCORES; count2++) 
        {    
            total += numbers[count][count2];
        }

        cout << "Student " << count + 1 << " had a total of " << total << " points." << endl;
    } 

    return 0;
}
