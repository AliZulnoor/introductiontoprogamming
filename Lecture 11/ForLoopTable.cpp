#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Please enter a number that you want the table off: ";
	cin >> a;
	if (!cin.fail() && a > 0)
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << a << " * " << i << " = " << a * i << endl;
		}
	}
	else
	{
		cout << "Please enter a number and make sure its greator than 0." << endl;
	}
	return 0;
}