#include <iostream>
#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

int main() {

	double score, total, average;

	cout << "This program will calculate the average of 5 test scores.\n";

	cout << "Enter score #1: ";
	cin >> score;
	total = score;

	cout << "Enter score #2: ";
	cin >> score;
	total = total + score;
	
	cout << "Enter score #3: ";
	cin >> score;
	total = total + score;

	cout << "Enter score #4: ";
	cin >> score;
	total = total + score;
	
	cout << "Enter score #5: ";
	cin >> score;
	total = total + score;

	average = total / 5;

	cout << fixed << setprecision(1) << "The average of the 5 scores is " << average << "%.\n";

	return 0;
}
