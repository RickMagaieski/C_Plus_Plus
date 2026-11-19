#include <iostream>
using namespace std;

int getValidateInt(int minVal, int maxVal); //For menu choices and counts
double getValidatedScore(double minVal, double maxVal); //For individual scores
void inputScores(double scores[], int &count, int maxSize); //To read scores into the array
void displayScores(double scores[], int count); //To display all scores
void computeStats(double scores[], int count, double &total, double &average, 
    double &minVal, double &maxVal); //To compute the statistics
int linearSearch(double scores[], int count, double target); //To search for a value
void sortScores(double scores[], int count); //To sort the array in ascending order (bubble or selection sort)
void writeReportToFile(string fileName, string studentName, double scores[], int count, double total, 
    double average, double minVal, double maxVal); //Writes a full report (statistics + all scores) to an output file
void displayFooter(); //Displays the footer


int main()
{
    string studentName;
    int scoresArray[50], counting, chosenAmountScores;

    cout << endl;

    cout << "Welcome to the Student Scores Array Manager\n";

    cout << endl;

    cout << "Enter your name: ";
    getline(cin, studentName);

    cout << endl;

    cout << "----------------- Main Menu -----------------\n";

    cout << "1. Enter Scores\n" 
    << "2. Display Scores\n" 
    << "3. Show Statistics (and optional file report)\n"
    << "4. Search for a Score\n"
    << "5. Sort Scores (ascending)\n"
    << "Q. Exit\n";

    cout << endl;

    getValidateInt(1, 5);

    cout << endl;

    getValidatedScore(1, 50);
    
    cout << endl;



    return 0;

}

int getValidateInt(int minVal, int maxVal)
{
    int userInput;

    do
    {
        cout << "Enter you choice: ";
        cin >> userInput;

        if (userInput < minVal || userInput > maxVal)
        {
            cout << "\nInvalid menu choice. Please enter 1-5 or Q.";
        }

    } while (userInput < minVal || userInput > maxVal);

    return userInput;
}

double getValidatedScore(double minVal, double maxVal)
{
    double userInput;

    do
    {
        cout << "How many scores do you want to enter (1 - 50)?\n";
        cout << "Enter count: ";
        cin >> userInput;

        if (userInput < minVal || userInput > maxVal)
        {
            cout << "\nInvalid value. Please enter a value between 1 and 50.";
        }

    } while (userInput < minVal || userInput > maxVal);

    return userInput;
}

void inputScores(double scores[], int &count, int maxSize)
{
    for (count = 0; count < maxSize; count++)
    {

    }
}
