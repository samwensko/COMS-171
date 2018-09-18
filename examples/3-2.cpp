#include <iostream>
using namespace std;

int main() {
	int length, width, area;

	cout << "This program calculates the area of a rectangle.\n";
	cout << "Enter the length and width of the rectangle ";
	cin >> length >> width;
	area = length * width;
	if (area <= 0){
		cout << "Please enter a nonzero integer.\n";
	} 
	else {
		cout << "The area of the rectangle is " << area << ".\n";
	}
	return 0;
}
