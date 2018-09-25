#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

int main() {
	int month, day, year;
	cout << "The date June 10, 1960 is cool because " <<
	"the month times the day equals the year.\n";
	
	cout << "Enter a 2 digit month: ";
	cin >> month;
	cout << "Enter a 2 digit day: ";
	cin >> day;
	cout << "Enter a 2 digit year: ";
	cin >> year;
	
	if ( (month*day) == year) {
		cout << "This date is cool too!\n";
	}

	return 0;
}
