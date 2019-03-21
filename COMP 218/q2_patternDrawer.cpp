// -----------------------------------------------------
//
// Assignment #3
// Question: #2
// File name: q2_patternDrawer.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
//
//
// -----------------------------------------------------


// Libraries ---------------------------
#include <iostream>					// cout, cin
#include <string>					// string
using namespace std;


// Global variables --------------------
int userNumber;						// Integer given by the user


// Functions declarations --------------
void Header();						// Function to print the header of the program
int getInput(int x);						// Function to get user's numer
bool validInput(int y);					// Function to check if the user's number is valid



// ----------------------------------------------------- 
// Main													 
// ----------------------------------------------------- 
int main()
{
	// Print program title
	Header();


	// Make a for loop to check on the number of errors user is permitted to do
	for (int i = 0; i < 6; i++)
	{
		// Give instructions to the user
		cout << "\n"
			<< "Please enter an integer between 1 and 20 inclusive to get a pattern \n"
			<< "(Number 7, 13 and 19 are special) : ";

		// User input
		getInput(userNumber);

		cout << "Number given is : " << userNumber;

		// Check if the number entered is valid or not (break the loop if valid)
		if (validInput(userNumber))
			break;
	}


	if (validInput(userNumber))
	{
		cout << "valid";
	}
	else
	{
		// If the user failed to enter a valid number after 6 times, print this message
		cout << "\n"
			<< "---> Sorry, you have exceeded the allowed times to enter a valid number \n"
			<< "---> Program is now terminating... \n"
			<< endl;
	}


	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}



// ----------------------------------------------------- //
// Functions											 //
// ----------------------------------------------------- //
void Header()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;

	// Header of this program
	cout << "------------------------------------------------------------ \n"
		<< "             Welcome to Charles's Pattern Drawer             \n"
		<< "------------------------------------------------------------ \n"
		<< endl;
}


int getInput(int x)
{
	// Grab user input and return the integer
	cin >> x;
	return x;
}


bool validInput(int y)
{
	// Check if the user's number is valid
	if (y < 21)
		return true;
	else
		return false;
}

void drawPatternOdd()
{

}

