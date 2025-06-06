#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    //Variables
    int number;
	int count = 0, even = 0, odd = 0, positive = 0, negative = 0;
	int max = 0, min = 0;

    //Input
	cout << "Enter a number (positive or negative): \n";

	//While loop to process input
	while (true)
	{
		cin >> number;

		//Check for invalid input
		if (cin.fail())
		{
			//Clear the error flag
			cin.clear();
			//Discard invalid input
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid integer: \n";
			// Prompt for input again
			continue;
		}

		
	}

    return 0;
}
