#include <iostream>
using namespace std;

char gameBoard[3][3] = { {'*','*','*'}, {'*','*','*'}, {'*','*','*'} };
void printBoard();
int checkWin();
void takeTurn(int);

int main() {
	do {
		printBoard();
		takeTurn(1);
		if (checkWin() == 1 || checkWin() == 3) break;
		printBoard();
		takeTurn(2);
	} while (checkWin() == 0);
	printBoard();
	if (checkWin() != 3)
		cout << "\n Player " << checkWin() << " wins!\n";
	else cout << "\nIt's a tie!\n";
	return 0;
}

void printBoard() {
	cout << "   0    1   2 " << endl
		<< "  -------------" << endl
		<< "0 | "<< gameBoard[0][0] <<" | "<< gameBoard[0][1] <<" | "<< gameBoard[0][2] <<" |" << endl
		<< "  -------------" << endl
		<< "1 | " << gameBoard[1][0] << " | " << gameBoard[1][1] << " | " << gameBoard[1][2] << " |" << endl
		<< "  -------------" << endl
		<< "2 | " << gameBoard[2][0] << " | " << gameBoard[2][1] << " | " << gameBoard[2][2] << " |" << endl
		<< "  -------------" << endl;
}

int checkWin() {
	//across horizontally player 1
	if (gameBoard[0][0] == 'x' && gameBoard[0][1] == 'x' && gameBoard[0][2] == 'x') return 1;
	if (gameBoard[1][0] == 'x' && gameBoard[1][1] == 'x' && gameBoard[1][2] == 'x') return 1;
	if (gameBoard[2][0] == 'x' && gameBoard[2][1] == 'x' && gameBoard[2][2] == 'x') return 1;
	//across vertically player 1
	if (gameBoard[0][0] == 'x' && gameBoard[1][0] == 'x' && gameBoard[2][0] == 'x') return 1;
	if (gameBoard[0][1] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][1] == 'x') return 1;
	if (gameBoard[0][2] == 'x' && gameBoard[1][2] == 'x' && gameBoard[2][2] == 'x') return 1;
	//diag player 1
	if (gameBoard[0][0] == 'x' && gameBoard[1][1] == 'x' && gameBoard[2][2] == 'x') return 1;
	if (gameBoard[2][0] == 'x' && gameBoard[1][1] == 'x' && gameBoard[0][2] == 'x') return 1;

	//across horizontally player 2
	if (gameBoard[0][0] == 'o' && gameBoard[0][1] == 'o' && gameBoard[0][2] == 'o') return 2;
	if (gameBoard[1][0] == 'o' && gameBoard[1][1] == 'o' && gameBoard[1][2] == 'o') return 2;
	if (gameBoard[2][0] == 'o' && gameBoard[2][1] == 'o' && gameBoard[2][2] == 'o') return 2;
	//across vertically player 2
	if (gameBoard[0][0] == 'o' && gameBoard[1][0] == 'o' && gameBoard[2][0] == 'o') return 2;
	if (gameBoard[0][1] == 'o' && gameBoard[1][1] == 'o' && gameBoard[2][1] == 'o') return 2;
	if (gameBoard[0][2] == 'o' && gameBoard[1][2] == 'o' && gameBoard[2][2] == 'o') return 2;
	//diag player 2
	if (gameBoard[0][0] == 'o' && gameBoard[1][1] == 'o' && gameBoard[2][2] == 'o') return 2;
	if (gameBoard[2][0] == 'o' && gameBoard[1][1] == 'o' && gameBoard[0][2] == 'o') return 2;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (gameBoard[i][j] == '*') return 0;
			else if (i == 2 && j == 2) return 3;
		}
	}
}

void takeTurn(int player) {
	int row, col;
	char letter[3] = { '*','x','o' };
	cout << "Player " << player << "'s turn.\n";
	cout << "Enter the row to play: ";
	cin >> row;
	cout << "Enter the column to play: ";
	cin >> col;
	if (gameBoard[row][col] == '*')
		gameBoard[row][col] = letter[player];
	else {
		cout << "Either that space is taken or you entered an illegal row/column combination! Try again.\n";
		takeTurn(player);
	}

}
