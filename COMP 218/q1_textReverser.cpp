// -----------------------------------------------------
//
// Assignment #3
// Question: #1
// File name: q1_textReverser.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
// Text Reverser Program first takes string data from 
// an external file (named A3Q3.dat). Each string line
// is then printed on the user's terminal. 
//
// After eachline read, a reverse copy of this one is
// written on antoher external file (named A3Q3.out).
//
// Once all lines are read and reversed in the output
// file, the program print a success message.
//
// -----------------------------------------------------

// Iclude the library and namespace to use cout
#include <iostream>					// cout, cin
#include <string>					// string
#include <fstream>					// get data from an external file
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;


	ifstream inData;				// Data file load
	ofstream outData;				// File that will output the reverse lines
	string lineRead;				// The line read from an external file


	// Print program title
	cout << "------------------------------------------------------------ \n"
		<< "         Welcome to Charles's Text Reverser Program          \n"
		<< "------------------------------------------------------------ \n"
		<< endl;


	// Load the data file
	inData.open("A3Q3.dat");
	outData.open("A3Q3.out");


	// Make sure the data files were loaded correctly
	if (inData && outData)
	{
		cout << "Text read in as is: \n" << endl;

		// Catch a line from the document (do it until there's no more)
		while (getline(inData, lineRead))
		{
			// Print the line
			cout << lineRead << "\n";
			
			// Use the function reverse(begin, end) to reverse the string line
			reverse(lineRead.begin(), lineRead.end());

			// Print the reverse line in the output file
			outData << lineRead << "\n";
		}

		// Print a success message
		cout << "\n"
			<< "Your text in reverse order is in file A3Q3.out \n"
			<< "\n"
			<< "Thank you for using Charles's Text Reverser Program"
			<< endl;
	}
	else
	{
		// Display an error message if the files could not open
		cout << "One or both of the targeted file do not exist.\n";
	}


	// Close the files
	inData.close();
	outData.close();
	

	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}