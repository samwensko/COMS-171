#include <iostream>
#include <iomanip>
#include <cmath>
//#include <string>
using namespace std;

int main() {
	
	double principal, rate, total;
	int T; //times compounded

	cout << "This program will calculate interest earned.\n";
	cout << "Enter the starting amount of the account: $";
	cin >> principal;
	cout << "Enter the interest rate: ";
	cin >> rate;
	rate = rate / 100;
	cout << "How many times per year is interest compounded? ";
	cin >> T;

	total = principal * pow((1+(rate/T)),T);

	cout << "Interest Rate    : " << setw(8) << rate*100 << "%\n";
	cout << "Times Compounded : " << setw(8) << T << endl;
	cout << fixed << setprecision(2);
	cout << "Principal        : $" << setw(7) << principal << endl;
	cout << "Interest         : $" << setw(7) << total - principal << endl;
	cout << "Amount in Savings: $" << setw(7) << total << endl;


	return 0;
}
