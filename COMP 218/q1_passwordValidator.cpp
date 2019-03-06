// -----------------------------------------------------
//
// Assignment #2
// Question: #1
// File name: q1_passwordValidator.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
// A program that request the user to enter a password
// The password must required the following conditions:
//
//		- Must be at least 7 characters
//		- The length must be an odd number
//		- The middle character must be a digit
//		- The first letter must be uppercase
//		- The last letter must be uppercase
//
// -----------------------------------------------------


// Iclude the library and namespace to use cout
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;


	string userPassword;								// Password recorded by user's input
	string invalidLog = "Oops invalid password - ";		// Invalid message when the passord is wrong
	int minLenght = 7;									// The min lenght that the password can hold
	int passwordLenght;									// The password total lenght of character
	char firstLetter;									// The first character of the password
	char middleDigit;									// The middle character of the password (must be a digit)
	char lastLetter;									// The last character of the password


	// Print program title
	cout << "------------------------------------------------------------ \n"
		<< "          Welcome to Charles's Password Validator           \n"
		<< "------------------------------------------------------------ \n"
		<< endl;


	// Request a password from the user
	cout << "Enter password to be validated: ";
	cin >> userPassword;


	// Update variables based on user password submitted
	passwordLenght = userPassword.length();
	firstLetter = userPassword.at(0);
	middleDigit = userPassword.at(passwordLenght / 2);
	lastLetter = userPassword.at(passwordLenght - 1);


	// First, check if the password is at least 7 char
	if (passwordLenght < 6) 
		cout << invalidLog << "Length is less than 7" << endl;
	
	// Than check if the number of char is a odd number
	else if (passwordLenght % 2 == 0)
		cout << invalidLog << "Not an odd number of letters" << endl;

	// Check if the middle character is a digit
	else if (!isdigit(middleDigit))
		cout << invalidLog << "Middle character is not a digit" << endl;

	// Check if first character is an upper case letter (or not a digit)
	else if (firstLetter != toupper(firstLetter)  ||  isdigit(firstLetter))
		cout << invalidLog << "First character is not an upper case letter" << endl;

	// Lastly, check if last character is an upper case letter (or not a digit)
	else if (lastLetter != toupper(lastLetter)	||  isdigit(lastLetter))
		cout << invalidLog << "Last character is not an upper case letter" << endl;


	// If the password is actually correct
	else
	{
		cout << "Wow, it's a valid password. Well done. \n"
			<< "\n"
			<< "Here are the stats: \n"
			<< "\t Lenght: " << passwordLenght << "\n"
			<< "\t First character: " << firstLetter << "\n"
			<< "\t Last character: " << lastLetter << "\n"
			<< "\t Middle character: " << middleDigit << "\n"
			<< endl;
	}


	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}