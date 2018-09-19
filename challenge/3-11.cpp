#include <iostream>
#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

int main() {

	double loanPayment, insurance, gas, oil, tires, maintainance, total;

	cout << "This program will tell you how much you're spending on your car.\n";
	cout << "What is your monthly loan payment? ";
	cin >> loanPayment;
	cout << "What is your montly insurance payment? ";
	cin >> insurance;
	cout << "How much do you spend on gas each month? ";
	cin >> gas;
	cout << "How much do you spend on oil changes per month? ";
	cin >> oil;
	cout << "How much do you spend changing tires per month? ";
	cin >> tires;
	cout << "How much do you spend on maintainance per month? ";
	cin >> maintainance;
	total = loanPayment + insurance + gas + oil + tires + maintainance;

	cout << fixed << setprecision(2);
	cout << "You spend $" << total << " on your automobile each month.\n";
	cout << "That's $" << total * 12 << " per year.\n";

	return 0;
}
