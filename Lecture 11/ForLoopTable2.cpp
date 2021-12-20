#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Please enter a number that you want the table off: ";
	cin >> a;
	cout << "\nPlease enter the number till where u want the table: ";
	cin >> b;
	if (!cin.fail() && a > 0 && b > 0)
	{
		for (int i = 1; i <= b; i++)
		{
			cout << a << " * " << i << " = " << a * i << endl;
		}
	}
	else
	{
		cout << "\nPlease enter a number and make sure its greator than 0." << endl;
	}
	return 0;
}