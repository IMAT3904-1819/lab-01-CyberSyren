// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <vector>

using namespace std; 

bool Guessed; 
int iremaining = 5; 
int iUser; 

int iGuess;

int main()
{
	srand(time(NULL));
	int iNumber = rand() % 1000 + 1;


	vector<int> previousGuesses;

	while (!Guessed)
	{
		

		cout << "Guess a number between 1 and 100" << endl;
		cout << "You will have 5 guesses, a clue will be given of higher or lower" << endl << endl;


		//cout << "The number has been selected:    " << iNumber << endl;

		

		cout << "Guesses Remaining = " << iremaining << endl << endl; 

		cout << "Please Guess the Number" << endl << endl; 

		for (int i = 100; i > 0; i--)
		{
			cin >> iUser;


			// \look at vector find operator...



			previousGuesses.push_back(iUser);

			 if (iUser > 1000)
			{
				cout << "Your guess was:  " << iUser << endl << "This is invalid." << endl;
				iremaining = iremaining;
				cout << "Guesses Remaining = " << iremaining << endl << endl;
			}
			else if (iUser < 0)
			{
				cout << "Your guess was:  " << iUser << endl << "This is invalid." << endl;
				iremaining = iremaining;
				cout << "Guesses Remaining = " << iremaining << endl << endl;
			}

			else if (iremaining == 1)
			{
				cout << "You have failed to guess the number." << endl << endl;
				cout << "The number was:   " << iNumber << endl;
				break;
			}

			else if (iUser > iNumber)
			{
				cout << "Your guess was:  " << iUser << endl << "This number is higher than the Computers Number" << endl;
				iremaining = iremaining - 1;
				cout << "Guesses Remaining = " << iremaining << endl << endl;
			}
			else if (iUser < iNumber)
			{
				cout << "Your guess was:  " << iUser << endl << "This number is lower than the Computers Number" << endl;
				iremaining = iremaining - 1;
				cout << "Guesses Remaining = " << iremaining << endl << endl;
			}

			else
			{
				cout << "Your guess was:  " << iUser << endl << "This matches the Computers Number Congratulations" << endl;

				Guessed = true;
				break;
			}
		}



		system("pause");

		break;
	}

	


}



