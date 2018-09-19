#include <iostream>
#include <iomanip>
//#include <cmath>
#include <string>
using namespace std;

int main() {

	string month;
	int year;
	double totalCollected, totalSales, totalSalesTax, countySalesTax, stateSalesTax;

	cout << "This program will calculate the sales tax.\n";
	cout << "What month? ";
	cin >> month;
	cout << "What year? ";
	cin >> year;
	cout << "What is the total collected at the register? $";
	cin >> totalCollected;

	totalSales= totalCollected / 1.06;
	//the county sales tax is 2 percent, and the state sales tax is 4 perect.
	//this is the simplest way I could think of to do the calculation
	//but it would need to be changed to allow a different ratio of taxes.
	totalSalesTax = totalCollected - totalSales;
	countySalesTax = totalSalesTax / 3;
	stateSalesTax = countySalesTax * 2;

	cout << "For the month of " << month << ", " << year << ".\n\n";
	cout << fixed << setprecision(2);
	cout << "Total Collected : $ " << setw(8) << totalCollected << endl;
	cout << "Sales:            $ " << setw(8) << totalSales << endl;
	cout << "County Sales Tax: $ " << setw(8) << countySalesTax << endl;
	cout << "State Sales Tax:  $ " << setw(8) << stateSalesTax << endl;
	cout << "Total Sales Tax:  $ " << setw(8) << totalSalesTax << endl;


	return 0;
}
