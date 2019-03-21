
// Iclude the libraries and namespace to use cout/cin/string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Print developer's name
	cout << "Initiate program. Made by Charles Doucet - 40031595 \n" << endl;


	int firstNum;			// First number given by the user
	int secondNum;			// Second number given by the user
	int multipleNum;		// Multiple number given by the user
	int totalMulti = 0;		// Total of multiplier in the range of number
	int totalSquare = 0;	// Sum of the square of all multiples number


	// Print program title
	cout << "------------------------------------------------------------ \n"
		<< "                      Welcome to Multiples                   \n"
		<< "------------------------------------------------------------ \n"
		<< endl;


	// Request two number from the user
	cout << "Please enter 2 numbers: \n";
	cin >> firstNum >> secondNum;

	// Ask user what is the multiples
	cout << "You want multiples of what number in that range? ";
	cin >> multipleNum;


	// Create a for loop to find all the multiples
	if (firstNum < secondNum)
	{
		for (int i = firstNum; i <= secondNum; i++)
		{
			// If i is a multiple, print it and add to count and square count
			if (i % multipleNum == 0)
			{
				cout << i << "          ";
				totalMulti++;
				totalSquare += i * i;
			}
		}
	}

	// if number are inverse
	if (firstNum > secondNum)
	{
		for (int i = secondNum; i <= firstNum; i++)
		{
			// If i is a multiple, print it and add to count and square count
			if (i % multipleNum == 0)
			{
				cout << i << "          ";
				totalMulti++;
				totalSquare += i * i;
			}
		}
	}


	// Once all the multiples are found
	cout << "\n\nThe number of multiples of " << multipleNum << " between " << firstNum << " and " << secondNum << " is " << totalMulti << ".\n"
		<< "The sum of their squares is " << totalSquare << ".\n"
		<< endl;

	// Terminate the programm
	cout << "\n\nEnd of Program." << endl;
	return 0;

}