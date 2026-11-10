#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream readUserInfo;
    string information;

    readUserInfo.open("C:\\Users\\magai\\GitHub\\C_Plus_Plus\\Other_Docs\\inputCredits.txt");

    getline(readUserInfo, information);

    cout << information << endl;
    
    
    return 0;
}