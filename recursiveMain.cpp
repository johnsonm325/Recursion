#include "recursive.hpp"

int main()
{
	Menu menu1;
	InputValid inputValid1;
	
	do
	{
		menu1.displayMenu();
		menu1.setChoice();
		
		// Passes a string to the reverseString function
		if (menu1.getChoice() == 1)
		{
			cout << "Enter a string, I will print it in reverse!" << endl;

			string str = inputValid1.isString();
			reverseString(str);
		}

		// Asks for array size, creates dynamic array, and adds numbers to the array based on user input
		if (menu1.getChoice() == 2)
		{
			cout << "How many integers would you like to find the sum of?" << endl;
			int numOfInt = inputValid1.isPosInteger();
			
			cout << "Enter the numbers you would like to sum, pressing enter after each number." << endl;

			int *sumArray = new int[numOfInt];
			for (int i = 0; i < numOfInt; i++)
			{
				int arrayNum = inputValid1.isPosInteger();
				sumArray[i] = arrayNum;
			}

			int sum = 0;
			sum = sumOfArray(sumArray, numOfInt);
			cout << sum << endl;
			
			// deletes the array

			delete[] sumArray;
			sumArray = NULL;
		}

		// Passes user input number to the triangularNum function
		if (menu1.getChoice() == 3)
		{
			cout << "Enter a number and I will find the triangular number." << endl;

			int numOfInt = inputValid1.isPosInteger();

			int sum;
			sum = 0;
			sum = triangularNum(numOfInt);
			cout << sum << endl;
		}
	
		// Exits program
	} while (menu1.getChoice() != 4);

	cout << "... Exiting program" << endl;

	cin.get();

	return 0;
}