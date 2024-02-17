#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));

	int x = rand()%100+1;
	int guess = 0;
	int moves = 0;

	do {
		moves++;
		cout << "Guess a number: ";
		cin >> guess;

		if (guess == x){
			cout << "Congrats, you guessed right after " << moves << " guesses." <<endl;
		}
		else if (guess > x){
			cout << "Guess a lower number!";
			cout << endl;
		}
		else{
			cout << "Guess a higher number!";
			cout << endl;
		}
	} while (guess != x);
	



	system("pause");
	return 0;
}