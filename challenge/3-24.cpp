#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

int main() {
	double V, //number of grapevines that will fit in a row
	R, //length of the row in feet
	E, //amount of space used by end post assembly
	S; //space between vines in feet

	cout << "This program will calculate the number of grapevines that will fit in a row.\n";
	cout << "All values should be in FEET. This is America.\n";
	cout << "Enter the length of the row: ";
	cin >> R;
	cout << "Enter the amount of space used by an end-post assembly: ";
	cin >> E;
	cout << "Enter the amount of space between vines: ";
	cin >> S;

	V = (R - (2*E)) / S;

	cout << "Based on the above values, " << V << " vines will fit in a row.\n";


	return 0;
}
