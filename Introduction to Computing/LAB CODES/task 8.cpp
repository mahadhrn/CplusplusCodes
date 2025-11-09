// Guessing Game (Using Flag-Controlled While loop).

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num, guess, attempt,remainAttempt = 2;
	attempt = 1;
	bool isGuessed;
	srand(time(0));
	num = rand() % 5;
	isGuessed = false;

	while (attempt <= 2 && (!isGuessed))
	{
		cout << "Guess Number between 0 to 5 (" <<remainAttempt<< " Attempts Left) :  ";
		cin >> guess;
		remainAttempt--;
		
		if (guess == num){
			cout << "\nCorrectly Guessed :D \nThe Number is: " <<num<< endl<<endl;
			isGuessed = true;
		}
		else if (attempt <= 2){
			cout << "Try Again!\n" << endl;
			attempt++;
		}
	}
	
	if (!isGuessed)	{
		cout << "YOU LOSE! , The Number was: " << num << endl<<endl;
	}
	system("pause");
	return 0;
}
