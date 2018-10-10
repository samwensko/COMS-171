#include <iostream>
using namespace std;

int isPrime(int);

int main() {
	int number;
	cout << "Enter a number and I'll tell you if it's prime. ";
	cin >> number;
	
	if (isPrime(number)) cout << number << " is prime.\n";
	if (!isPrime(number)) cout << number << " is not prime. \n";

	return 0;
}

int isPrime(int number){
	int halfnum = int(number / 2);
	if (number == 4) return 0;
	for (int i = 2; i < halfnum; i++){
		if ((number % i) == 0){
			//cout << number << " is divisible by " << i << endl;
			return 0;
		}
	}
	return 1;
}
