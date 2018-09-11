#include <iostream>
using namespace std;

//Write a program that stores the following values in five different variables:
//28,32,27,24,33
//Then, calculate the sum of these five variables and store the result in a separate variable named sum.
//Then, divide the sum variable by 5 to get the average, and display the average on the screen.

int main() {
	double a = 28,
	       b = 32,
	       c = 37,
	       d = 24,
	       e = 33,
	       sum,
	       average;
	sum = a + b + c + d + e;
	average = sum / 5;
	cout << "The average is " << average << endl;
}
