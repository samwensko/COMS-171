#include <iostream>
using namespace std;

//Display the amount of memory used by the following data types:
//char, int, float, double

int main() {
	cout << "Data type\tBytes" <<
		"\nchar   \t\t"   << sizeof(char) <<
		"\nint    \t\t"    << sizeof(int) <<
		"\nfloat  \t\t"  << sizeof(float) <<
		"\ndouble \t\t" << sizeof(double) << endl;
}
