#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	
	//ask for these values
	double loanAmount, interestRate, numPayments;
	//calculate these ones
	double monthlyPayment, paidBack, interestPaid;
	
	cout << "Loan Calculator\n";
	cout << "Enter the annual interest rate: ";
	
	cin >> interestRate;
	interestRate = (interestRate/100) / 12;

	cout << "Enter the number of payments  : ";
	cin >> numPayments;

	cout << "Enter the amount of the loan  : ";
	cin >> loanAmount;

	monthlyPayment = ( (interestRate * pow((1+interestRate),numPayments)) / (pow((1+interestRate),numPayments) - 1)) * loanAmount;

	paidBack = monthlyPayment * numPayments;
	interestPaid = paidBack - loanAmount;

	cout << "Loan Amount          : $" << setw(7) << loanAmount << endl;
	cout << "Monthly Interest Rate:  " << setw(6) <<interestRate*100 << "%" << endl;
	cout << "Number of Payments   :  " << setw(7) <<numPayments << endl;
	cout << "Monthly Payment      : $" << setw(7) <<monthlyPayment << endl;
	cout << "Amount Paid Back     : $" << setw(7) <<paidBack << endl;
	cout << "Interest Paid        : $" << setw(7) <<interestPaid << endl;

	return 0;
}
