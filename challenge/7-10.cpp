
#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
#include<vector>
using namespace std;

char answerKey[20] = { 'a' , 'd' , 'b', 'b', 'c', 'b', 'a', 'b', 'c', 'd', 'a', 'c', 'd', 'b', 'd', 'c', 'c', 'a', 'd', 'b' };
char studentTest[20];
vector<int> incorrectAnswers;

void getAnswers();
void checkAnswers();

int main() {
	getAnswers();
	checkAnswers();

	if ((20 - incorrectAnswers.size()) >= 15)
		cout << "\nThe student has passed the test!\n";
	else cout << "The student has failed the test.\n";
	cout << "\n" << 20 - incorrectAnswers.size() << " questions answered correctly.\n" <<
		incorrectAnswers.size() << " questions answered incorrectly.\n" <<
		"Incorrectly answered questions: \n";
	for (int i = 0; i < incorrectAnswers.size(); i++) {
		cout << incorrectAnswers[i] + 1 << ": correct answer: " << answerKey[incorrectAnswers[i]] << endl;
	}


	return 0;
}

void getAnswers() {
	for (int i = 0; i < 20; i++) {
		while (!(studentTest[i] == 'a' || studentTest[i] == 'b' || studentTest[i] == 'c' || studentTest[i] == 'd')) {
			cout << "Enter the students answer for question " << i + 1 << ": ";
			cin >> studentTest[i];
			if (!(studentTest[i] == 'a' || studentTest[i] == 'b' || studentTest[i] == 'c' || studentTest[i] == 'd'))
				cout << "Enter 'a', 'b', 'c', or 'd'. Case sensitive!\n";
		}
	}
}

void checkAnswers() {
	for (int i = 0; i < 20; i++) {
		if (studentTest[i] != answerKey[i])
			incorrectAnswers.push_back(i);
	}
}
