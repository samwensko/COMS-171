#include <iostream>
#include <iomanip>
//#include <cmath>
#include <string>
using namespace std;

int main() {
	
	string movieName;
	double adultTickets, childTickets, grossProfit, netProfit, paidToDistributor;

	cout << "This program will calculate gross and net box office profits.\n";
	cout << "Enter the name of the movie: ";
	getline(cin, movieName);

	cout << "How many Adult tickets were sold? ";
	cin >> adultTickets;
	cout << "How many Child tickets were sold? ";
	cin >> childTickets;

	grossProfit = (10.00 * adultTickets) + (6.00 * childTickets);
	netProfit = 0.2 * grossProfit;
	paidToDistributor = grossProfit - netProfit;

	cout << "Movie Name                : " << movieName << endl;
	cout << "Adult Tickets Sold        : " << setw(5) << adultTickets << endl;
	cout << "Child Tickets Sold        : " << setw(5) << childTickets << endl;
	cout << fixed << setprecision(2);
	cout << "Gross Box Office Profit   : $" << setw(6) << grossProfit << endl;
	cout << "Net Box Office Profit     : $" << setw(7) << netProfit << endl;
	cout << "Amount Paid to Distributor: $" << setw(6) << paidToDistributor << endl;
	
	return 0;
}
