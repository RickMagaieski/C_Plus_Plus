#include <iostream>
using namespace std;


int main()

{
	double station1, station2, station3, station4, station5, averageDelay;

	cout << "Delay Station 1: " << endl;
	cin >> station1;

	cout << "Delay Station 2: " << endl;
	cin >> station2; 

	cout << "Delay Station 3: " << endl;
	cin >> station3;

	cout << "Delay Station 4: " << endl;
	cin >> station4;

	cout << "Delay Station 5: " << endl;
	cin >> station5;

	averageDelay = (station1 + station2 + station3 + station4 + station5) / 5.0;

	cout << "Average delay was " << averageDelay << " seconds." << endl;

	return 0;

}
