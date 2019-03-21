// -----------------------------------------------------
//
// Assignment #2
// Question: #2
// File name: qu2_tennisGameSimulation.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
// A tennis simulator that request from the user
// the probability in percentage for player A to win
// the game. 
//
// The simulation follows the following rules: 
//		- A point can be won by either player (A || B)
//		- A game is won when one player wins at least 
//		  4 points and leads the opponent by at least 
//		  two points.
//
// A loop is simulating a game until the requirements
// above are fullfilled. At that moment, a winner is 
// chosen and the program is terminated.
//
// -----------------------------------------------------

// Iclude the library and namespace to use cout
#include <iostream>					// cout, cin
#include <string>					// string
#include <cstdlib> 					// rand() and srand()
#include <ctime> 					// time()
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;


	int chanceGiven;				// The percentage of chance given by the user
	int scoreA = 0;					// The score of Player A
	int scoreB = 0;					// The score of Player B
	int minScore = 4;				// The minimum score to win a game
	int randomNum;					// A random number generated 
	bool gameSet = false;			// Bool to check if the game is over or not
	string winner;					// Winner's name is placed into this string


	// Print program title
	cout << "------------------------------------------------------------ \n"
		<< "               Simulation of a game of tennis                \n"
		<< "------------------------------------------------------------ \n"
		<< endl;


	// Request a number for the win probability of player A
	cout << "What is % chance that player \'A\' wins a point? \n"
		<< "<Enter a number between 0 and 100>: ";
	cin >> chanceGiven;
	cout << endl;


	// Make sure the numbers change over time 
	srand(time(NULL));


	// Make a while loop that check if the diff of the score and if the point is not set
	while(!gameSet)
	{
		// Get a random number on 100
		randomNum = rand() % 100 + 1;

		// Give the point depending on the random result and the percentage given by the user
		if (randomNum <= chanceGiven)
		{
			// Print A and give the point to player A
			cout << "A";
			scoreA ++;
		} else 
		{
			// Print B and give the point to player B
			cout << "B";
			scoreB++;
		}

		// Check the game progression based on tennis rules
		// For player A conditions
		if (scoreA >= minScore && scoreA - scoreB >= 2)
		{
			// Game is set, player A wins
			gameSet = true;
			winner = "A";
		}

		// For player B conditions
		if (scoreB >= minScore && scoreB - scoreA >= 2)
		{
			// Game is set, player B wins
			gameSet = true;
			winner = "B";
		}
	}


	// Final score is given when the game is set
	if (gameSet)
	{
		// Print the final score
		cout << "\n \n"
			<< "The final score is " << scoreA << " <A> - " << scoreB << " <B> \n"
			<< "==> The winner is player " << winner << "\n"
			<< endl;
	}
	

	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}