#include <iostream>
using namespace std;

void getScore(int);
void calcAverage();
double findLowest();

double scores[5];

int main() {
	getScore(0);
	getScore(1);
	getScore(2);
	getScore(3);
	getScore(4);
	calcAverage();
	return 0;
}

void getScore(int i){
	scores[i] = -1;
	while (scores[i] < 0 || scores[i] > 100){
		cout << "Enter score #" << i + 1 << ": ";
		cin >> scores[i];
		if (scores[i] < 0 || scores[i] > 100) cout << "Enter a value between 0-100.\n";
	}
}

void calcAverage(){
	int foundLowest;
	double lowest = findLowest(), total, average;
	for (int i = 0; i < 5; i++){
		if (scores[i] == lowest && !foundLowest){
			foundLowest = 1;
		} else total += scores[i];
	}	
	average = total / 4;
	cout << "The average of the 4 highest scores is " << average << endl;
}

double findLowest(){
	double lowest = 101;
	for (int i = 0; i < 5; i++){
		if (scores[i] < lowest) lowest = scores[i];
	}
	return lowest;
}
