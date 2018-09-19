#include <iostream>
using namespace std;

int main() {
	
	double tankSize, maxMiles, mpg;

	cout << "This program will calculate a car's gas mileage.\n";
	
	cout << "How many gallons of gas can your tank hold? ";
	cin >> tankSize;
	
	cout << "How many miles can you drive before your tank is empty? ";
	cin >> maxMiles;

	mpg = maxMiles / tankSize;

	cout << "Your car can drive " << mpg << " miles on one gallon of gas.\n";

	return 0;
}
