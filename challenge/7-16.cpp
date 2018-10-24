#include <iostream>
//#include <iomanip>
//#include <cmath>
#include <string>
#include <fstream>
using namespace std;

void displayTeams();
int timesWon(string);

int main() {
	string choice;
	int choiceWon;
	displayTeams();
	
	cout << "\nChoose a team: ";
	getline(cin, choice);

	choiceWon = timesWon(choice);
	cout << choice << " won the World Series " << choiceWon << " times from 1903-2012\n";

	return 0;
}

void displayTeams() {
	ifstream infile("Teams.txt");
	string team;
	while (getline(infile, team)) {
		cout << team << endl;
	}
}

int timesWon(string team) {
	ifstream infile("WorldSeriesWinners.txt");
	string winner;
	int timesWon = 0;
	while (getline(infile, winner)) {
		if (winner == team) timesWon++;
	}
	return timesWon;
}
