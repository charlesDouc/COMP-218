// -----------------------------------------------------
//
// Assignment #1
// Question: #3
// File name: q3_stringVariables.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
// This program rewrite a word recorded by the user.
// The word is first analysed with the 1st letter,
// the mid letter than the last letter. 
//
// The program then rewrite the word by changing the
// original data of the analysed letters. Some letters
// are replaced, others are inserted.
//
// The user most write a word with an ODD lenght.
//
// -----------------------------------------------------


// Iclude the libraries and namespace to use cout/cin/string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;



	string userWord;		// Recorded wod by the user (must be ODD number)
	int letterCount;		// The word lenght (number of letter)
	char firstLetter;		// The first letter of the word
	char midLetter;			// The middle letter of the word
	char lastLetter;		// The last letter of the word


	// Print program title
	cout << "--------------------------------------------------------------------- \n"
		<< "                   Welcome to Charles\'s Word Coder                   \n"
		<< "--------------------------------------------------------------------- \n"
		<< endl;


	// Print the request to the user and record user's input into a variable
	cout << "Enter a word with an ODD number of characters: ";
	cin >> userWord;
	cout << endl;


	// Get the lenght of the word
	letterCount = userWord.length();

	// Recognized each key letter (1st, mid, last)
	firstLetter = userWord.at(0);
	midLetter = userWord.at(letterCount / 2);
	lastLetter = userWord.at(letterCount - 1);


	// Print feedback to the user and letters' information
	cout << "The word you entered is " << userWord << " which has " << letterCount << " characters.\n"
		<< "\t The 1st character is \'" << firstLetter << "\' \n"
		<< "\t The middle character is \'" << midLetter << "\' \n"
		<< "\t The last character is \'" << lastLetter << "\' \n"
		<< endl;


	// Change the value of each letter
	firstLetter += 1;
	midLetter += 2;
	lastLetter -= 1;

	// Assign the middle letter by the new one
	userWord.at(letterCount / 2) = midLetter;


	// Print new value after the coding process
	cout << "After the coding process...\n"
		<< "\t The new second character is \'" << firstLetter << "\' \n"
		<< "\t The new middle character is \'" << midLetter << "\' \n"
		<< "\t The new before the last character is \'" << lastLetter << "\' \n"
		<< endl;

	// Print the new word by inserting the new characters between the original string values
	// The number of letter count (word lenght) is always +2 the original word.
	cout << "The resulting word is \""
		<< userWord.at(0) << char(firstLetter) << userWord.substr(1, letterCount - 2) << char(lastLetter) << userWord.at(letterCount - 1)
		<< "\" which has " << letterCount + 2 << " characters. \n"
		<< endl;

	// Print the success message
	cout << "Mission accomplished!!!" << endl;



	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}