#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double males, females, total, percentMale, percentFemale;

	cout << "This program will tell you the percentage of males and females in a class.\n";
	cout << "Enter the number of males  : ";
	cin >> males;
	cout << "Enter the number of females: ";
	cin >> females;
	
	total = males + females;
	percentMale = (males / total) * 100;
	percentFemale = (females / total) * 100;
	
	cout << setprecision(3);
	cout << "The class is " << percentMale << "% male.\n";
	cout << "The class is " << percentFemale << "% female.\n";

	return 0;
}
