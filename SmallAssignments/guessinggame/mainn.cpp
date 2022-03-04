#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

// Guessing Game
void main()
{
	srand(time(NULL));
	int secretNumber{};
	int guessedNumber{};
	int numberOfGuesses{ 0 };
	secretNumber = rand() % 10 + 1;
	bool guessedCorrect = false;

	while (!guessedCorrect)
	{
		cout << "Guess: ";
		cin >> guessedNumber;
		
		numberOfGuesses++;

		if (guessedNumber == secretNumber)
		{
			guessedCorrect = true;
		}
		else 
		{
			cout << "Wrong" << endl;
		}
	}
	cout <<  guessedNumber << " is correct, it took you " << numberOfGuesses << " tries";


}