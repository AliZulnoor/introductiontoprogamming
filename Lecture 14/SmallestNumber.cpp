#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int i;
	double x = 0, arr[10];
	cout << "Enter total number of elements(1 to 10): \n";
	// Store number entered by the user
	for (i = 0; i < 10; ++i)
	{
		cout << "Enter Number " << i + 1 << " : ";
		cin >> arr[i];

		while (cin.fail()) //if the user inputs anything else than a number then this will run
		{
			cout << "Incorrect command, kindly enter the number again ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> arr[i];
		}
	}
	x = arr[0];
	for (i = 0; i < 10; i++)
	{
		

		if (x > arr[i])
			x = arr[i];// x value will equal to the smallest value entered by the user
	}
	cout << "Smallest element = " << x;// printing smallest number

	return 0;
}
