#include <iostream>
using namespace std;

//In a survery of 16,500 customers, 15% purchase one or more energy drinks per week.
//Of those who purchase energy drinks, 58% of them prefer citrus flavor.
//Calculate and display the following:
//The approximate number of customers who purchase one or more energy drinks
//The approximate number of customers who prefer citrus flavor.

int main() {
	int surveyedCustomers = 16500,
	    purchasedEnergyDrinks = 0.15 * surveyedCustomers,
	    preferCitrus = 0.58 * (0.15 * surveyedCustomers);
	cout << "Out of 16,500 customers surveyed, " <<
		purchasedEnergyDrinks <<
		" purchase energy drinks at least once per week. Of those who purchase energy drinks, " <<
		preferCitrus <<
		" of them prefer citrus flavored drinks.\n";
}
