#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

double getSqft(double);
double getLaborCost(double);
double getPaintCost(double, double);

int main() {
	int rooms;
	double paintPrice, sqft, laborCost, paintCost, totalCost, laborHours;

	cout << "This program will calculate the cost of painting the interior of your home.\n" <<
		"How many rooms are in your home? ";
	cin >> rooms;
	cout << "What is the cost of paint? ";
	cin >> paintPrice;
	
	sqft = getSqft(rooms);
	laborCost = getLaborCost(sqft);
	paintCost = getPaintCost(paintPrice, sqft);
	totalCost = laborCost + paintCost;
	cout << "Gallons of paint required: " << (sqft / 110) << endl;
	cout << "Labor hours required:      " << laborHours << endl;
	cout << "The cost of paint:         " << paintCost << endl;
	cout << "The labor charges:         " << laborCost << endl;
	cout << "The total cost:            " << totalCost << endl;

	return 0;
}

double getSqft(double rooms){
	double result, sqft;
	for (int i = 0; i < rooms; i++){
		cout << "How many square feet of wall space in room #" <<
			i + 1 << "? ";
		cin >> sqft;
		result += sqft;
	}
	return result;
}

double getLaborCost(double sqft){
	double hours, result;
	hours = (sqft / 110) * 8;
	result = hours * 25;
	return result;
}

double getPaintCost(double paintPrice, double sqft){
	double gallons, result;
	gallons = (sqft / 110);
	result = gallons * paintPrice;
	return result;
}
