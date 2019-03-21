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
// Program that draws a pattern depending on an integer
// selected by the user. The integer must be in the
// range of 1 to 20 to be valid. The user has 6 chances
// to enter a valid integer (otherwise, the program is
// terminated).
//
// The pattern drawn depends on if the integer is odd 
// or even (increasing * or decreasing *).
//
// Integer 7, 13 and 19 are special. They will draw
// a different pattern from the normal odd number one.
//
// -----------------------------------------------------


// Libraries ---------------------------
#include <iostream>							// cout, cin
#include <string>							// string
using namespace std;


// Global variables --------------------
int userNumber;								// Integer given by the user


// Functions declarations --------------
void Header();								// Function to print the header of the program
int getInput(int x);						// Function to get user's numer
bool validInput(int y);						// Function to check if the user's number is valid
void drawPatternOdd(int index);				// Function to draw a pattern if the number is odd
void drawPatternEven(int index);			// Function to draw a pattern if the number is even
void drawPatternSpecial(int index);			// Function to draw a pattern if the number is special



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

		// Get user's input
		userNumber = getInput(userNumber);

		// Check if the number entered is valid or not (break the loop if valid)
		if (validInput(userNumber))
			break;
	}



	// If the number entered is valid
	if (validInput(userNumber))
	{
		// Announce the pattern
		cout << "\n" << "Here is your pattern:  \n" << endl;

		// If number is Odd (and not special), draw the Odd pattern
		if (userNumber % 2 != 0 && userNumber != 7 && userNumber != 13 && userNumber != 19)
			drawPatternOdd(userNumber);

		// If the number is even, draw the even pattern
		if (userNumber % 2 == 0)
			drawPatternEven(userNumber);

		// If the number is special, draw the special pattern
		if (userNumber == 7 || userNumber == 13 || userNumber == 19)
			drawPatternSpecial(userNumber);


		// Write a success message once a pattern had been drawn
		cout << "\n\n" << "All done!" << endl;
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

// Function to print the header of the program ---------
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


// Function to get an int from the user ----------------
int getInput(int x)
{
	// Grab user input and return the integer
	cin >> x;
	return x;
}


// Function to check if an int is valid ----------------
bool validInput(int y)
{
	// Check if the user's number is valid
	if (y < 21 && y != 0)
		return true;
	else
		return false;
}


// Function to draw the odd pattern --------------------
void drawPatternOdd(int index)
{
	// A string cariables to old the pattern
	string oddPattern;

	// Populate the string before starting printing the pattern
	for (int i = 0; i <= index; i++)
	{
		// Add a star to the string
		oddPattern += "*";
	}

	// Start writing the pattern
	for (int i = index; i >= 1; i--)
	{
		// Delete a star (at the end of string) and print it
		oddPattern = oddPattern.substr(0, oddPattern.size() - 1);
		cout << oddPattern << endl;
	}
}


// Function to draw the even pattern -------------------
void drawPatternEven(int index)
{
	// A string cariables to old the pattern
	string evenPattern;

	// For loop until it reaches the user's number
	for (int i = 1; i <= index; i++)
	{
		// Add a star and print it on a line
		evenPattern += "*";
		cout << evenPattern << endl;
	}
}


// Function to draw the special pattern ----------------
void drawPatternSpecial(int index)
{
	// A string cariables to old the pattern
	string specialPattern;

	// For loop until it reaches the user's number
	for (int i = 1; i <= index; i++)
	{
		// Char variable that hold the number of current i
		string num = to_string(i);

		// Add a number to the string
		specialPattern += num;

		// If the added num is odd, draw the line
		if (i % 2 != 0)
			cout << specialPattern << endl;
	}


	// Once the inline numbers reache the index, start deleting them
	for (int i = index; i >= 1; i--)
	{
		// Delete a number (at the end of string), but check first if the number is over 9
		if (i < 10)
			specialPattern = specialPattern.substr(0, specialPattern.size() - 1);
		else
			specialPattern = specialPattern.substr(0, specialPattern.size() - 2);

		// If the deleted num is even, draw the line
		if (i % 2 == 0)
			cout << specialPattern << endl;
	}
}

