/*
A local zoo wants to keep track of how many pounds of food each of its three monkeys eat each day during a typical week.
Store this information in a 3x5 array, each row representing a monkey, and each column a day of the week
Have the user input the data for each monkey, then generate a report with the following information:
-Average amount of food eaten per day by the whole family of monkeys
-The least amount of food eaten during the week by any one monkey
-The greatest amount of food eaten during the week by any one monkey
(Do not accept negative numbers for pounds of food.)
*/

#include <iostream>
//#include <iomanip>
//#include <cmath>
#include <string>
#include <vector>
using namespace std;

void getEaten();
float getAvg();
void greatestLeast();
void printReport();

string day[5] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
int foodEaten[3][5];

int main() {
	getEaten();
	cout << "\n";
	printReport();

	return 0;
}

void getEaten() {
	int input;
	for (int i = 0; i < 3; i++) { //iterate through monkeys
		for (int j = 0; j < 5; j++) { //iterate through days
			input = -1;
			while (input < 0) {
				cout << "How many pounds of food did monkey #" << i + 1 << " eat on " << day[j] << "? ";
				cin >> input;
				if (input >= 0) foodEaten[i][j] = input;
			}
		}
		cout << endl;
	}
}

float getAvg() {
	float average = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			average += foodEaten[i][j];
		}
	}
	average = average / 15;
	return average;
}

void greatestLeast() {
	int greatest = foodEaten[0][0], least = foodEaten[0][0];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (foodEaten[i][j] > greatest) {
				greatest = foodEaten[i][j];
			}
			else if (foodEaten[i][j] < least) {
				least = foodEaten[i][j];
			}
		}
	}
	cout << "The most food eaten in one day was " << greatest << " pounds.\n" <<
		"The least food eaten in one day was " << least << " pounds.\n";
}

void printReport() {
	cout << "The average amount of food eaten was " << getAvg() << " pounds.\n";
	greatestLeast();
}
