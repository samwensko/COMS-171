#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
using namespace std;

double stockNet(double, double, double, double, double);

int main() {
	int numSales;
	double totalNet, numShares, sellPrice, sellCommission, buyPrice, buyCommission;


	cout << "Stock profit calculator\n";
	cout << "How many separate sales were there? ";
	cin >> numSales;
	for (int i = 0; i < numSales; i++){
		cout << "How many shares were sold in sale #" << i + 1 << "? ";
		cin >> numShares;
		cout << "At what price? ";
		cin >> sellPrice;
		cout << "What was the sale commission? ";
		cin >> sellCommission;
		cout << "What was the purchase price? ";
		cin >> buyPrice;
		cout << "What was the purchase commission? ";
		cin >> buyCommission;
		totalNet += stockNet(numShares, sellPrice, sellCommission, buyPrice, buyCommission);
	}
	cout << "The net profit for all sales was $" << totalNet << endl;


	return 0;
}

double stockNet(double numShares, double sellPrice, double sellCommission, double buyPrice, double buyCommission){
	double net;
	net = ((numShares * sellPrice) - sellCommission) - ((numShares * buyPrice) + buyCommission);
	return net;
}
