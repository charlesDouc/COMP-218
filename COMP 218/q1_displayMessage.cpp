// -----------------------------------------------------
//
// Assignment #1
// Question: #1
// File name: q1_displayMessage.cpp
// Written by: Charles Doucet - 40031595
// For Comp 218 Section EC/Winter 2019
//
// -----------------------------------------------------
// ---------------WHAT THIS CODE DO---------------------
// -----------------------------------------------------
//
// This program is displaying in the console
// a short message about the escape sequences.
//
// -----------------------------------------------------


// Iclude the library and namespace to use cout
#include <iostream>
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;


	// Print a message in the console using only one cout
	cout << "Welcome to my First C++ program! \n"
		 << "\n"
		 << "A \"quoted\" String is \n"
		 << "\'much\' better if you learn \n"
		 << "the rules of \"escape sequences.\" \n"
		 << "Also, \"\" represents an empty String. \n"
		 << "Dont't forget: use \\\" instead of \" ! \n"
		 << "\'\' is not the same as \" \n"
		 << "\n"
		 << "Written by Charles. All Done!!!!" << endl;


	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;
}