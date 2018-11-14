#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

int strlen(char*);

int main() {
	char str[256];
	cout << "Enter a string: ";
	cin.getline(str, 256);

	cout << "That string is " << strlen(str) << " characters long.\n";


	return 0;
}

int strlen(char* s) {
	int len;
	for (len = 0; s[len] != 0; ++len);
	return len;
}
