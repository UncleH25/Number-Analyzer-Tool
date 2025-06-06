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
	cout << "Enter as many numbers as you want (positive or negative (0 as the last number to exit)): \n";

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

		//Check for sentinel value
		if (number == 0)
		{
			cout << "Sentinel value 0 entered. Exiting...\n";
			break;
		}

		//Minimum and Maximum logic
		if (count == 0)
		{
			//Initialize max and min with the first valid number
			max = min = number; 
		}
		else
		{
			if (number > max) max = number;
			if (number < min) min = number;
		}

		//Count logic
		count++;
		//Check if even
		if (number % 2 == 0) even++;
		//Otherwise, it's odd
		else odd++;
		//Check if positive
		if (number > 0) positive++;
		//Otherwise, it's negative
		else negative++;
	}

	//Output results
	cout << fixed << setprecision(2);
	cout << "Total numbers entered: " << count << endl;
	cout << "Even numbers: " << even << endl;
	cout << "Odd numbers: " << odd << endl;
	cout << "Positive numbers: " << positive << endl;
	cout << "Negative numbers: " << negative << endl;
	if (count > 0) {
		cout << "Maximum number: " << max << endl;
		cout << "Minimum number: " << min << endl;
	}
	else {
		cout << "No valid numbers were entered." << endl;
	}

    return 0;
}
