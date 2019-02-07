// -----------------------------------------------------
//
// Assignment #1
// Question: #2
// File name: q2_magicMoney.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
// This program is converting Harry Potter's universe
// currencies (Galleons, Sickles and Knots) based 
// on user's input. 
//
// Keeping in mind of the following data:
// 1 Galleons = 17 Sickles
// 1 Sickles = 29 Knots 
//
// -----------------------------------------------------


// Iclude the library and namespace to use cout/cin
#include <iostream>
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;


	int numGalleons;	// User's number of Galleons
	int numSickles;		// User's number of Sickles
	int numKnuts;		// User's number of Knuts
	int totalSickles;	// Total value in Sickles
	int totalKnuts;		// Total value in Knuts


	// Print program title
	cout << "--------------------------------------------------------------------- \n"
		<< "                 Welcome to Harry Potter\'s Universe                  \n"
		<< "--------------------------------------------------------------------- \n"
		<< endl;



	// Print the question to the user and record user's inputs into variables
	cout << "How many Galleons, Sickles and Knuts do you want to convert to Knuts? ";
	cin >> numGalleons >> numSickles >> numKnuts;

	// Do the math to determine the total value in Knuts
	totalSickles = (numGalleons * 17) + numSickles;
	totalKnuts = (totalSickles * 29) + numKnuts;

	// Inform the user of the results
	cout << numGalleons << " Galleons, " << numSickles << " Sickles and " << numKnuts << " Knuts corresponds to " << totalKnuts << " Knuts. \n" << endl;



	// Print the second question and record user's input for one variable
	cout << "OK - let\'s do it the other way now. \n"
		<< "How many Knuts do you want to convert? ";
	cin >> totalKnuts;

	// Do the math to detemine the total value in all currencies
	// Calculating how many Sickles from Knuts and how many Knuts are remaining
	numSickles = totalKnuts / 29;
	numKnuts = totalKnuts % 29;

	// Calculating how many Galleons from Sickles and how many Sickles are remaining
	numGalleons = numSickles / 17;
	numSickles = numSickles % 17;

	// Print the result of the convertion
	cout << totalKnuts << " Knuts corresponds to " << numGalleons << " Galleons, " << numSickles << " Sickles, and " << numKnuts << " Knuts. \n"
		<< "\n"
		<< "You are now ready to go vacation in Harry Potter\'s Universe!" << endl;



	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}