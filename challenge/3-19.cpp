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
	interestRate = interestRate / 12;

	cout << "Enter the number of payments  : ";
	cin >> numPayments;

	cout << "Enter the amount of the loan  : ";
	cin >> loanAmount;


	// monthly payment = ( (interestRate* (1+interestRate)^2) / ((1+interestRate)^2 - 1) ) * loanAmount
	monthlyPayment = ( (interestRate * pow((1+interestRate),numPayments)) / (pow((1+interestRate),numPayments) - 1)) * loanAmount;

	paidBack = monthlyPayment * numPayments;
	interestPaid = paidBack - loanAmount;

	cout << "Loan Amount          : " << loanAmount << endl;
	cout << "Monthly Interest Rate: " << interestRate << endl;
	cout << "Number of Payments   : " << numPayments << endl;
	cout << "Monthly Payment      : " << monthlyPayment << endl;
	cout << "Amount Paid Back     : " << paidBack << endl;
	cout << "Interest Paid        : " << interestPaid << endl;

	return 0;
}
