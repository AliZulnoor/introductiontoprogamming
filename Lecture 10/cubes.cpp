#include<iostream>
using namespace std;
int main()
{
	int j;
	cout << "Please enter a number: ";
	cin >> j;
	if (!cin.fail() && j > 0)
	{
		for (int i = 1; i <= j; i++)
		{
			cout << " Number is: " << i << " and the cube of " << i << " is: " << i * i * i << endl;
		}
	}
	else
	{
		cout << "Please type a number and it should be greator than 0" << endl;
	}
	return 0;
}