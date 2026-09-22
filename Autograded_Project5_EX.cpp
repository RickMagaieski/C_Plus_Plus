#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string personName, eventLocation, specialGuest, theme, eventType;
    int guestNumber;

    cout << "Please enter your name: \n";
    getline(cin, personName);

    cout << "Please enter the type of event you are planning: \n";
    getline(cin, eventType);

    cout << "Please enter the location of the event: \n";
    getline(cin, eventLocation);

    cout << "Please enter the main theme or color scheme of the event: \n";
    getline(cin, theme);

    cout << "Please enter the name of a key guest of speaker: \n";
    getline(cin, specialGuest);

    cout << "Please enter the number of guests expected: \n";
    cin >> guestNumber;

    cout << "Hello " << personName << "!\n";
    cout << "Your " << eventType << " is all set to happen at " << eventLocation << ".\n";
    cout << "You can expect around " << guestNumber << " guests to join the celebration.\n";
    cout << "The event will be adorned with a " << theme << " theme, making it a memorable day.\n";
    cout << "Special guest " << specialGuest << " will be the highlight of the event.\n";
    cout << "We are looking forward to helping you make your event successful!\n";

    return 0;

}