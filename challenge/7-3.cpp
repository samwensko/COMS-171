#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

void printSales(string[], int[]);

int main() {
	string salsaType[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int jarsSold[5];
	
	for (int i = 0; i < 5; i++){
		jarsSold[i] = -1;
		while (jarsSold[i] < 0){
			cout << "Enter the amount of " << salsaType[i] << " jars sold: ";
			cin >> jarsSold[i];
			if (jarsSold[i] < 0) cout << "Enter a positive value of jars!\n";
		}
	}	
	cout << "\n";
	printSales(salsaType, jarsSold);

	return 0;
}

void printSales(string salsaType[], int jarsSold[]){
	int mostSales[2], leastSales[2];
	mostSales[0] = jarsSold[0];
	leastSales[0] = jarsSold[0];
	for (int i = 0; i < 5; i++){
		if (jarsSold[i] > mostSales[0]) {
			mostSales[0] = jarsSold[i];
			mostSales[1] = i;
		} else if (jarsSold[i] < leastSales[0]){
			leastSales[0] = jarsSold[i];
			leastSales[1] = i;
		}
		cout << "Jars of " << salsaType[i] << " sold: " << jarsSold[i] << endl;
	}
	cout << "Our top seller was " << salsaType[mostSales[1]] << " salsa!\n";
	cout << "Our worst seller was " << salsaType[leastSales[1]] << " salsa.\n";
}
