#include <iostream>
//#include <iomanip>
#include <cmath>
//#include <string>
using namespace std;

int main() {
	int choice;
	double area;

	cout << "Geometry Calculator\n" <<
	"1. Calculate the Area of a Circle\n" <<
	"2. Calculate the Area of a Rectangle\n" <<
	"3. Calculate the Area of a Triangle\n" <<
	"4. Quit\n" <<
	"Enter your choice (1-4): ";
	choice = cin.get();

	switch(choice){
		case '1':
			double pi, radius;
			pi = 3.14159;
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			area = pi * pow(radius, 2);
			cout << "The area of a circle radius " <<
				radius << " is " << area << ".\n";
			break;

		case '2':
			double length, width;
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			area = length * width;
			cout << "The area of a rectangle with length " <<
				length << " and width " << width << 
				" is " << area << ".\n";
			break;
		case '3':
			double base, height;
			cout << "Enter the base of the triangle: ";
			cin >> base;
			cout << "Enter the height of the triangle: ";
			cin >> height;
			area = base * height * 0.5;
			cout << "The area of a triangle with base " <<
				base << " and height " << height <<
				" is " << area << ".\n";
			break;
		case '4':
			break;
		default: 
			cout << "You must enter a number 1-4.\n";
	}


	return 0;
}
