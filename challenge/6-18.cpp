#include <iostream>
#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

double getSqft(double);
double getPaintGallons(double);
double getLaborHours(double);
double getLaborCost(double);
double getPaintCost(double, double);

int main() {
	int rooms;
	double paintPrice, sqft, paintGallons, laborHours, laborCost, paintCost;
	cout << "This program will calculate the cost of painting an interior of a house.\n";
	
	while (rooms < 1) {
		cout << "How many rooms are in the house? ";
		cin >> rooms;
		if (rooms < 1) cout << "There is at least 1 room in your house.\n";
	}
	
	while (paintPrice < 10){
		cout << "How much does a gallon of paint cost? ";
		cin >> paintPrice;
		if (paintPrice < 10) cout << "Paint costs more than $10.\n";
	}

	sqft = getSqft(rooms);
	paintGallons = getPaintGallons(sqft);
	laborHours = getLaborHours(sqft);
	laborCost = getLaborCost(laborHours);
	paintCost = getPaintCost(paintPrice, paintGallons);
	
	cout << "Gallons of paint: " << paintGallons << endl;
	cout << "Hours of labor:   " << laborHours << endl;
	cout << fixed << setprecision(2);
	cout << "Cost of paint:   $" << paintCost << "/gal\n";
	cout << "Labor cost:      $" << laborCost << endl;
	cout << "Total cost:      $" << laborCost + paintCost << endl;

	return 0;
}

double getSqft(double rooms){
	double result, sqft;
	for (int i = 0; i < rooms; i++){
		sqft = -1;
		while (sqft < 0){
			cout << "How many square feet of wall space in room #" <<
				i + 1 << "? ";
			cin >> sqft;
			if (sqft < 0) cout << "Enter a positive value for sqaure feet.\n";
			result += sqft;
		}
	}
	return result;
}

double getPaintGallons(double sqft){
	double result;
	result = sqft / 110;
	return result;
}

double getLaborHours(double sqft){
	double result;
	result = (sqft / 110) * 8;
	return result;
}

double getLaborCost(double laborHours){
	double result;
	result = laborHours * 25;
	return result;
}

double getPaintCost(double paintPrice, double paintGallons){
	double result;
	result = paintPrice * paintGallons;
	return result;
}
