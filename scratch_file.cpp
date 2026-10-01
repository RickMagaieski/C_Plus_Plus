#include <iostream>
#include <iomanip>

using namespace std;


int main()

{

    int id = 1, score = 2, grade = 4, score2 = 6;

    cout << "Id" << setw(15) << "Score" << setw(15) << "Grade" << setw(15) << "Score2" << endl;
    cout << id << setw(14) << score << setw(15) << grade << setw(15) << score2;

    return 0;
}