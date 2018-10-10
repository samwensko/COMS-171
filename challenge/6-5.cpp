#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

double fallingDistance(double);

int main() {
	cout << "This program will list the distance fallen for an object that has been falling 1-10 seconds.\n";

	for (int i = 1; i <= 10; i++){
		cout << "An object that has been falling for " << i <<
			" seconds will have fallen " << fallingDistance(i) <<
			" meters.\n";
	}


	return 0;
}

double fallingDistance(double seconds){
	double distance;
	distance = (9.8 * (seconds * seconds)) * 0.5;
	return distance;
}
