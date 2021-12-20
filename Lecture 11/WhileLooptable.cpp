#include<iostream>
using namespace std;
int main()
{
	int a, i;
	cout << "Please enter a number that you want the table off: ";
	cin >> a;

	if (!cin.fail() && a > 0 )
	{
		int i = 1;
	while( i <= 10)
		{
			cout << a << " * " << i << " = " << a * i << endl;
			i++;
		}
	}
	else
	{
		cout << "\nPlease enter a number and make sure its greator than 0." << endl;
	}
	return 0;
}