#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

int isValid(int, const int*);

int main() {
	
	const int ACCOUNTS[] = { 5658845, 8080152, 1005231, 4520125, 4562555, 6545231, 7895122, 
		5552012, 3852085, 8777541, 5050552, 7576651, 7881200, 1302850, 1250255, 4581002 };	

	int accountNum;

	cout << "Enter your account number: ";
	cin >>	accountNum;

	if (isValid(accountNum, ACCOUNTS))
		cout << "That account number is valid.\n";
	else
		cout << "That account number is not valid.\n";

	return 0;
}

int isValid(int accountNum, const int* ACCOUNTS){
	for ( unsigned int i = 0; i < 16; i++) {
		if (accountNum == ACCOUNTS[i])
			return 1;
	}
	return 0;

}
