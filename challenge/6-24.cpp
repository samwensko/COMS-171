#include <iostream>
//#include <iomanip>
//#include <cmath>
#include <string>
#include <ctime>
using namespace std;

int getPlayerChoice();
int getCpuChoice();
string textChoice(int);
int decideVictor(int, int);

int main() {
	srand(unsigned(time(0)));
	int playAgain = 1;
	int playerChoice, cpuChoice;

	while (playAgain == 1){
		playerChoice = getPlayerChoice();
		cpuChoice = getCpuChoice();
		decideVictor(playerChoice, cpuChoice);
		cout << "Want to play again? (1 for yes, 0 for no) ";
		cin >> playAgain;	
	}

	return 0;
}

int getPlayerChoice(){
	int choice;
	cout << "1. Rock\n2. Paper\n3. Scissors\n> ";
	cin >> choice;
	return choice;
}

int getCpuChoice(){
	int choice = (rand()%3) + 1;
}

string textChoice(int choice){
	if (choice == 1) return "rock";
	if (choice == 2) return "paper";
	if (choice == 3) return "scissors";
}

int decideVictor(int playerChoice, int cpuChoice){
	cout << "You chose " << textChoice(playerChoice) <<
		"\nCPU chose " << textChoice(cpuChoice) << endl;
	if (playerChoice == cpuChoice) {
		cout << "It's a tie!\n";
	} else if (playerChoice == 1) {
		if (cpuChoice == 2) cout << "CPU wins!\n";
		else if (cpuChoice == 3) cout << "You win!\n";
	} else if (playerChoice == 2) {
		if (cpuChoice == 1) cout << "You win!\n";
		else if (cpuChoice == 3) cout << "CPU wins!\n";
	} else if (playerChoice == 3) {
		if (cpuChoice == 1) cout << "CPU wins!\n";
		else if (cpuChoice == 2) cout << "You win!\n";
	}
}
