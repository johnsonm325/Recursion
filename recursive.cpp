/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/27/2017
** Description: Definitions of reverseString, sumOfArray and triangularNum
***************************************************************************************************/

#include "recursive.hpp"

// Prints a string in reverse
void reverseString(string n)
{
	// Ends the recursive function when the length of the string equals 0
	if (n.length() == 0)
	{
		cout << "\\n" << endl;
		cout << "End of string" << endl;
	}
	
	else
	{
		// Prints the last value of the string
		cout << n[n.length() - 1];
		// Recursively calls the function by passing the string with the last character erased
		reverseString(n.erase(n.length() - 1));
	}
}


// Adds all of the numbers in a dynamically allocated array from back to front
int sumOfArray(int array[], int n)
{
	// Returns 0 when the size of the array hits 0
	if (n == 0)
	{
		cout << "The sum of your numbers is: " << endl;
		return 0;
	}

	else
	{
		// Adds the last value of the array to the recursively called values of the array
		return array[n - 1] + sumOfArray(array, (n - 1));
	}
}


// Finds the triangular number of a number
int triangularNum(int n)
{
	if (n == 0)
	{
		cout << "The triangular number is: " << endl;
		return 0;
	}

	// returns the value of the number added to the recursively called value minus 1
	else
	{
		return (n + triangularNum(n - 1));
	}
}